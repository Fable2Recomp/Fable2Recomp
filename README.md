# Fable 2 Recomp

**Fable2Recomp** is a recompilation Project with hopes to port the game Fable 2 to Windows and Linux. It uses a static recompilation approach based on the Xenia Canary project, streamlining the process and fixing various issues that may arise during decompilation and recompilation.

## Features
- User-friendly interface for ease of use.
- Plans for enhancing the game with high-resolution support up to 1080p, 2K, 4K, and beyond.
- Plans for improving the frame rate to 60fps and beyond, reaching up to 240fps.
- Enhanced graphics for a superior gaming experience.
- Cross architecture and OS - (x86_64, ARM) (Windows, Linux, Mac, Android?)

## Issues

### Unrecognized Instruction
During the recompilation process, you might encounter "Unrecognized instruction" errors. These need to be implemented into XenonRecomp to fully fix these files. This ensures that the recompilation process is accurate and complete.

## Seeking Help
We need assistance with:
1. Cleaning up and verifying SIMDe implementation.
2. Locating and implementing/stubbing missing Xbox 360 functions.
3. Pulling Shaders from Fable 2 using Xenos Recomp
4. Building graphical pipeline and gui using SDL3, Vulkan/D3D12/Metal.

## How to Build an exe from the cpp code
```
clang -o output.exe ppc_func_mapping.cpp ppc_recomp.*.cpp -std=c++20 -O2 -mssse3 -msse4.1 -mavx -MP -pthread
```

## Contributing
We are looking for help and we are willing to learn coding and help where we can, we are also open to others joining the project and teaching us if possible. If you have experience or are willing to learn and help out, your support would be greatly appreciated. We're eager to enhance the game with high-resolution support, improved frame rates, and enhanced graphics.

We welcome contributions to Fable2Recomp! If you're interested in enhancing Fable 2 and have the skills or willingness to learn, please join us. Feel free to open a PR if you want to contribute.

Join the Discord at https://discord.gg/zVVtGbEsCR

## XenonRecomp
https://github.com/hedge-dev/XenonRecomp

The current version of Xenon Recomp used for the Fable 2 Recomp can be found at https://github.com/Fable2Recomp/XenonRecomp

## XenonsRecomp
https://github.com/hedge-dev/XenosRecomp
