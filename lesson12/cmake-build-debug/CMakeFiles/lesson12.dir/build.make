# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/stratis/Desktop/development/cLang/greekC/lesson12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stratis/Desktop/development/cLang/greekC/lesson12/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lesson12.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lesson12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lesson12.dir/flags.make

CMakeFiles/lesson12.dir/main.c.o: CMakeFiles/lesson12.dir/flags.make
CMakeFiles/lesson12.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stratis/Desktop/development/cLang/greekC/lesson12/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lesson12.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lesson12.dir/main.c.o   -c /Users/stratis/Desktop/development/cLang/greekC/lesson12/main.c

CMakeFiles/lesson12.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lesson12.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/stratis/Desktop/development/cLang/greekC/lesson12/main.c > CMakeFiles/lesson12.dir/main.c.i

CMakeFiles/lesson12.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lesson12.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/stratis/Desktop/development/cLang/greekC/lesson12/main.c -o CMakeFiles/lesson12.dir/main.c.s

CMakeFiles/lesson12.dir/main.c.o.requires:

.PHONY : CMakeFiles/lesson12.dir/main.c.o.requires

CMakeFiles/lesson12.dir/main.c.o.provides: CMakeFiles/lesson12.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/lesson12.dir/build.make CMakeFiles/lesson12.dir/main.c.o.provides.build
.PHONY : CMakeFiles/lesson12.dir/main.c.o.provides

CMakeFiles/lesson12.dir/main.c.o.provides.build: CMakeFiles/lesson12.dir/main.c.o


# Object files for target lesson12
lesson12_OBJECTS = \
"CMakeFiles/lesson12.dir/main.c.o"

# External object files for target lesson12
lesson12_EXTERNAL_OBJECTS =

lesson12: CMakeFiles/lesson12.dir/main.c.o
lesson12: CMakeFiles/lesson12.dir/build.make
lesson12: CMakeFiles/lesson12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stratis/Desktop/development/cLang/greekC/lesson12/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable lesson12"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lesson12.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lesson12.dir/build: lesson12

.PHONY : CMakeFiles/lesson12.dir/build

CMakeFiles/lesson12.dir/requires: CMakeFiles/lesson12.dir/main.c.o.requires

.PHONY : CMakeFiles/lesson12.dir/requires

CMakeFiles/lesson12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lesson12.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lesson12.dir/clean

CMakeFiles/lesson12.dir/depend:
	cd /Users/stratis/Desktop/development/cLang/greekC/lesson12/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stratis/Desktop/development/cLang/greekC/lesson12 /Users/stratis/Desktop/development/cLang/greekC/lesson12 /Users/stratis/Desktop/development/cLang/greekC/lesson12/cmake-build-debug /Users/stratis/Desktop/development/cLang/greekC/lesson12/cmake-build-debug /Users/stratis/Desktop/development/cLang/greekC/lesson12/cmake-build-debug/CMakeFiles/lesson12.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lesson12.dir/depend
