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
CMAKE_SOURCE_DIR = /home/xuxiao/CLionProjects/cLangLearn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xuxiao/CLionProjects/cLangLearn/cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/25_1_12-3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/25_1_12-3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/25_1_12-3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/25_1_12-3.dir/flags.make

CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.o: CMakeFiles/25_1_12-3.dir/flags.make
CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.o: /home/xuxiao/CLionProjects/cLangLearn/src/learn/25_1_12-3.c
CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.o: CMakeFiles/25_1_12-3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/xuxiao/CLionProjects/cLangLearn/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.o -MF CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.o.d -o CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.o -c /home/xuxiao/CLionProjects/cLangLearn/src/learn/25_1_12-3.c

CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/xuxiao/CLionProjects/cLangLearn/src/learn/25_1_12-3.c > CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.i

CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/xuxiao/CLionProjects/cLangLearn/src/learn/25_1_12-3.c -o CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.s

# Object files for target 25_1_12-3
25_1_12__3_OBJECTS = \
"CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.o"

# External object files for target 25_1_12-3
25_1_12__3_EXTERNAL_OBJECTS =

25_1_12-3: CMakeFiles/25_1_12-3.dir/src/learn/25_1_12-3.c.o
25_1_12-3: CMakeFiles/25_1_12-3.dir/build.make
25_1_12-3: CMakeFiles/25_1_12-3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/xuxiao/CLionProjects/cLangLearn/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 25_1_12-3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/25_1_12-3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/25_1_12-3.dir/build: 25_1_12-3
.PHONY : CMakeFiles/25_1_12-3.dir/build

CMakeFiles/25_1_12-3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/25_1_12-3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/25_1_12-3.dir/clean

CMakeFiles/25_1_12-3.dir/depend:
	cd /home/xuxiao/CLionProjects/cLangLearn/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xuxiao/CLionProjects/cLangLearn /home/xuxiao/CLionProjects/cLangLearn /home/xuxiao/CLionProjects/cLangLearn/cmake-build-release /home/xuxiao/CLionProjects/cLangLearn/cmake-build-release /home/xuxiao/CLionProjects/cLangLearn/cmake-build-release/CMakeFiles/25_1_12-3.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/25_1_12-3.dir/depend

