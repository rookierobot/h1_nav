# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robot/nav2_ws/src/unitree_sdk2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robot/nav2_ws/build/unitree_sdk2

# Include any dependencies generated for this target.
include example/h1/CMakeFiles/h1_sport.dir/depend.make

# Include the progress variables for this target.
include example/h1/CMakeFiles/h1_sport.dir/progress.make

# Include the compile flags for this target's objects.
include example/h1/CMakeFiles/h1_sport.dir/flags.make

example/h1/CMakeFiles/h1_sport.dir/high_level/h1_sport.cpp.o: example/h1/CMakeFiles/h1_sport.dir/flags.make
example/h1/CMakeFiles/h1_sport.dir/high_level/h1_sport.cpp.o: /home/robot/nav2_ws/src/unitree_sdk2/example/h1/high_level/h1_sport.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robot/nav2_ws/build/unitree_sdk2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object example/h1/CMakeFiles/h1_sport.dir/high_level/h1_sport.cpp.o"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/h1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/h1_sport.dir/high_level/h1_sport.cpp.o -c /home/robot/nav2_ws/src/unitree_sdk2/example/h1/high_level/h1_sport.cpp

example/h1/CMakeFiles/h1_sport.dir/high_level/h1_sport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/h1_sport.dir/high_level/h1_sport.cpp.i"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/h1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robot/nav2_ws/src/unitree_sdk2/example/h1/high_level/h1_sport.cpp > CMakeFiles/h1_sport.dir/high_level/h1_sport.cpp.i

example/h1/CMakeFiles/h1_sport.dir/high_level/h1_sport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/h1_sport.dir/high_level/h1_sport.cpp.s"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/h1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robot/nav2_ws/src/unitree_sdk2/example/h1/high_level/h1_sport.cpp -o CMakeFiles/h1_sport.dir/high_level/h1_sport.cpp.s

# Object files for target h1_sport
h1_sport_OBJECTS = \
"CMakeFiles/h1_sport.dir/high_level/h1_sport.cpp.o"

# External object files for target h1_sport
h1_sport_EXTERNAL_OBJECTS =

bin/h1_sport: example/h1/CMakeFiles/h1_sport.dir/high_level/h1_sport.cpp.o
bin/h1_sport: example/h1/CMakeFiles/h1_sport.dir/build.make
bin/h1_sport: /home/robot/nav2_ws/src/unitree_sdk2/lib/x86_64/libunitree_sdk2.a
bin/h1_sport: /home/robot/nav2_ws/src/unitree_sdk2/thirdparty/lib/x86_64/libddsc.so
bin/h1_sport: /home/robot/nav2_ws/src/unitree_sdk2/thirdparty/lib/x86_64/libddscxx.so
bin/h1_sport: example/h1/CMakeFiles/h1_sport.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/robot/nav2_ws/build/unitree_sdk2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/h1_sport"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/h1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/h1_sport.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
example/h1/CMakeFiles/h1_sport.dir/build: bin/h1_sport

.PHONY : example/h1/CMakeFiles/h1_sport.dir/build

example/h1/CMakeFiles/h1_sport.dir/clean:
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/h1 && $(CMAKE_COMMAND) -P CMakeFiles/h1_sport.dir/cmake_clean.cmake
.PHONY : example/h1/CMakeFiles/h1_sport.dir/clean

example/h1/CMakeFiles/h1_sport.dir/depend:
	cd /home/robot/nav2_ws/build/unitree_sdk2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/nav2_ws/src/unitree_sdk2 /home/robot/nav2_ws/src/unitree_sdk2/example/h1 /home/robot/nav2_ws/build/unitree_sdk2 /home/robot/nav2_ws/build/unitree_sdk2/example/h1 /home/robot/nav2_ws/build/unitree_sdk2/example/h1/CMakeFiles/h1_sport.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : example/h1/CMakeFiles/h1_sport.dir/depend

