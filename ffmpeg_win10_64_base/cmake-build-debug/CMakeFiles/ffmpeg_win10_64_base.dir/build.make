# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /cygdrive/c/Users/Administrator/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Administrator/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ffmpeg_win10_64_base.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ffmpeg_win10_64_base.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ffmpeg_win10_64_base.dir/flags.make

CMakeFiles/ffmpeg_win10_64_base.dir/main.cpp.o: CMakeFiles/ffmpeg_win10_64_base.dir/flags.make
CMakeFiles/ffmpeg_win10_64_base.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ffmpeg_win10_64_base.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ffmpeg_win10_64_base.dir/main.cpp.o -c /cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base/main.cpp

CMakeFiles/ffmpeg_win10_64_base.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ffmpeg_win10_64_base.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base/main.cpp > CMakeFiles/ffmpeg_win10_64_base.dir/main.cpp.i

CMakeFiles/ffmpeg_win10_64_base.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ffmpeg_win10_64_base.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base/main.cpp -o CMakeFiles/ffmpeg_win10_64_base.dir/main.cpp.s

# Object files for target ffmpeg_win10_64_base
ffmpeg_win10_64_base_OBJECTS = \
"CMakeFiles/ffmpeg_win10_64_base.dir/main.cpp.o"

# External object files for target ffmpeg_win10_64_base
ffmpeg_win10_64_base_EXTERNAL_OBJECTS =

ffmpeg_win10_64_base.exe: CMakeFiles/ffmpeg_win10_64_base.dir/main.cpp.o
ffmpeg_win10_64_base.exe: CMakeFiles/ffmpeg_win10_64_base.dir/build.make
ffmpeg_win10_64_base.exe: CMakeFiles/ffmpeg_win10_64_base.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ffmpeg_win10_64_base.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ffmpeg_win10_64_base.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ffmpeg_win10_64_base.dir/build: ffmpeg_win10_64_base.exe

.PHONY : CMakeFiles/ffmpeg_win10_64_base.dir/build

CMakeFiles/ffmpeg_win10_64_base.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ffmpeg_win10_64_base.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ffmpeg_win10_64_base.dir/clean

CMakeFiles/ffmpeg_win10_64_base.dir/depend:
	cd /cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base /cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base /cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base/cmake-build-debug /cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base/cmake-build-debug /cygdrive/f/Sun_Studio/c_cpp_learn/ffmpeg_win10_64_base/cmake-build-debug/CMakeFiles/ffmpeg_win10_64_base.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ffmpeg_win10_64_base.dir/depend

