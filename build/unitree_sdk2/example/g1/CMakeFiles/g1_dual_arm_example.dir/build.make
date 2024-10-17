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
include example/g1/CMakeFiles/g1_dual_arm_example.dir/depend.make

# Include the progress variables for this target.
include example/g1/CMakeFiles/g1_dual_arm_example.dir/progress.make

# Include the compile flags for this target's objects.
include example/g1/CMakeFiles/g1_dual_arm_example.dir/flags.make

example/g1/CMakeFiles/g1_dual_arm_example.dir/low_level/g1_dual_arm_example.cpp.o: example/g1/CMakeFiles/g1_dual_arm_example.dir/flags.make
example/g1/CMakeFiles/g1_dual_arm_example.dir/low_level/g1_dual_arm_example.cpp.o: /home/robot/nav2_ws/src/unitree_sdk2/example/g1/low_level/g1_dual_arm_example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robot/nav2_ws/build/unitree_sdk2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object example/g1/CMakeFiles/g1_dual_arm_example.dir/low_level/g1_dual_arm_example.cpp.o"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/g1 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/g1_dual_arm_example.dir/low_level/g1_dual_arm_example.cpp.o -c /home/robot/nav2_ws/src/unitree_sdk2/example/g1/low_level/g1_dual_arm_example.cpp

example/g1/CMakeFiles/g1_dual_arm_example.dir/low_level/g1_dual_arm_example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/g1_dual_arm_example.dir/low_level/g1_dual_arm_example.cpp.i"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/g1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robot/nav2_ws/src/unitree_sdk2/example/g1/low_level/g1_dual_arm_example.cpp > CMakeFiles/g1_dual_arm_example.dir/low_level/g1_dual_arm_example.cpp.i

example/g1/CMakeFiles/g1_dual_arm_example.dir/low_level/g1_dual_arm_example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/g1_dual_arm_example.dir/low_level/g1_dual_arm_example.cpp.s"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/g1 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robot/nav2_ws/src/unitree_sdk2/example/g1/low_level/g1_dual_arm_example.cpp -o CMakeFiles/g1_dual_arm_example.dir/low_level/g1_dual_arm_example.cpp.s

# Object files for target g1_dual_arm_example
g1_dual_arm_example_OBJECTS = \
"CMakeFiles/g1_dual_arm_example.dir/low_level/g1_dual_arm_example.cpp.o"

# External object files for target g1_dual_arm_example
g1_dual_arm_example_EXTERNAL_OBJECTS =

bin/g1_dual_arm_example: example/g1/CMakeFiles/g1_dual_arm_example.dir/low_level/g1_dual_arm_example.cpp.o
bin/g1_dual_arm_example: example/g1/CMakeFiles/g1_dual_arm_example.dir/build.make
bin/g1_dual_arm_example: /home/robot/nav2_ws/src/unitree_sdk2/lib/x86_64/libunitree_sdk2.a
bin/g1_dual_arm_example: /usr/lib/x86_64-linux-gnu/libyaml-cpp.so.0.6.2
bin/g1_dual_arm_example: /home/robot/nav2_ws/src/unitree_sdk2/thirdparty/lib/x86_64/libddsc.so
bin/g1_dual_arm_example: /home/robot/nav2_ws/src/unitree_sdk2/thirdparty/lib/x86_64/libddscxx.so
bin/g1_dual_arm_example: example/g1/CMakeFiles/g1_dual_arm_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/robot/nav2_ws/build/unitree_sdk2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/g1_dual_arm_example"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/g1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/g1_dual_arm_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
example/g1/CMakeFiles/g1_dual_arm_example.dir/build: bin/g1_dual_arm_example

.PHONY : example/g1/CMakeFiles/g1_dual_arm_example.dir/build

example/g1/CMakeFiles/g1_dual_arm_example.dir/clean:
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/g1 && $(CMAKE_COMMAND) -P CMakeFiles/g1_dual_arm_example.dir/cmake_clean.cmake
.PHONY : example/g1/CMakeFiles/g1_dual_arm_example.dir/clean

example/g1/CMakeFiles/g1_dual_arm_example.dir/depend:
	cd /home/robot/nav2_ws/build/unitree_sdk2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/nav2_ws/src/unitree_sdk2 /home/robot/nav2_ws/src/unitree_sdk2/example/g1 /home/robot/nav2_ws/build/unitree_sdk2 /home/robot/nav2_ws/build/unitree_sdk2/example/g1 /home/robot/nav2_ws/build/unitree_sdk2/example/g1/CMakeFiles/g1_dual_arm_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : example/g1/CMakeFiles/g1_dual_arm_example.dir/depend

