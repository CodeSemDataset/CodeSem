cmake_minimum_required(VERSION 3.10)
project(ALIAS)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden -fsanitize=address -fsanitize-recover=address")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden")
set(CMAKE_EXPORT_COMPILE_COMMANDS YES)

if(DEFINED LLVM_PREFIX)
  set(LLVM_CONFIG ${LLVM_PREFIX}/bin/llvm-config)
  # specify LLVM include dir
  set(LLVM_INCLUDE ${LLVM_PREFIX}/include)
  # specify LLVM lib dir
  set(LLVM_LIB ${LLVM_PREFIX}/lib)
elseif(DEFINED LLVM_BUILD)
  set(LLVM_CONFIG ${LLVM_BUILD}/bin/llvm-config)
  # run `llvm-config --src-root` to get llvm source root path, and output it to variable LLVM_SRC
  execute_process(
    COMMAND ${LLVM_CONFIG} --src-root
    OUTPUT_VARIABLE LLVM_SRC
    OUTPUT_STRIP_TRAILING_WHITESPACE
  )
  # specify LLVM include dir
  set(LLVM_INCLUDE
    ${LLVM_SRC}/include ${LLVM_SRC}/tools/clang/include
    ${LLVM_BUILD}/include ${LLVM_BUILD}/tools/clang/include
  )
  # specify LLVM lib dir
  set(LLVM_LIB ${LLVM_BUILD}/lib)
else()
  message(FATAL_ERROR "You must define one of the two variables: LLVM_PREFIX, LLVM_BUILD")
endif()

if(NOT DEFINED Z3_DIR)
    message(FATAL_ERROR "You must define Z3_DIR to the root path of z3")
endif()

# run `llvm-config --libs` to get llvm libs list, and output it to variable LLVM_LIBS
execute_process(
  COMMAND ${LLVM_CONFIG} --libs
  OUTPUT_VARIABLE LLVM_LIBS
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

# define CLANG_LIBS: some clang libs to be used in link time
# !!! DO NOT change the order of the libs !!!
# libs will be linked in this order, and changing the order could lead to link errors
set(CLANG_LIBS
  clangTooling
  clangToolingCore
  clangFrontendTool
  clangFrontend
  clangDriver
  clangSerialization
  clangCodeGen
  clangParse
  clangSema
  clangStaticAnalyzerFrontend
  clangStaticAnalyzerCheckers
  clangStaticAnalyzerCore
  clangAnalysis
  clangARCMigrate
  clangRewriteFrontend
  clangRewrite
  clangEdit
  clangAST
  clangASTMatchers
  clangLex
  clangBasic
)

# set(CLANG_LIBS
#   clangTooling
#   clangToolingCore
#   clangFrontendTool
#   clangFrontend 
#   clangStaticAnalyzerFrontend
#   clangStaticAnalyzerCore
#   clangAnalysis
#   clangAST
#   clangASTMatchers
#   clangBasic
# )

# define OTHER_LIBS: other libs to be used in link time
set(OTHER_LIBS pthread z dl curses)

#find_package(Z3 REQUIRED config HINTS "${Z3_DIR}/cmake")

# set(Z3LINK "${Z3_DIR}/build/libz3.so")

#set(Z3LINK "/home/gfj/z3/build/libz3.so")
#message(Status "${Z3LINK}")

# add_compile_options(-fno-omit-frame-pointer -fsanitize=address)
# add_link_options(-fno-omit-frame-pointer -fsanitize=address)

# include_directories(include ${LLVM_INCLUDE} "${Z3_DIR}/src/api/c++" "${Z3_DIR}/src/api/")
include_directories(include ${LLVM_INCLUDE})
link_directories(${LLVM_LIB})

add_subdirectory(lib)
add_subdirectory(tools)
