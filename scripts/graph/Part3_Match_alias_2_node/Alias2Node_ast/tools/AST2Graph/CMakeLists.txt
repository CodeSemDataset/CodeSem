add_executable(AST2Graph main.cpp)

# specify the libs that the target 'AST2Graph' needs
# !!! DO NOT change the order of the libs !!!
# libs will be linked in this order, and changing the order could lead to link errors
target_link_libraries(AST2Graph
  checkers
  framework
  ${CLANG_LIBS}
  ${LLVM_LIBS}
  ${OTHER_LIBS}
)
