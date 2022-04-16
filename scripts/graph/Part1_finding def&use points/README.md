## Compile command

```
rm -rf build
mkdir build
cd build
cmake -DLT_LLVM_INSTALL_DIR=/path/to/llvm
make

opt -load ./lib/libHelloWorld.so -legacy-hello-world -csv path/to/input.csv -disable-output path/to/input.bc
```
