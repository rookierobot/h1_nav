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
include example/go2w/CMakeFiles/go2w_sport_client.dir/depend.make

# Include the progress variables for this target.
include example/go2w/CMakeFiles/go2w_sport_client.dir/progress.make

# Include the compile flags for this target's objects.
include example/go2w/CMakeFiles/go2w_sport_client.dir/flags.make

example/go2w/CMakeFiles/go2w_sport_client.dir/go2w_sport_client.cpp.o: example/go2w/CMakeFiles/go2w_sport_client.dir/flags.make
example/go2w/CMakeFiles/go2w_sport_client.dir/go2w_sport_client.cpp.o: /home/robot/nav2_ws/src/unitree_sdk2/example/go2w/go2w_sport_client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robot/nav2_ws/build/unitree_sdk2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object example/go2w/CMakeFiles/go2w_sport_client.dir/go2w_sport_client.cpp.o"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/go2w && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/go2w_sport_client.dir/go2w_sport_client.cpp.o -c /home/robot/nav2_ws/src/unitree_sdk2/example/go2w/go2w_sport_client.cpp

example/go2w/CMakeFiles/go2w_sport_client.dir/go2w_sport_client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/go2w_sport_client.dir/go2w_sport_client.cpp.i"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/go2w && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robot/nav2_ws/src/unitree_sdk2/example/go2w/go2w_sport_client.cpp > CMakeFiles/go2w_sport_client.dir/go2w_sport_client.cpp.i

example/go2w/CMakeFiles/go2w_sport_client.dir/go2w_sport_client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/go2w_sport_client.dir/go2w_sport_client.cpp.s"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/go2w && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robot/nav2_ws/src/unitree_sdk2/example/go2w/go2w_sport_client.cpp -o CMakeFiles/go2w_sport_client.dir/go2w_sport_client.cpp.s

# Object files for target go2w_sport_client
go2w_sport_client_OBJECTS = \
"CMakeFiles/go2w_sport_client.dir/go2w_sport_client.cpp.o"

# External object files for target go2w_sport_client
go2w_sport_client_EXTERNAL_OBJECTS =

bin/go2w_sport_client: example/go2w/CMakeFiles/go2w_sport_client.dir/go2w_sport_client.cpp.o
bin/go2w_sport_client: example/go2w/CMakeFiles/go2w_sport_client.dir/build.make
bin/go2w_sport_client: /home/robot/nav2_ws/src/unitree_sdk2/lib/x86_64/libunitree_sdk2.a
bin/go2w_sport_client: /home/robot/nav2_ws/src/unitree_sdk2/thirdparty/lib/x86_64/libddsc.so
bin/go2w_sport_client: /home/robot/nav2_ws/src/unitree_sdk2/thirdparty/lib/x86_64/libddscxx.so
bin/go2w_sport_client: example/go2w/CMakeFiles/go2w_sport_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/robot/nav2_ws/build/unitree_sdk2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/go2w_sport_client"
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/go2w && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/go2w_sport_client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
example/go2w/CMakeFiles/go2w_sport_client.dir/build: bin/go2w_sport_client

.PHONY : example/go2w/CMakeFiles/go2w_sport_client.dir/build

example/go2w/CMakeFiles/go2w_sport_client.dir/clean:
	cd /home/robot/nav2_ws/build/unitree_sdk2/example/go2w && $(CMAKE_COMMAND) -P CMakeFiles/go2w_sport_client.dir/cmake_clean.cmake
.PHONY : example/go2w/CMakeFiles/go2w_sport_client.dir/clean

example/go2w/CMakeFiles/go2w_sport_client.dir/depend:
	cd /home/robot/nav2_ws/build/unitree_sdk2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/nav2_ws/src/unitree_sdk2 /home/robot/nav2_ws/src/unitree_sdk2/example/go2w /home/robot/nav2_ws/build/unitree_sdk2 /home/robot/nav2_ws/build/unitree_sdk2/example/go2w /home/robot/nav2_ws/build/unitree_sdk2/example/go2w/CMakeFiles/go2w_sport_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : example/go2w/CMakeFiles/go2w_sport_client.dir/depend

