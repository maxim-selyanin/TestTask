# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "D:\programs\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\programs\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\NotableProjects\TCTT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\NotableProjects\TCTT\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\TCTT.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\TCTT.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\TCTT.dir\flags.make

CMakeFiles\TCTT.dir\main.cpp.obj: CMakeFiles\TCTT.dir\flags.make
CMakeFiles\TCTT.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\NotableProjects\TCTT\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TCTT.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TCTT.dir\main.cpp.obj /FdCMakeFiles\TCTT.dir\ /FS -c D:\NotableProjects\TCTT\main.cpp
<<

CMakeFiles\TCTT.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TCTT.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\TCTT.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\NotableProjects\TCTT\main.cpp
<<

CMakeFiles\TCTT.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TCTT.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TCTT.dir\main.cpp.s /c D:\NotableProjects\TCTT\main.cpp
<<

CMakeFiles\TCTT.dir\task_solution.cpp.obj: CMakeFiles\TCTT.dir\flags.make
CMakeFiles\TCTT.dir\task_solution.cpp.obj: ..\task_solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\NotableProjects\TCTT\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TCTT.dir/task_solution.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TCTT.dir\task_solution.cpp.obj /FdCMakeFiles\TCTT.dir\ /FS -c D:\NotableProjects\TCTT\task_solution.cpp
<<

CMakeFiles\TCTT.dir\task_solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TCTT.dir/task_solution.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\TCTT.dir\task_solution.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\NotableProjects\TCTT\task_solution.cpp
<<

CMakeFiles\TCTT.dir\task_solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TCTT.dir/task_solution.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TCTT.dir\task_solution.cpp.s /c D:\NotableProjects\TCTT\task_solution.cpp
<<

CMakeFiles\TCTT.dir\AuxiliaryStuff.cpp.obj: CMakeFiles\TCTT.dir\flags.make
CMakeFiles\TCTT.dir\AuxiliaryStuff.cpp.obj: ..\AuxiliaryStuff.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\NotableProjects\TCTT\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TCTT.dir/AuxiliaryStuff.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\TCTT.dir\AuxiliaryStuff.cpp.obj /FdCMakeFiles\TCTT.dir\ /FS -c D:\NotableProjects\TCTT\AuxiliaryStuff.cpp
<<

CMakeFiles\TCTT.dir\AuxiliaryStuff.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TCTT.dir/AuxiliaryStuff.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\TCTT.dir\AuxiliaryStuff.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\NotableProjects\TCTT\AuxiliaryStuff.cpp
<<

CMakeFiles\TCTT.dir\AuxiliaryStuff.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TCTT.dir/AuxiliaryStuff.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\TCTT.dir\AuxiliaryStuff.cpp.s /c D:\NotableProjects\TCTT\AuxiliaryStuff.cpp
<<

# Object files for target TCTT
TCTT_OBJECTS = \
"CMakeFiles\TCTT.dir\main.cpp.obj" \
"CMakeFiles\TCTT.dir\task_solution.cpp.obj" \
"CMakeFiles\TCTT.dir\AuxiliaryStuff.cpp.obj"

# External object files for target TCTT
TCTT_EXTERNAL_OBJECTS =

TCTT.exe: CMakeFiles\TCTT.dir\main.cpp.obj
TCTT.exe: CMakeFiles\TCTT.dir\task_solution.cpp.obj
TCTT.exe: CMakeFiles\TCTT.dir\AuxiliaryStuff.cpp.obj
TCTT.exe: CMakeFiles\TCTT.dir\build.make
TCTT.exe: CMakeFiles\TCTT.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\NotableProjects\TCTT\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable TCTT.exe"
	"D:\programs\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\TCTT.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\TCTT.dir\objects1.rsp @<<
 /out:TCTT.exe /implib:TCTT.lib /pdb:D:\NotableProjects\TCTT\cmake-build-debug\TCTT.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\TCTT.dir\build: TCTT.exe

.PHONY : CMakeFiles\TCTT.dir\build

CMakeFiles\TCTT.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TCTT.dir\cmake_clean.cmake
.PHONY : CMakeFiles\TCTT.dir\clean

CMakeFiles\TCTT.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\NotableProjects\TCTT D:\NotableProjects\TCTT D:\NotableProjects\TCTT\cmake-build-debug D:\NotableProjects\TCTT\cmake-build-debug D:\NotableProjects\TCTT\cmake-build-debug\CMakeFiles\TCTT.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\TCTT.dir\depend
