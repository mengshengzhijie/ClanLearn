# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\jetbrains\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = D:\jetbrains\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Users\MengShengZhiJie\cLangLearn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Users\MengShengZhiJie\cLangLearn\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/24-10-8_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/24-10-8_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/24-10-8_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/24-10-8_1.dir/flags.make

CMakeFiles/24-10-8_1.dir/src/learn/24-10-8_1.c.obj: CMakeFiles/24-10-8_1.dir/flags.make
CMakeFiles/24-10-8_1.dir/src/learn/24-10-8_1.c.obj: D:/Users/MengShengZhiJie/cLangLearn/src/learn/24-10-8_1.c
CMakeFiles/24-10-8_1.dir/src/learn/24-10-8_1.c.obj: CMakeFiles/24-10-8_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Users\MengShengZhiJie\cLangLearn\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/24-10-8_1.dir/src/learn/24-10-8_1.c.obj"
	D:\jetbrains\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/24-10-8_1.dir/src/learn/24-10-8_1.c.obj -MF CMakeFiles\24-10-8_1.dir\src\learn\24-10-8_1.c.obj.d -o CMakeFiles\24-10-8_1.dir\src\learn\24-10-8_1.c.obj -c D:\Users\MengShengZhiJie\cLangLearn\src\learn\24-10-8_1.c

CMakeFiles/24-10-8_1.dir/src/learn/24-10-8_1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/24-10-8_1.dir/src/learn/24-10-8_1.c.i"
	D:\jetbrains\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Users\MengShengZhiJie\cLangLearn\src\learn\24-10-8_1.c > CMakeFiles\24-10-8_1.dir\src\learn\24-10-8_1.c.i

CMakeFiles/24-10-8_1.dir/src/learn/24-10-8_1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/24-10-8_1.dir/src/learn/24-10-8_1.c.s"
	D:\jetbrains\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Users\MengShengZhiJie\cLangLearn\src\learn\24-10-8_1.c -o CMakeFiles\24-10-8_1.dir\src\learn\24-10-8_1.c.s

# Object files for target 24-10-8_1
24__10__8_1_OBJECTS = \
"CMakeFiles/24-10-8_1.dir/src/learn/24-10-8_1.c.obj"

# External object files for target 24-10-8_1
24__10__8_1_EXTERNAL_OBJECTS =

24-10-8_1.exe: CMakeFiles/24-10-8_1.dir/src/learn/24-10-8_1.c.obj
24-10-8_1.exe: CMakeFiles/24-10-8_1.dir/build.make
24-10-8_1.exe: CMakeFiles/24-10-8_1.dir/linkLibs.rsp
24-10-8_1.exe: CMakeFiles/24-10-8_1.dir/objects1.rsp
24-10-8_1.exe: CMakeFiles/24-10-8_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\Users\MengShengZhiJie\cLangLearn\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 24-10-8_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\24-10-8_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/24-10-8_1.dir/build: 24-10-8_1.exe
.PHONY : CMakeFiles/24-10-8_1.dir/build

CMakeFiles/24-10-8_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\24-10-8_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/24-10-8_1.dir/clean

CMakeFiles/24-10-8_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Users\MengShengZhiJie\cLangLearn D:\Users\MengShengZhiJie\cLangLearn D:\Users\MengShengZhiJie\cLangLearn\cmake-build-release D:\Users\MengShengZhiJie\cLangLearn\cmake-build-release D:\Users\MengShengZhiJie\cLangLearn\cmake-build-release\CMakeFiles\24-10-8_1.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/24-10-8_1.dir/depend

