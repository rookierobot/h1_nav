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
include example/helloworld/CMakeFiles/test_subscriber2.dir/depend.make

# Include the progress variables for this target.
include example/helloworld/CMakeFiles/test_subscriber2.dir/progress.make

# Include the compile flags for this target's objects.
include example/helloworld/CMakeFiles/test_subscriber2.dir/flags.make

example/helloworld/CMakeFiles/test_subscriber2.dir/subscriber2.cpp.o: example/helloworld/CMakeFiles/test_subscriber2.dir/flags.make
example/helloworld/CMakeFiles/test_subscriber2.dir/subscriber2.cpp.o: /home/robot/nav2_ws/src/unitree_sdk2/example/helloworld/subscriber2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robot/nav2_ws/build/unitree_sdk2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object example/helloworld/CMakeFiles/test_subscriber2.dir/subscriber2.cpp.o"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/helloworld && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_subscriber2.dir/subscriber2.cpp.o -c /home/robot/nav2_ws/src/unitree_sdk2/example/helloworld/subscriber2.cpp

example/helloworld/CMakeFiles/test_subscriber2.dir/subscriber2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_subscriber2.dir/subscriber2.cpp.i"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/helloworld && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robot/nav2_ws/src/unitree_sdk2/example/helloworld/subscriber2.cpp > CMakeFiles/test_subscriber2.dir/subscriber2.cpp.i

example/helloworld/CMakeFiles/test_subscriber2.dir/subscriber2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_subscriber2.dir/subscriber2.cpp.s"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/helloworld && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robot/nav2_ws/src/unitree_sdk2/example/helloworld/subscriber2.cpp -o CMakeFiles/test_subscriber2.dir/subscriber2.cpp.s

# Object files for target test_subscriber2
test_subscriber2_OBJECTS = \
"CMakeFiles/test_subscriber2.dir/subscriber2.cpp.o"

# External object files for target test_subscriber2
test_subscriber2_EXTERNAL_OBJECTS =

bin/test_subscriber2: example/helloworld/CMakeFiles/test_subscriber2.dir/subscriber2.cpp.o
bin/test_subscriber2: example/helloworld/CMakeFiles/test_subscriber2.dir/build.make
bin/test_subscriber2: /home/robot/nav2_ws/src/unitree_sdk2/lib/x86_64/libunitree_sdk2.a
bin/test_subscriber2: /home/robot/nav2_ws/src/unitree_sdk2/thirdparty/lib/x86_64/libddsc.so
bin/test_subscriber2: /home/robot/nav2_ws/src/unitree_sdk2/thirdparty/lib/x86_64/libddscxx.so
bin/test_subscriber2: example/helloworld/CMakeFiles/test_subscriber2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/robot/nav2_ws/build/unitree_sdk2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/test_subscriber2"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/helloworld && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_subscriber2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
example/helloworld/CMakeFiles/test_subscriber2.dir/build: bin/test_subscriber2

.PHONY : example/helloworld/CMakeFiles/test_subscriber2.dir/build

example/helloworld/CMakeFiles/test_subscriber2.dir/clean:
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/helloworld && $(CMAKE_COMMAND) -P CMakeFiles/test_subscriber2.dir/cmake_clean.cmake
.PHONY : example/helloworld/CMakeFiles/test_subscriber2.dir/clean

example/helloworld/CMakeFiles/test_subscriber2.dir/depend:
	cd /home/robot/nav2_ws/build/unitree_sdk2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/nav2_ws/src/unitree_sdk2 /home/robot/nav2_ws/src/unitree_sdk2/example/helloworld /home/robot/nav2_ws/build/unitree_sdk2 /home/robot/nav2_ws/build/unitree_sdk2/example/helloworld /home/robot/nav2_ws/build/unitree_sdk2/example/helloworld/CMakeFiles/test_subscriber2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : example/helloworld/CMakeFiles/test_subscriber2.dir/depend

