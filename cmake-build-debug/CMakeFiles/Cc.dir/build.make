# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_BINARY_DIR = /home/xuxiao/git/C/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Cc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Cc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Cc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cc.dir/flags.make

CMakeFiles/Cc.dir/src/learn/Cc.c.o: CMakeFiles/Cc.dir/flags.make
CMakeFiles/Cc.dir/src/learn/Cc.c.o: /home/xuxiao/git/C/src/learn/Cc.c
CMakeFiles/Cc.dir/src/learn/Cc.c.o: CMakeFiles/Cc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/xuxiao/git/C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Cc.dir/src/learn/Cc.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Cc.dir/src/learn/Cc.c.o -MF CMakeFiles/Cc.dir/src/learn/Cc.c.o.d -o CMakeFiles/Cc.dir/src/learn/Cc.c.o -c /home/xuxiao/git/C/src/learn/Cc.c

CMakeFiles/Cc.dir/src/learn/Cc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Cc.dir/src/learn/Cc.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xuxiao/git/C/src/learn/Cc.c > CMakeFiles/Cc.dir/src/learn/Cc.c.i

CMakeFiles/Cc.dir/src/learn/Cc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Cc.dir/src/learn/Cc.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xuxiao/git/C/src/learn/Cc.c -o CMakeFiles/Cc.dir/src/learn/Cc.c.s

# Object files for target Cc
Cc_OBJECTS = \
"CMakeFiles/Cc.dir/src/learn/Cc.c.o"

# External object files for target Cc
Cc_EXTERNAL_OBJECTS =

Cc: CMakeFiles/Cc.dir/src/learn/Cc.c.o
Cc: CMakeFiles/Cc.dir/build.make
Cc: CMakeFiles/Cc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/xuxiao/git/C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Cc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Cc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cc.dir/build: Cc
.PHONY : CMakeFiles/Cc.dir/build

CMakeFiles/Cc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Cc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Cc.dir/clean

CMakeFiles/Cc.dir/depend:
	cd /home/xuxiao/git/C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xuxiao/git/C /home/xuxiao/git/C /home/xuxiao/git/C/cmake-build-debug /home/xuxiao/git/C/cmake-build-debug /home/xuxiao/git/C/cmake-build-debug/CMakeFiles/Cc.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Cc.dir/depend

