add_executable(alias-finder main.cpp)

# specify the libs that the target 'TemplateChecker' needs
# !!! DO NOT change the order of the libs !!!
# libs will be linked in this order, and changing the order could lead to link errors

# target_compile_options(alias-finder PRIVATE -fno-omit-frame-pointer -fsanitize=address)
# target_link_options(alias-finder PRIVATE -fno-omit-frame-pointer -fsanitize=address)

target_link_libraries(alias-finder  
  statistic
  framework
  ${CLANG_LIBS}
  ${LLVM_LIBS}  
  ${OTHER_LIBS}
)

set_target_properties( alias-finder PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )
