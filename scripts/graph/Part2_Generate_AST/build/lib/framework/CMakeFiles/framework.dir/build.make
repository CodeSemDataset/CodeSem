# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shared/AST2Graphs/pre_train_data_hashmap_gcc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build

# Include any dependencies generated for this target.
include lib/framework/CMakeFiles/framework.dir/depend.make

# Include the progress variables for this target.
include lib/framework/CMakeFiles/framework.dir/progress.make

# Include the compile flags for this target's objects.
include lib/framework/CMakeFiles/framework.dir/flags.make

lib/framework/CMakeFiles/framework.dir/Common.cpp.o: lib/framework/CMakeFiles/framework.dir/flags.make
lib/framework/CMakeFiles/framework.dir/Common.cpp.o: ../lib/framework/Common.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/framework/CMakeFiles/framework.dir/Common.cpp.o"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && /home/shared/llvm-12.0.0-prebuild/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/framework.dir/Common.cpp.o -c /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework/Common.cpp

lib/framework/CMakeFiles/framework.dir/Common.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/framework.dir/Common.cpp.i"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && /home/shared/llvm-12.0.0-prebuild/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework/Common.cpp > CMakeFiles/framework.dir/Common.cpp.i

lib/framework/CMakeFiles/framework.dir/Common.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/framework.dir/Common.cpp.s"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && /home/shared/llvm-12.0.0-prebuild/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework/Common.cpp -o CMakeFiles/framework.dir/Common.cpp.s

lib/framework/CMakeFiles/framework.dir/Config.cpp.o: lib/framework/CMakeFiles/framework.dir/flags.make
lib/framework/CMakeFiles/framework.dir/Config.cpp.o: ../lib/framework/Config.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/framework/CMakeFiles/framework.dir/Config.cpp.o"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && /home/shared/llvm-12.0.0-prebuild/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/framework.dir/Config.cpp.o -c /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework/Config.cpp

lib/framework/CMakeFiles/framework.dir/Config.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/framework.dir/Config.cpp.i"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && /home/shared/llvm-12.0.0-prebuild/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework/Config.cpp > CMakeFiles/framework.dir/Config.cpp.i

lib/framework/CMakeFiles/framework.dir/Config.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/framework.dir/Config.cpp.s"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && /home/shared/llvm-12.0.0-prebuild/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework/Config.cpp -o CMakeFiles/framework.dir/Config.cpp.s

lib/framework/CMakeFiles/framework.dir/Function.cpp.o: lib/framework/CMakeFiles/framework.dir/flags.make
lib/framework/CMakeFiles/framework.dir/Function.cpp.o: ../lib/framework/Function.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/framework/CMakeFiles/framework.dir/Function.cpp.o"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && /home/shared/llvm-12.0.0-prebuild/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/framework.dir/Function.cpp.o -c /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework/Function.cpp

lib/framework/CMakeFiles/framework.dir/Function.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/framework.dir/Function.cpp.i"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && /home/shared/llvm-12.0.0-prebuild/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework/Function.cpp > CMakeFiles/framework.dir/Function.cpp.i

lib/framework/CMakeFiles/framework.dir/Function.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/framework.dir/Function.cpp.s"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && /home/shared/llvm-12.0.0-prebuild/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework/Function.cpp -o CMakeFiles/framework.dir/Function.cpp.s

lib/framework/CMakeFiles/framework.dir/WordDict.cpp.o: lib/framework/CMakeFiles/framework.dir/flags.make
lib/framework/CMakeFiles/framework.dir/WordDict.cpp.o: ../lib/framework/WordDict.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/framework/CMakeFiles/framework.dir/WordDict.cpp.o"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && /home/shared/llvm-12.0.0-prebuild/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/framework.dir/WordDict.cpp.o -c /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework/WordDict.cpp

lib/framework/CMakeFiles/framework.dir/WordDict.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/framework.dir/WordDict.cpp.i"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && /home/shared/llvm-12.0.0-prebuild/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework/WordDict.cpp > CMakeFiles/framework.dir/WordDict.cpp.i

lib/framework/CMakeFiles/framework.dir/WordDict.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/framework.dir/WordDict.cpp.s"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && /home/shared/llvm-12.0.0-prebuild/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework/WordDict.cpp -o CMakeFiles/framework.dir/WordDict.cpp.s

# Object files for target framework
framework_OBJECTS = \
"CMakeFiles/framework.dir/Common.cpp.o" \
"CMakeFiles/framework.dir/Config.cpp.o" \
"CMakeFiles/framework.dir/Function.cpp.o" \
"CMakeFiles/framework.dir/WordDict.cpp.o"

# External object files for target framework
framework_EXTERNAL_OBJECTS =

lib/framework/libframework.a: lib/framework/CMakeFiles/framework.dir/Common.cpp.o
lib/framework/libframework.a: lib/framework/CMakeFiles/framework.dir/Config.cpp.o
lib/framework/libframework.a: lib/framework/CMakeFiles/framework.dir/Function.cpp.o
lib/framework/libframework.a: lib/framework/CMakeFiles/framework.dir/WordDict.cpp.o
lib/framework/libframework.a: lib/framework/CMakeFiles/framework.dir/build.make
lib/framework/libframework.a: lib/framework/CMakeFiles/framework.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libframework.a"
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && $(CMAKE_COMMAND) -P CMakeFiles/framework.dir/cmake_clean_target.cmake
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/framework.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/framework/CMakeFiles/framework.dir/build: lib/framework/libframework.a

.PHONY : lib/framework/CMakeFiles/framework.dir/build

lib/framework/CMakeFiles/framework.dir/clean:
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework && $(CMAKE_COMMAND) -P CMakeFiles/framework.dir/cmake_clean.cmake
.PHONY : lib/framework/CMakeFiles/framework.dir/clean

lib/framework/CMakeFiles/framework.dir/depend:
	cd /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shared/AST2Graphs/pre_train_data_hashmap_gcc /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/lib/framework /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework /home/shared/AST2Graphs/pre_train_data_hashmap_gcc/build/lib/framework/CMakeFiles/framework.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/framework/CMakeFiles/framework.dir/depend
