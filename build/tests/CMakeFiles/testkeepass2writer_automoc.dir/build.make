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

# Utility rule file for testkeepass2writer_automoc.

# Include the progress variables for this target.
include tests/CMakeFiles/testkeepass2writer_automoc.dir/progress.make

tests/CMakeFiles/testkeepass2writer_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc for target testkeepass2writer"
	cd /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests && /usr/local/Cellar/cmake/3.7.2/bin/cmake -E cmake_autogen /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests/CMakeFiles/testkeepass2writer_automoc.dir/ Debug

testkeepass2writer_automoc: tests/CMakeFiles/testkeepass2writer_automoc
testkeepass2writer_automoc: tests/CMakeFiles/testkeepass2writer_automoc.dir/build.make

.PHONY : testkeepass2writer_automoc

# Rule to build all files generated by this target.
tests/CMakeFiles/testkeepass2writer_automoc.dir/build: testkeepass2writer_automoc

.PHONY : tests/CMakeFiles/testkeepass2writer_automoc.dir/build

tests/CMakeFiles/testkeepass2writer_automoc.dir/clean:
	cd /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/testkeepass2writer_automoc.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/testkeepass2writer_automoc.dir/clean

tests/CMakeFiles/testkeepass2writer_automoc.dir/depend:
	cd /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/markbennett/Desktop/XCode/PasswordVault_OSX /Users/markbennett/Desktop/XCode/PasswordVault_OSX/tests /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests /Users/markbennett/Desktop/XCode/PasswordVault_OSX/build/tests/CMakeFiles/testkeepass2writer_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/testkeepass2writer_automoc.dir/depend

