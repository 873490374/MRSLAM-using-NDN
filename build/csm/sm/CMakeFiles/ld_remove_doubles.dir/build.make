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
include csm/sm/CMakeFiles/ld_remove_doubles.dir/depend.make

# Include the progress variables for this target.
include csm/sm/CMakeFiles/ld_remove_doubles.dir/progress.make

# Include the compile flags for this target's objects.
include csm/sm/CMakeFiles/ld_remove_doubles.dir/flags.make

csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o: csm/sm/CMakeFiles/ld_remove_doubles.dir/flags.make
csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o: /home/liby3/catkin_ws_lby/src/csm/sm/apps/ld_remove_doubles.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/liby3/catkin_ws_lby/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o"
	cd /home/liby3/catkin_ws_lby/build/csm/sm && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o   -c /home/liby3/catkin_ws_lby/src/csm/sm/apps/ld_remove_doubles.c

csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.i"
	cd /home/liby3/catkin_ws_lby/build/csm/sm && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/liby3/catkin_ws_lby/src/csm/sm/apps/ld_remove_doubles.c > CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.i

csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.s"
	cd /home/liby3/catkin_ws_lby/build/csm/sm && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/liby3/catkin_ws_lby/src/csm/sm/apps/ld_remove_doubles.c -o CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.s

csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o.requires:
.PHONY : csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o.requires

csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o.provides: csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o.requires
	$(MAKE) -f csm/sm/CMakeFiles/ld_remove_doubles.dir/build.make csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o.provides.build
.PHONY : csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o.provides

csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o.provides.build: csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o

# Object files for target ld_remove_doubles
ld_remove_doubles_OBJECTS = \
"CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o"

# External object files for target ld_remove_doubles
ld_remove_doubles_EXTERNAL_OBJECTS =

csm/sm/ld_remove_doubles: csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o
csm/sm/ld_remove_doubles: csm/sm/CMakeFiles/ld_remove_doubles.dir/build.make
csm/sm/ld_remove_doubles: /home/liby3/catkin_ws_lby/devel/lib/libcsm-static.a
csm/sm/ld_remove_doubles: csm/sm/CMakeFiles/ld_remove_doubles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable ld_remove_doubles"
	cd /home/liby3/catkin_ws_lby/build/csm/sm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ld_remove_doubles.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
csm/sm/CMakeFiles/ld_remove_doubles.dir/build: csm/sm/ld_remove_doubles
.PHONY : csm/sm/CMakeFiles/ld_remove_doubles.dir/build

csm/sm/CMakeFiles/ld_remove_doubles.dir/requires: csm/sm/CMakeFiles/ld_remove_doubles.dir/apps/ld_remove_doubles.o.requires
.PHONY : csm/sm/CMakeFiles/ld_remove_doubles.dir/requires

csm/sm/CMakeFiles/ld_remove_doubles.dir/clean:
	cd /home/liby3/catkin_ws_lby/build/csm/sm && $(CMAKE_COMMAND) -P CMakeFiles/ld_remove_doubles.dir/cmake_clean.cmake
.PHONY : csm/sm/CMakeFiles/ld_remove_doubles.dir/clean

csm/sm/CMakeFiles/ld_remove_doubles.dir/depend:
	cd /home/liby3/catkin_ws_lby/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liby3/catkin_ws_lby/src /home/liby3/catkin_ws_lby/src/csm/sm /home/liby3/catkin_ws_lby/build /home/liby3/catkin_ws_lby/build/csm/sm /home/liby3/catkin_ws_lby/build/csm/sm/CMakeFiles/ld_remove_doubles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : csm/sm/CMakeFiles/ld_remove_doubles.dir/depend
