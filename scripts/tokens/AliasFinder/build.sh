CC=gcc
CXX=g++

HOME=$(pwd)
LLVMHome="llvm-12.0.0.obj"
UbuntuLLVM="https://github.com/llvm/llvm-project/releases/download/llvmorg-12.0.0/clang+llvm-12.0.0-x86_64-linux-gnu-ubuntu-16.04.tar.xz"
UbuntuZ3="https://github.com/Z3Prover/z3/releases/download/z3-4.8.8/z3-4.8.8-x64-ubuntu-16.04.zip"
# export LLVM_BUILD="/home/lry/mnt-projects/llvm-12.0.0/build"

# Downloads $1 (URL) to $2 (target destination) using wget or curl,
# depending on OS.
# E.g. generic_download_file www.url.com/my.zip loc/my.zip
function generic_download_file {
    if [ $# -ne 2 ]
    then
        echo "$0: bad args to generic_download_file!"
        exit 1
    fi

    if [[ "$sysOS" == "Darwin" ]]
    then
        curl -L "$1" -o "$2"
    elif [[ "$sysOS" == "Linux" ]]
    then
        wget -c "$1" -O "$2"
    else
        echo "Cannot download file for non-Darwin/-Linux."
    fi
}

########
# Download LLVM if need be.
#######
if [ ! -d "$LLVM_BUILD" ]
then
    if [ ! -d "$LLVMHome" ]
    then
        echo "Downloading LLVM binary for $UbuntuLLVM"
        # generic_download_file "$urlLLVM" llvm.tar.xz
        wget -c "$UbuntuLLVM" -O "llvm.tar.xz"
        mkdir -p "./$LLVMHome" && tar -xf llvm.tar.xz -C "./$LLVMHome" --strip-components 1
        rm llvm.tar.xz
    fi

    export LLVM_BUILD="$HOME/$LLVMHome"
fi

########
# Download Z3 if need be.
#######
if [ ! -d "$Z3_DIR" ]
then
    if [ ! -d "$Z3Home" ]
    then
        echo "Downloading Z3 binary for $UbuntuZ3"
        generic_download_file "$UbuntuZ3" z3.zip
        unzip -q "z3.zip" && mv ./z3-* ./$Z3Home
        rm z3.zip
    fi

    export Z3_DIR="$HOME/$Z3Home"
fi

if [ "$1" == "debug" ]; then
    build_dir="Debug-build"
    build_type="Debug"
else
    build_dir="Release-build"
    build_type="Release"
fi
mkdir -p $build_dir
cd $build_dir

# cmake -DLLVM_PREFIX=${LLVM_PREFIX} -D Z3_DIR=/path/to/z3/ -D CMAKE_BUILD_TYPE=Release ..
# use LLVM build directory, you can ignore Z3_DIR
cmake -DLLVM_BUILD=$LLVM_BUILD -DZ3_DIR=$Z3_DIR -DCMAKE_BUILD_TYPE=$build_type ..
make -j 8