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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/bin

# Include any dependencies generated for this target.
include CMakeFiles/foo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/foo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/foo.dir/flags.make

CMakeFiles/foo.dir/foo.c.o: CMakeFiles/foo.dir/flags.make
CMakeFiles/foo.dir/foo.c.o: /home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/src/foo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/foo.dir/foo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/foo.dir/foo.c.o   -c /home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/src/foo.c

CMakeFiles/foo.dir/foo.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/foo.dir/foo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/src/foo.c > CMakeFiles/foo.dir/foo.c.i

CMakeFiles/foo.dir/foo.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/foo.dir/foo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/src/foo.c -o CMakeFiles/foo.dir/foo.c.s

# Object files for target foo
foo_OBJECTS = \
"CMakeFiles/foo.dir/foo.c.o"

# External object files for target foo
foo_EXTERNAL_OBJECTS =

libfoo.a: CMakeFiles/foo.dir/foo.c.o
libfoo.a: CMakeFiles/foo.dir/build.make
libfoo.a: CMakeFiles/foo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir=/home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libfoo.a"
	$(CMAKE_COMMAND) -P CMakeFiles/foo.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/foo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/foo.dir/build: libfoo.a

.PHONY : CMakeFiles/foo.dir/build

CMakeFiles/foo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/foo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/foo.dir/clean

CMakeFiles/foo.dir/depend:
	cd /home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/src /home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/src /home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/bin /home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/bin /home/robot/nav2_ws/cyclonedds_ws/build/cyclonedds/src/core/CMakeFiles/_CMakeLTOTest-C/bin/CMakeFiles/foo.dir/DependInfo.cmake
.PHONY : CMakeFiles/foo.dir/depend

