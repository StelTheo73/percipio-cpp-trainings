# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/build

# Include any dependencies generated for this target.
include CMakeFiles/vid06.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/vid06.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/vid06.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vid06.dir/flags.make

CMakeFiles/vid06.dir/main.cpp.o: CMakeFiles/vid06.dir/flags.make
CMakeFiles/vid06.dir/main.cpp.o: /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/src/main.cpp
CMakeFiles/vid06.dir/main.cpp.o: CMakeFiles/vid06.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vid06.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vid06.dir/main.cpp.o -MF CMakeFiles/vid06.dir/main.cpp.o.d -o CMakeFiles/vid06.dir/main.cpp.o -c /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/src/main.cpp

CMakeFiles/vid06.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vid06.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/src/main.cpp > CMakeFiles/vid06.dir/main.cpp.i

CMakeFiles/vid06.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vid06.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/src/main.cpp -o CMakeFiles/vid06.dir/main.cpp.s

CMakeFiles/vid06.dir/lib/function_overloading.cpp.o: CMakeFiles/vid06.dir/flags.make
CMakeFiles/vid06.dir/lib/function_overloading.cpp.o: /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/src/lib/function_overloading.cpp
CMakeFiles/vid06.dir/lib/function_overloading.cpp.o: CMakeFiles/vid06.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/vid06.dir/lib/function_overloading.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vid06.dir/lib/function_overloading.cpp.o -MF CMakeFiles/vid06.dir/lib/function_overloading.cpp.o.d -o CMakeFiles/vid06.dir/lib/function_overloading.cpp.o -c /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/src/lib/function_overloading.cpp

CMakeFiles/vid06.dir/lib/function_overloading.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vid06.dir/lib/function_overloading.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/src/lib/function_overloading.cpp > CMakeFiles/vid06.dir/lib/function_overloading.cpp.i

CMakeFiles/vid06.dir/lib/function_overloading.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vid06.dir/lib/function_overloading.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/src/lib/function_overloading.cpp -o CMakeFiles/vid06.dir/lib/function_overloading.cpp.s

# Object files for target vid06
vid06_OBJECTS = \
"CMakeFiles/vid06.dir/main.cpp.o" \
"CMakeFiles/vid06.dir/lib/function_overloading.cpp.o"

# External object files for target vid06
vid06_EXTERNAL_OBJECTS =

vid06: CMakeFiles/vid06.dir/main.cpp.o
vid06: CMakeFiles/vid06.dir/lib/function_overloading.cpp.o
vid06: CMakeFiles/vid06.dir/build.make
vid06: CMakeFiles/vid06.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable vid06"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vid06.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vid06.dir/build: vid06
.PHONY : CMakeFiles/vid06.dir/build

CMakeFiles/vid06.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vid06.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vid06.dir/clean

CMakeFiles/vid06.dir/depend:
	cd /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/src /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/src /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/build /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/build /home/steltheo73/Coding/cpp/nokia-trainings/functions-1/vid06/build/CMakeFiles/vid06.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vid06.dir/depend
