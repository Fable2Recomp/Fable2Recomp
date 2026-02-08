# Fable 2 Recomp

**Fable2Recomp** is a recompilation Project with hopes to port the game Fable 2 to Windows and Linux. It uses a static recompilation approach based on the [ReXGlue] (https://github.com/rexglue/rexglue-sdk) project, streamlining the process and fixing various issues that may arise during decompilation and recompilation.

This Recomp is currently based off [Fable 2 GOTY](https://en.wikipedia.org/wiki/Fable_II) TU1

## Features
- User-friendly interface for ease of use.
- Plans for enhancing the game with high-resolution support up to 1080p, 2K, 4K, and beyond.
- Plans for improving the frame rate to 60fps and beyond, reaching up to 240fps.
- Enhanced graphics for a superior gaming experience.
- Cross architecture and OS - (x86_64, ARM) (Windows, Linux, Mac, Android?)

## Building Fable2Recomp

### Installing the ReXGlue SDK
Download the latest release and extract it to a location of your choice. This will be your `REXSDK` path. Set this as an environment variable using your preferred method.

### Prerequisites (non-Visual Studio users only)

- Clang 20
- CMake
- Ninja
- [vcpkg](https://github.com/microsoft/vcpkg)
- Latest Release from [Releases](https://github.com/rexglue/rexglue-sdk/releases)

#### Building from source

```bash
git clone --recursive https://github.com/rexglue/rexglue-sdk
cd rexglue
cmake --preset <platform>
cmake --build out/build/<platform>
cmake --install out/build/<platform> --prefix <REXSDK path>
```

Where `<platform>` is `win-amd64` or `linux-amd64`. The build step compiles all configurations (Debug, Release, RelWithDebInfo) at once.

### Fable 2 Project configuration

To build Fable 2, run codegen from the root with all assests in the assets folder and build:

```bash
git clone --recursive https://github.com/rexglue/rexglue-sdk
cd Fable2Recomp
rexglue codegen Fable-2_config.toml
cmake --preset <platform>
cmake --build out/build/<platform>
```

## Contributing
We are looking for help and we are willing to learn coding and help where we can, we are also open to others joining the project and teaching us if possible. If you have experience or are willing to learn and help out, your support would be greatly appreciated. We're eager to enhance the game with high-resolution support, improved frame rates, and enhanced graphics.

We welcome contributions to Fable2Recomp! If you're interested in enhancing Fable 2 and have the skills or willingness to learn, please join us. Feel free to open a PR if you want to contribute.
Join the Discord server at https://discord.gg/zVVtGbEsCR
