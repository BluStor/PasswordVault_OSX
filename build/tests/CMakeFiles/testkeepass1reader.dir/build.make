# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.7.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.7.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/markbennett/Desktop/XCode/PasswordVault_OSX

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/testkeepass1reader.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/testkeepass1reader.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/testkeepass1reader.dir/flags.make

tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o: tests/CMakeFiles/testkeepass1reader.dir/flags.make
tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o: ../tests/TestKeePass1Reader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o"
	cd /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests && /usr/bin/clang++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o -c /Users/markbennett/Desktop/XCode/PasswordVault_OSX/tests/TestKeePass1Reader.cpp

tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.i"
	cd /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests && /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/markbennett/Desktop/XCode/PasswordVault_OSX/tests/TestKeePass1Reader.cpp > CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.i

tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.s"
	cd /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests && /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/markbennett/Desktop/XCode/PasswordVault_OSX/tests/TestKeePass1Reader.cpp -o CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.s

tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.requires:

.PHONY : tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.requires

tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.provides: tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/testkeepass1reader.dir/build.make tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.provides.build
.PHONY : tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.provides

tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.provides.build: tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o


tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o: tests/CMakeFiles/testkeepass1reader.dir/flags.make
tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o: tests/testkeepass1reader_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o"
	cd /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests && /usr/bin/clang++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o -c /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests/testkeepass1reader_automoc.cpp

tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.i"
	cd /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests && /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests/testkeepass1reader_automoc.cpp > CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.i

tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.s"
	cd /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests && /usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests/testkeepass1reader_automoc.cpp -o CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.s

tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o.requires:

.PHONY : tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o.requires

tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o.provides: tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/testkeepass1reader.dir/build.make tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o.provides.build
.PHONY : tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o.provides

tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o.provides.build: tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o


# Object files for target testkeepass1reader
testkeepass1reader_OBJECTS = \
"CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o" \
"CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o"

# External object files for target testkeepass1reader
testkeepass1reader_EXTERNAL_OBJECTS =

tests/testkeepass1reader: tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o
tests/testkeepass1reader: tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o
tests/testkeepass1reader: tests/CMakeFiles/testkeepass1reader.dir/build.make
tests/testkeepass1reader: src/libkeepassx_core.a
tests/testkeepass1reader: /usr/local/Cellar/qt5/5.8.0_1/lib/QtConcurrent.framework/QtConcurrent
tests/testkeepass1reader: /usr/local/Cellar/qt5/5.8.0_1/lib/QtWidgets.framework/QtWidgets
tests/testkeepass1reader: /usr/local/Cellar/qt5/5.8.0_1/lib/QtTest.framework/QtTest
tests/testkeepass1reader: /usr/local/lib/libgcrypt.dylib
tests/testkeepass1reader: /usr/lib/libz.dylib
tests/testkeepass1reader: /usr/local/Cellar/qt5/5.8.0_1/lib/QtGui.framework/QtGui
tests/testkeepass1reader: /usr/local/Cellar/qt5/5.8.0_1/lib/QtSerialPort.framework/QtSerialPort
tests/testkeepass1reader: /usr/local/Cellar/qt5/5.8.0_1/lib/QtBluetooth.framework/QtBluetooth
tests/testkeepass1reader: /usr/local/Cellar/qt5/5.8.0_1/lib/QtCore.framework/QtCore
tests/testkeepass1reader: tests/CMakeFiles/testkeepass1reader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable testkeepass1reader"
	cd /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testkeepass1reader.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/testkeepass1reader.dir/build: tests/testkeepass1reader

.PHONY : tests/CMakeFiles/testkeepass1reader.dir/build

tests/CMakeFiles/testkeepass1reader.dir/requires: tests/CMakeFiles/testkeepass1reader.dir/TestKeePass1Reader.cpp.o.requires
tests/CMakeFiles/testkeepass1reader.dir/requires: tests/CMakeFiles/testkeepass1reader.dir/testkeepass1reader_automoc.cpp.o.requires

.PHONY : tests/CMakeFiles/testkeepass1reader.dir/requires

tests/CMakeFiles/testkeepass1reader.dir/clean:
	cd /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/testkeepass1reader.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/testkeepass1reader.dir/clean

tests/CMakeFiles/testkeepass1reader.dir/depend:
	cd /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/markbennett/Desktop/XCode/PasswordVault_OSX /Users/markbennett/Desktop/XCode/PasswordVault_OSX/tests /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests/CMakeFiles/testkeepass1reader.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/testkeepass1reader.dir/depend

