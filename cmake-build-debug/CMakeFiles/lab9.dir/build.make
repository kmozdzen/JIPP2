# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /cygdrive/c/Users/Kubinio/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Kubinio/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Kubinio/CLionProjects/lab9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Kubinio/CLionProjects/lab9/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab9.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/lab9.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab9.dir/flags.make

CMakeFiles/lab9.dir/main.cpp.o: CMakeFiles/lab9.dir/flags.make
CMakeFiles/lab9.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Kubinio/CLionProjects/lab9/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab9.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab9.dir/main.cpp.o -c /cygdrive/c/Users/Kubinio/CLionProjects/lab9/main.cpp

CMakeFiles/lab9.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab9.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Kubinio/CLionProjects/lab9/main.cpp > CMakeFiles/lab9.dir/main.cpp.i

CMakeFiles/lab9.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab9.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Kubinio/CLionProjects/lab9/main.cpp -o CMakeFiles/lab9.dir/main.cpp.s

CMakeFiles/lab9.dir/Line.cpp.o: CMakeFiles/lab9.dir/flags.make
CMakeFiles/lab9.dir/Line.cpp.o: ../Line.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Kubinio/CLionProjects/lab9/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab9.dir/Line.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab9.dir/Line.cpp.o -c /cygdrive/c/Users/Kubinio/CLionProjects/lab9/Line.cpp

CMakeFiles/lab9.dir/Line.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab9.dir/Line.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Kubinio/CLionProjects/lab9/Line.cpp > CMakeFiles/lab9.dir/Line.cpp.i

CMakeFiles/lab9.dir/Line.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab9.dir/Line.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Kubinio/CLionProjects/lab9/Line.cpp -o CMakeFiles/lab9.dir/Line.cpp.s

CMakeFiles/lab9.dir/Stop.cpp.o: CMakeFiles/lab9.dir/flags.make
CMakeFiles/lab9.dir/Stop.cpp.o: ../Stop.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Kubinio/CLionProjects/lab9/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab9.dir/Stop.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab9.dir/Stop.cpp.o -c /cygdrive/c/Users/Kubinio/CLionProjects/lab9/Stop.cpp

CMakeFiles/lab9.dir/Stop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab9.dir/Stop.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Kubinio/CLionProjects/lab9/Stop.cpp > CMakeFiles/lab9.dir/Stop.cpp.i

CMakeFiles/lab9.dir/Stop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab9.dir/Stop.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Kubinio/CLionProjects/lab9/Stop.cpp -o CMakeFiles/lab9.dir/Stop.cpp.s

# Object files for target lab9
lab9_OBJECTS = \
"CMakeFiles/lab9.dir/main.cpp.o" \
"CMakeFiles/lab9.dir/Line.cpp.o" \
"CMakeFiles/lab9.dir/Stop.cpp.o"

# External object files for target lab9
lab9_EXTERNAL_OBJECTS =

lab9.exe: CMakeFiles/lab9.dir/main.cpp.o
lab9.exe: CMakeFiles/lab9.dir/Line.cpp.o
lab9.exe: CMakeFiles/lab9.dir/Stop.cpp.o
lab9.exe: CMakeFiles/lab9.dir/build.make
lab9.exe: CMakeFiles/lab9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Kubinio/CLionProjects/lab9/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable lab9.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab9.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab9.dir/build: lab9.exe
.PHONY : CMakeFiles/lab9.dir/build

CMakeFiles/lab9.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab9.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab9.dir/clean

CMakeFiles/lab9.dir/depend:
	cd /cygdrive/c/Users/Kubinio/CLionProjects/lab9/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Kubinio/CLionProjects/lab9 /cygdrive/c/Users/Kubinio/CLionProjects/lab9 /cygdrive/c/Users/Kubinio/CLionProjects/lab9/cmake-build-debug /cygdrive/c/Users/Kubinio/CLionProjects/lab9/cmake-build-debug /cygdrive/c/Users/Kubinio/CLionProjects/lab9/cmake-build-debug/CMakeFiles/lab9.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab9.dir/depend
