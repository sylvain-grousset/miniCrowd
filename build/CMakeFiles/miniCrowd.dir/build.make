# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd/build

# Include any dependencies generated for this target.
include CMakeFiles/miniCrowd.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/miniCrowd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/miniCrowd.dir/flags.make

CMakeFiles/miniCrowd.dir/main.cpp.o: CMakeFiles/miniCrowd.dir/flags.make
CMakeFiles/miniCrowd.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/miniCrowd.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/miniCrowd.dir/main.cpp.o -c /users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd/main.cpp

CMakeFiles/miniCrowd.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/miniCrowd.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd/main.cpp > CMakeFiles/miniCrowd.dir/main.cpp.i

CMakeFiles/miniCrowd.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/miniCrowd.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd/main.cpp -o CMakeFiles/miniCrowd.dir/main.cpp.s

# Object files for target miniCrowd
miniCrowd_OBJECTS = \
"CMakeFiles/miniCrowd.dir/main.cpp.o"

# External object files for target miniCrowd
miniCrowd_EXTERNAL_OBJECTS =

miniCrowd: CMakeFiles/miniCrowd.dir/main.cpp.o
miniCrowd: CMakeFiles/miniCrowd.dir/build.make
miniCrowd: /usr/lib/x86_64-linux-gnu/liballegro.so
miniCrowd: /usr/lib/x86_64-linux-gnu/liballegro_primitives.so
miniCrowd: CMakeFiles/miniCrowd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable miniCrowd"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/miniCrowd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/miniCrowd.dir/build: miniCrowd

.PHONY : CMakeFiles/miniCrowd.dir/build

CMakeFiles/miniCrowd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/miniCrowd.dir/cmake_clean.cmake
.PHONY : CMakeFiles/miniCrowd.dir/clean

CMakeFiles/miniCrowd.dir/depend:
	cd /users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd /users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd /users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd/build /users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd/build /users/lpro/casir/grousses/PROFS/RAIEVSKY/miniCrowd/build/CMakeFiles/miniCrowd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/miniCrowd.dir/depend
