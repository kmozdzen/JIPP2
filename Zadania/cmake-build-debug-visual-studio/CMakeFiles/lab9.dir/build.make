# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "X:\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "X:\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Kubinio\CLionProjects\lab9\Zadania

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Kubinio\CLionProjects\lab9\Zadania\cmake-build-debug-visual-studio

# Include any dependencies generated for this target.
include CMakeFiles\lab9.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\lab9.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\lab9.dir\flags.make

CMakeFiles\lab9.dir\main.cpp.obj: CMakeFiles\lab9.dir\flags.make
CMakeFiles\lab9.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Kubinio\CLionProjects\lab9\Zadania\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab9.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\Community\VC\Tools\MSVC\14.28.29333\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lab9.dir\main.cpp.obj /FdCMakeFiles\lab9.dir\ /FS -c C:\Users\Kubinio\CLionProjects\lab9\Zadania\main.cpp
<<

CMakeFiles\lab9.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab9.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\Community\VC\Tools\MSVC\14.28.29333\bin\Hostx86\x86\cl.exe > CMakeFiles\lab9.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Kubinio\CLionProjects\lab9\Zadania\main.cpp
<<

CMakeFiles\lab9.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab9.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\Community\VC\Tools\MSVC\14.28.29333\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lab9.dir\main.cpp.s /c C:\Users\Kubinio\CLionProjects\lab9\Zadania\main.cpp
<<

CMakeFiles\lab9.dir\src\Music.cpp.obj: CMakeFiles\lab9.dir\flags.make
CMakeFiles\lab9.dir\src\Music.cpp.obj: ..\src\Music.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Kubinio\CLionProjects\lab9\Zadania\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab9.dir/src/Music.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\Community\VC\Tools\MSVC\14.28.29333\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lab9.dir\src\Music.cpp.obj /FdCMakeFiles\lab9.dir\ /FS -c C:\Users\Kubinio\CLionProjects\lab9\Zadania\src\Music.cpp
<<

CMakeFiles\lab9.dir\src\Music.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab9.dir/src/Music.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\Community\VC\Tools\MSVC\14.28.29333\bin\Hostx86\x86\cl.exe > CMakeFiles\lab9.dir\src\Music.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Kubinio\CLionProjects\lab9\Zadania\src\Music.cpp
<<

CMakeFiles\lab9.dir\src\Music.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab9.dir/src/Music.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\Community\VC\Tools\MSVC\14.28.29333\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lab9.dir\src\Music.cpp.s /c C:\Users\Kubinio\CLionProjects\lab9\Zadania\src\Music.cpp
<<

# Object files for target lab9
lab9_OBJECTS = \
"CMakeFiles\lab9.dir\main.cpp.obj" \
"CMakeFiles\lab9.dir\src\Music.cpp.obj"

# External object files for target lab9
lab9_EXTERNAL_OBJECTS =

lab9.exe: CMakeFiles\lab9.dir\main.cpp.obj
lab9.exe: CMakeFiles\lab9.dir\src\Music.cpp.obj
lab9.exe: CMakeFiles\lab9.dir\build.make
lab9.exe: CMakeFiles\lab9.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Kubinio\CLionProjects\lab9\Zadania\cmake-build-debug-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lab9.exe"
	"X:\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\lab9.dir --rc="C:\PROGRA~2\Windows Kits\10\bin\10.0.18362.0\x86\rc.exe" --mt="C:\PROGRA~2\Windows Kits\10\bin\10.0.18362.0\x86\mt.exe" --manifests -- C:\PROGRA~2\MICROS~4\2019\Community\VC\Tools\MSVC\14.28.29333\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\lab9.dir\objects1.rsp @<<
 /out:lab9.exe /implib:lab9.lib /pdb:C:\Users\Kubinio\CLionProjects\lab9\Zadania\cmake-build-debug-visual-studio\lab9.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\lab9.dir\build: lab9.exe
.PHONY : CMakeFiles\lab9.dir\build

CMakeFiles\lab9.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab9.dir\cmake_clean.cmake
.PHONY : CMakeFiles\lab9.dir\clean

CMakeFiles\lab9.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Kubinio\CLionProjects\lab9\Zadania C:\Users\Kubinio\CLionProjects\lab9\Zadania C:\Users\Kubinio\CLionProjects\lab9\Zadania\cmake-build-debug-visual-studio C:\Users\Kubinio\CLionProjects\lab9\Zadania\cmake-build-debug-visual-studio C:\Users\Kubinio\CLionProjects\lab9\Zadania\cmake-build-debug-visual-studio\CMakeFiles\lab9.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\lab9.dir\depend

