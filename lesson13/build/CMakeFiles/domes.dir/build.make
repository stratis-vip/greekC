# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.12.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.12.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/stratis/Desktop/development/cLang/greekC/lesson13

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stratis/Desktop/development/cLang/greekC/lesson13/build

# Include any dependencies generated for this target.
include CMakeFiles/domes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/domes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/domes.dir/flags.make

CMakeFiles/domes.dir/domes.c.o: CMakeFiles/domes.dir/flags.make
CMakeFiles/domes.dir/domes.c.o: ../domes.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stratis/Desktop/development/cLang/greekC/lesson13/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/domes.dir/domes.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/domes.dir/domes.c.o   -c /Users/stratis/Desktop/development/cLang/greekC/lesson13/domes.c

CMakeFiles/domes.dir/domes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/domes.dir/domes.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/stratis/Desktop/development/cLang/greekC/lesson13/domes.c > CMakeFiles/domes.dir/domes.c.i

CMakeFiles/domes.dir/domes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/domes.dir/domes.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/stratis/Desktop/development/cLang/greekC/lesson13/domes.c -o CMakeFiles/domes.dir/domes.c.s

CMakeFiles/domes.dir/Users/stratis/Desktop/development/cLang/greekC/includes/mio.c.o: CMakeFiles/domes.dir/flags.make
CMakeFiles/domes.dir/Users/stratis/Desktop/development/cLang/greekC/includes/mio.c.o: /Users/stratis/Desktop/development/cLang/greekC/includes/mio.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stratis/Desktop/development/cLang/greekC/lesson13/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/domes.dir/Users/stratis/Desktop/development/cLang/greekC/includes/mio.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/domes.dir/Users/stratis/Desktop/development/cLang/greekC/includes/mio.c.o   -c /Users/stratis/Desktop/development/cLang/greekC/includes/mio.c

CMakeFiles/domes.dir/Users/stratis/Desktop/development/cLang/greekC/includes/mio.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/domes.dir/Users/stratis/Desktop/development/cLang/greekC/includes/mio.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/stratis/Desktop/development/cLang/greekC/includes/mio.c > CMakeFiles/domes.dir/Users/stratis/Desktop/development/cLang/greekC/includes/mio.c.i

CMakeFiles/domes.dir/Users/stratis/Desktop/development/cLang/greekC/includes/mio.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/domes.dir/Users/stratis/Desktop/development/cLang/greekC/includes/mio.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/stratis/Desktop/development/cLang/greekC/includes/mio.c -o CMakeFiles/domes.dir/Users/stratis/Desktop/development/cLang/greekC/includes/mio.c.s

# Object files for target domes
domes_OBJECTS = \
"CMakeFiles/domes.dir/domes.c.o" \
"CMakeFiles/domes.dir/Users/stratis/Desktop/development/cLang/greekC/includes/mio.c.o"

# External object files for target domes
domes_EXTERNAL_OBJECTS =

domes: CMakeFiles/domes.dir/domes.c.o
domes: CMakeFiles/domes.dir/Users/stratis/Desktop/development/cLang/greekC/includes/mio.c.o
domes: CMakeFiles/domes.dir/build.make
domes: CMakeFiles/domes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stratis/Desktop/development/cLang/greekC/lesson13/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable domes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/domes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/domes.dir/build: domes

.PHONY : CMakeFiles/domes.dir/build

CMakeFiles/domes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/domes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/domes.dir/clean

CMakeFiles/domes.dir/depend:
	cd /Users/stratis/Desktop/development/cLang/greekC/lesson13/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stratis/Desktop/development/cLang/greekC/lesson13 /Users/stratis/Desktop/development/cLang/greekC/lesson13 /Users/stratis/Desktop/development/cLang/greekC/lesson13/build /Users/stratis/Desktop/development/cLang/greekC/lesson13/build /Users/stratis/Desktop/development/cLang/greekC/lesson13/build/CMakeFiles/domes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/domes.dir/depend

