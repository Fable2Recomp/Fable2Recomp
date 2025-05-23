#include <stdafx.h>
#include <apu/audio.h>
#include <cpu/guest_thread.h>
#include <kernel/heap.h>
#include <os/logger.h>
#include <user/config.h>

#include <SDL3/SDL.h>

#define SDL_AUDIO_DEVICE_DEFAULT_OUTPUT 0

static PPCFunc* g_clientCallback{};
static uint32_t g_clientCallbackParam{}; // pointer in guest memory

static SDL_AudioDeviceID g_audioDevice{};
static SDL_AudioStream* g_audioStream{};
static bool g_downMixToStereo = false;

static void CreateAudioDevice()
{
    if (g_audioDevice)
        SDL_CloseAudioDevice(g_audioDevice);
    if (g_audioStream)
        SDL_DestroyAudioStream(g_audioStream);

    bool surround = Config::ChannelConfiguration == EChannelConfiguration::Surround;

    SDL_AudioSpec spec{};
    spec.format = SDL_AUDIO_F32;
    spec.channels = surround ? XAUDIO_NUM_CHANNELS : 2;
    spec.freq = XAUDIO_SAMPLES_HZ;

    g_audioDevice = SDL_OpenAudioDevice(SDL_AUDIO_DEVICE_DEFAULT_OUTPUT, &spec);
    if (!g_audioDevice)
    {
        LOGFN_ERROR("Failed to open audio device: {}", SDL_GetError());
        return;
    }

    SDL_AudioSpec src_spec = spec;
    SDL_AudioSpec dst_spec = spec;

    g_audioStream = SDL_CreateAudioStream(&src_spec, &dst_spec);
    if (!g_audioStream)
    {
        LOGFN_ERROR("Failed to create audio stream: {}", SDL_GetError());
        return;
    }

    SDL_ResumeAudioDevice(g_audioDevice);
    g_downMixToStereo = (spec.channels == 2);
}

void XAudioInitializeSystem()
{
    SDL_SetHint(SDL_HINT_AUDIO_CATEGORY, "playback");
    SDL_SetHint(SDL_HINT_AUDIO_DEVICE_APP_ICON_NAME, "Fable2 Recompiled");

    if (SDL_Init(SDL_INIT_AUDIO) < 0)
    {
        LOGFN_ERROR("Failed to init audio subsystem: {}", SDL_GetError());
        return;
    }

    CreateAudioDevice();
}

static std::unique_ptr<std::thread> g_audioThread;
static volatile bool g_audioThreadShouldExit;

static void AudioThread()
{
    using namespace std::chrono_literals;

    GuestThreadContext ctx(0);
    size_t channels = g_downMixToStereo ? 2 : XAUDIO_NUM_CHANNELS;

    while (!g_audioThreadShouldExit)
    {
        uint32_t queuedAudioSize = SDL_GetAudioStreamAvailable(g_audioStream);
        constexpr size_t MAX_LATENCY = 10;
        const size_t callbackAudioSize = channels * XAUDIO_NUM_SAMPLES * sizeof(float);

        if ((queuedAudioSize / callbackAudioSize) <= MAX_LATENCY)
        {
            ctx.ppcContext.r3.u32 = g_clientCallbackParam;
            g_clientCallback(ctx.ppcContext, g_memory.base);
        }

        auto now = std::chrono::steady_clock::now();
        constexpr auto INTERVAL = 1000000000ns * XAUDIO_NUM_SAMPLES / XAUDIO_SAMPLES_HZ;
        auto next = now + (INTERVAL - now.time_since_epoch() % INTERVAL);

        std::this_thread::sleep_for(std::chrono::floor<std::chrono::milliseconds>(next - now));

        while (std::chrono::steady_clock::now() < next)
            std::this_thread::yield();
    }
}

static void CreateAudioThread()
{
    g_audioThreadShouldExit = false;
    g_audioThread = std::make_unique<std::thread>(AudioThread);
}

void XAudioRegisterClient(PPCFunc* callback, uint32_t param)
{
    auto* pClientParam = static_cast<uint32_t*>(g_userHeap.Alloc(sizeof(param)));
    ByteSwapInplace(param);
    *pClientParam = param;
    g_clientCallbackParam = g_memory.MapVirtual(pClientParam);
    g_clientCallback = callback;

    CreateAudioThread();
}

void XAudioSubmitFrame(void* samples)
{
    auto floatSamples = reinterpret_cast<be<float>*>(samples);

    if (g_downMixToStereo)
    {
        std::array<float, 2 * XAUDIO_NUM_SAMPLES> audioFrames;

        for (size_t i = 0; i < XAUDIO_NUM_SAMPLES; i++)
        {
            float ch0 = floatSamples[0 * XAUDIO_NUM_SAMPLES + i];
            float ch1 = floatSamples[1 * XAUDIO_NUM_SAMPLES + i];
            float ch2 = floatSamples[2 * XAUDIO_NUM_SAMPLES + i];
            float ch4 = floatSamples[4 * XAUDIO_NUM_SAMPLES + i];
            float ch5 = floatSamples[5 * XAUDIO_NUM_SAMPLES + i];

            audioFrames[i * 2 + 0] = (ch0 + ch2 * 0.75f + ch4) * Config::MasterVolume;
            audioFrames[i * 2 + 1] = (ch1 + ch2 * 0.75f + ch5) * Config::MasterVolume;
        }

        SDL_PutAudioStreamData(g_audioStream, audioFrames.data(), sizeof(audioFrames));
    }
    else
    {
        std::array<float, XAUDIO_NUM_CHANNELS * XAUDIO_NUM_SAMPLES> audioFrames;

        for (size_t i = 0; i < XAUDIO_NUM_SAMPLES; i++)
        {
            for (size_t j = 0; j < XAUDIO_NUM_CHANNELS; j++)
                audioFrames[i * XAUDIO_NUM_CHANNELS + j] =
                    floatSamples[j * XAUDIO_NUM_SAMPLES + i] * Config::MasterVolume;
        }

        SDL_PutAudioStreamData(g_audioStream, audioFrames.data(), sizeof(audioFrames));
    }

    SDL_FlushAudioStream(g_audioStream);
}

