# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /home/xuxiao/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/xuxiao/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xuxiao/git/C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xuxiao/git/C/cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/24_11_11-2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/24_11_11-2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/24_11_11-2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/24_11_11-2.dir/flags.make

CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.o: CMakeFiles/24_11_11-2.dir/flags.make
CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.o: /home/xuxiao/git/C/src/learn/24_11_11-2.c
CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.o: CMakeFiles/24_11_11-2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/xuxiao/git/C/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.o -MF CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.o.d -o CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.o -c /home/xuxiao/git/C/src/learn/24_11_11-2.c

CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xuxiao/git/C/src/learn/24_11_11-2.c > CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.i

CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xuxiao/git/C/src/learn/24_11_11-2.c -o CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.s

# Object files for target 24_11_11-2
24_11_11__2_OBJECTS = \
"CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.o"

# External object files for target 24_11_11-2
24_11_11__2_EXTERNAL_OBJECTS =

24_11_11-2: CMakeFiles/24_11_11-2.dir/src/learn/24_11_11-2.c.o
24_11_11-2: CMakeFiles/24_11_11-2.dir/build.make
24_11_11-2: CMakeFiles/24_11_11-2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/xuxiao/git/C/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 24_11_11-2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/24_11_11-2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/24_11_11-2.dir/build: 24_11_11-2
.PHONY : CMakeFiles/24_11_11-2.dir/build

CMakeFiles/24_11_11-2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/24_11_11-2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/24_11_11-2.dir/clean

CMakeFiles/24_11_11-2.dir/depend:
	cd /home/xuxiao/git/C/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xuxiao/git/C /home/xuxiao/git/C /home/xuxiao/git/C/cmake-build-release /home/xuxiao/git/C/cmake-build-release /home/xuxiao/git/C/cmake-build-release/CMakeFiles/24_11_11-2.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/24_11_11-2.dir/depend

