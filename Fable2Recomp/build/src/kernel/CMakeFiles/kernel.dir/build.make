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
include src/kernel/CMakeFiles/kernel.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/kernel/CMakeFiles/kernel.dir/compiler_depend.make

# Include the progress variables for this target.
include src/kernel/CMakeFiles/kernel.dir/progress.make

# Include the compile flags for this target's objects.
include src/kernel/CMakeFiles/kernel.dir/flags.make

src/kernel/CMakeFiles/kernel.dir/codegen:
.PHONY : src/kernel/CMakeFiles/kernel.dir/codegen

src/kernel/CMakeFiles/kernel.dir/kernel.cpp.o: src/kernel/CMakeFiles/kernel.dir/flags.make
src/kernel/CMakeFiles/kernel.dir/kernel.cpp.o: /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/src/kernel/kernel.cpp
src/kernel/CMakeFiles/kernel.dir/kernel.cpp.o: src/kernel/CMakeFiles/kernel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/kernel/CMakeFiles/kernel.dir/kernel.cpp.o"
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/kernel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/kernel/CMakeFiles/kernel.dir/kernel.cpp.o -MF CMakeFiles/kernel.dir/kernel.cpp.o.d -o CMakeFiles/kernel.dir/kernel.cpp.o -c /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/src/kernel/kernel.cpp

src/kernel/CMakeFiles/kernel.dir/kernel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/kernel.dir/kernel.cpp.i"
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/kernel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/src/kernel/kernel.cpp > CMakeFiles/kernel.dir/kernel.cpp.i

src/kernel/CMakeFiles/kernel.dir/kernel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/kernel.dir/kernel.cpp.s"
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/kernel && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/src/kernel/kernel.cpp -o CMakeFiles/kernel.dir/kernel.cpp.s

# Object files for target kernel
kernel_OBJECTS = \
"CMakeFiles/kernel.dir/kernel.cpp.o"

# External object files for target kernel
kernel_EXTERNAL_OBJECTS =

src/kernel/libkernel.a: src/kernel/CMakeFiles/kernel.dir/kernel.cpp.o
src/kernel/libkernel.a: src/kernel/CMakeFiles/kernel.dir/build.make
src/kernel/libkernel.a: src/kernel/CMakeFiles/kernel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libkernel.a"
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/kernel && $(CMAKE_COMMAND) -P CMakeFiles/kernel.dir/cmake_clean_target.cmake
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/kernel && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kernel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/kernel/CMakeFiles/kernel.dir/build: src/kernel/libkernel.a
.PHONY : src/kernel/CMakeFiles/kernel.dir/build

src/kernel/CMakeFiles/kernel.dir/clean:
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/kernel && $(CMAKE_COMMAND) -P CMakeFiles/kernel.dir/cmake_clean.cmake
.PHONY : src/kernel/CMakeFiles/kernel.dir/clean

src/kernel/CMakeFiles/kernel.dir/depend:
	cd /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/src/kernel /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/kernel /home/mattscreative/Documents/GitHub/Fable2Recomp/Fable2Recomp/build/src/kernel/CMakeFiles/kernel.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/kernel/CMakeFiles/kernel.dir/depend

