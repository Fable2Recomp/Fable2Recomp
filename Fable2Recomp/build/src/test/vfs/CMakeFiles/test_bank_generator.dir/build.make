# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build

# Include any dependencies generated for this target.
include src/test/vfs/CMakeFiles/test_bank_generator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/test/vfs/CMakeFiles/test_bank_generator.dir/compiler_depend.make

# Include the progress variables for this target.
include src/test/vfs/CMakeFiles/test_bank_generator.dir/progress.make

# Include the compile flags for this target's objects.
include src/test/vfs/CMakeFiles/test_bank_generator.dir/flags.make

src/test/vfs/CMakeFiles/test_bank_generator.dir/codegen:
.PHONY : src/test/vfs/CMakeFiles/test_bank_generator.dir/codegen

src/test/vfs/CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.o: src/test/vfs/CMakeFiles/test_bank_generator.dir/flags.make
src/test/vfs/CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.o: /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/src/test/vfs/test_bank_generator.cpp
src/test/vfs/CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.o: src/test/vfs/CMakeFiles/test_bank_generator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/test/vfs/CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.o"
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/test/vfs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/test/vfs/CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.o -MF CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.o.d -o CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.o -c /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/src/test/vfs/test_bank_generator.cpp

src/test/vfs/CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.i"
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/test/vfs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/src/test/vfs/test_bank_generator.cpp > CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.i

src/test/vfs/CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.s"
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/test/vfs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/src/test/vfs/test_bank_generator.cpp -o CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.s

# Object files for target test_bank_generator
test_bank_generator_OBJECTS = \
"CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.o"

# External object files for target test_bank_generator
test_bank_generator_EXTERNAL_OBJECTS =

src/test/vfs/test_bank_generator: src/test/vfs/CMakeFiles/test_bank_generator.dir/test_bank_generator.cpp.o
src/test/vfs/test_bank_generator: src/test/vfs/CMakeFiles/test_bank_generator.dir/build.make
src/test/vfs/test_bank_generator: src/test/vfs/CMakeFiles/test_bank_generator.dir/compiler_depend.ts
src/test/vfs/test_bank_generator: src/vfs/libvfs.a
src/test/vfs/test_bank_generator: src/gpu/libgpu.a
src/test/vfs/test_bank_generator: /lib/libvulkan.so
src/test/vfs/test_bank_generator: /usr/lib/libz.so
src/test/vfs/test_bank_generator: src/test/vfs/CMakeFiles/test_bank_generator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_bank_generator"
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/test/vfs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_bank_generator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/test/vfs/CMakeFiles/test_bank_generator.dir/build: src/test/vfs/test_bank_generator
.PHONY : src/test/vfs/CMakeFiles/test_bank_generator.dir/build

src/test/vfs/CMakeFiles/test_bank_generator.dir/clean:
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/test/vfs && $(CMAKE_COMMAND) -P CMakeFiles/test_bank_generator.dir/cmake_clean.cmake
.PHONY : src/test/vfs/CMakeFiles/test_bank_generator.dir/clean

src/test/vfs/CMakeFiles/test_bank_generator.dir/depend:
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/src/test/vfs /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/test/vfs /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/test/vfs/CMakeFiles/test_bank_generator.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/test/vfs/CMakeFiles/test_bank_generator.dir/depend

