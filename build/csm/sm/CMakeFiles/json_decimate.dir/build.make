# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/liby3/catkin_ws_lby/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liby3/catkin_ws_lby/build

# Include any dependencies generated for this target.
include csm/sm/CMakeFiles/json_decimate.dir/depend.make

# Include the progress variables for this target.
include csm/sm/CMakeFiles/json_decimate.dir/progress.make

# Include the compile flags for this target's objects.
include csm/sm/CMakeFiles/json_decimate.dir/flags.make

csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o: csm/sm/CMakeFiles/json_decimate.dir/flags.make
csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o: /home/liby3/catkin_ws_lby/src/csm/sm/apps/json_decimate.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/liby3/catkin_ws_lby/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o"
	cd /home/liby3/catkin_ws_lby/build/csm/sm && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/json_decimate.dir/apps/json_decimate.o   -c /home/liby3/catkin_ws_lby/src/csm/sm/apps/json_decimate.c

csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/json_decimate.dir/apps/json_decimate.i"
	cd /home/liby3/catkin_ws_lby/build/csm/sm && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/liby3/catkin_ws_lby/src/csm/sm/apps/json_decimate.c > CMakeFiles/json_decimate.dir/apps/json_decimate.i

csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/json_decimate.dir/apps/json_decimate.s"
	cd /home/liby3/catkin_ws_lby/build/csm/sm && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/liby3/catkin_ws_lby/src/csm/sm/apps/json_decimate.c -o CMakeFiles/json_decimate.dir/apps/json_decimate.s

csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o.requires:
.PHONY : csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o.requires

csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o.provides: csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o.requires
	$(MAKE) -f csm/sm/CMakeFiles/json_decimate.dir/build.make csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o.provides.build
.PHONY : csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o.provides

csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o.provides.build: csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o

# Object files for target json_decimate
json_decimate_OBJECTS = \
"CMakeFiles/json_decimate.dir/apps/json_decimate.o"

# External object files for target json_decimate
json_decimate_EXTERNAL_OBJECTS =

csm/sm/json_decimate: csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o
csm/sm/json_decimate: csm/sm/CMakeFiles/json_decimate.dir/build.make
csm/sm/json_decimate: /home/liby3/catkin_ws_lby/devel/lib/libcsm-static.a
csm/sm/json_decimate: csm/sm/CMakeFiles/json_decimate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable json_decimate"
	cd /home/liby3/catkin_ws_lby/build/csm/sm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/json_decimate.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
csm/sm/CMakeFiles/json_decimate.dir/build: csm/sm/json_decimate
.PHONY : csm/sm/CMakeFiles/json_decimate.dir/build

csm/sm/CMakeFiles/json_decimate.dir/requires: csm/sm/CMakeFiles/json_decimate.dir/apps/json_decimate.o.requires
.PHONY : csm/sm/CMakeFiles/json_decimate.dir/requires

csm/sm/CMakeFiles/json_decimate.dir/clean:
	cd /home/liby3/catkin_ws_lby/build/csm/sm && $(CMAKE_COMMAND) -P CMakeFiles/json_decimate.dir/cmake_clean.cmake
.PHONY : csm/sm/CMakeFiles/json_decimate.dir/clean

csm/sm/CMakeFiles/json_decimate.dir/depend:
	cd /home/liby3/catkin_ws_lby/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liby3/catkin_ws_lby/src /home/liby3/catkin_ws_lby/src/csm/sm /home/liby3/catkin_ws_lby/build /home/liby3/catkin_ws_lby/build/csm/sm /home/liby3/catkin_ws_lby/build/csm/sm/CMakeFiles/json_decimate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : csm/sm/CMakeFiles/json_decimate.dir/depend

