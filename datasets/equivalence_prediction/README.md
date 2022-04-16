# Functionally equivalent (compilable)



Each functionally equivalent file under this folder contains `#include` statements and can be compiled to `.ast` by using `clang`. (The header files required for each project are in the project's `include` folder, so just keep the current directory structure and run the command, e.g. `clang -emit-ast -c ./fine-grained/gcc/gcc_eq/6/byte_re_match_2_internal_6583-212619_6851-219281.foo.c`.)



Data in `coarse-grained` is used for global-level pre-training and data in `fine-grained` is used for fine-tuning.

