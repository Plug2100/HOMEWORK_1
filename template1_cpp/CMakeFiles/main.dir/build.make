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
CMAKE_SOURCE_DIR = "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp"

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/glad.c.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/glad.c.o: glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/main.dir/glad.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/glad.c.o   -c "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/glad.c"

CMakeFiles/main.dir/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/glad.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/glad.c" > CMakeFiles/main.dir/glad.c.i

CMakeFiles/main.dir/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/glad.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/glad.c" -o CMakeFiles/main.dir/glad.c.s

CMakeFiles/main.dir/Image.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/Image.cpp.o: Image.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/Image.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/Image.cpp.o -c "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/Image.cpp"

CMakeFiles/main.dir/Image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/Image.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/Image.cpp" > CMakeFiles/main.dir/Image.cpp.i

CMakeFiles/main.dir/Image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/Image.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/Image.cpp" -o CMakeFiles/main.dir/Image.cpp.s

CMakeFiles/main.dir/Player.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/Player.cpp.o: Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/Player.cpp.o -c "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/Player.cpp"

CMakeFiles/main.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/Player.cpp" > CMakeFiles/main.dir/Player.cpp.i

CMakeFiles/main.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/Player.cpp" -o CMakeFiles/main.dir/Player.cpp.s

CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/main.cpp.o -c "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/main.cpp"

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/main.cpp" > CMakeFiles/main.dir/main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/main.cpp" -o CMakeFiles/main.dir/main.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/glad.c.o" \
"CMakeFiles/main.dir/Image.cpp.o" \
"CMakeFiles/main.dir/Player.cpp.o" \
"CMakeFiles/main.dir/main.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

bin/main: CMakeFiles/main.dir/glad.c.o
bin/main: CMakeFiles/main.dir/Image.cpp.o
bin/main: CMakeFiles/main.dir/Player.cpp.o
bin/main: CMakeFiles/main.dir/main.cpp.o
bin/main: CMakeFiles/main.dir/build.make
bin/main: /usr/lib/x86_64-linux-gnu/libGL.so
bin/main: /usr/lib/x86_64-linux-gnu/libglfw.so.3.3
bin/main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable bin/main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: bin/main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp" "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp" "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp" "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp" "/home/ivan/Рабочий стол/msu_cmc_cg_2021/template1_cpp/CMakeFiles/main.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

