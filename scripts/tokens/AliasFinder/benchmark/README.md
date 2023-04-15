# benchmark
>无论构建哪个项目都先看[使用](#Usage)
### 简介
1. benchmark 用于调试、评估代码分析工具的效率, 仅供参考。
2. 根据之前讨论结果, 现阶段大部分工作基于 clang-ast 开展, 因此 benchmark 中的项目仅保证能为每个源代码文件生成 clang-ast, 以`.ast`作为后缀。
    + 所生成`.ast`文件路径存放在`astList.txt`, 均为绝对路径
    + `.ast` 文件的读取参考接口[`ASTUnit::LoadFromASTFile()`](http://clang.llvm.org/doxygen/classclang_1_1ASTUnit.html), 框架本身集成了读取ast文件的功能(`ASTManager`类), 使用方法参考`TemplateChecker`。
    + 需要 llvm-IR 的同学可以参考 wllvm
3. 为了项目仓库的干净以及考虑 clone 下载效率, benchmark 目录下的所有 project 均不包含已经编译好的 ast 或 IR 等中间文件。
4. benchmark 包含: 
    + 100w+ LoC: mysql-5.6.46
    + 40w+ LoC: cpython-v3.8.0
    + 4w+ LoC: libjpeg-turbo-2.0.3
    + 100~1k LoC: Coreutils - GNU core utilities(含多个独立的源码, eg. md5sum, wc, ...) (算上gnulib-test功能20w+ LoC)
5. 测试环境: 
    + [+] Ubuntu 18.04.4, llvm/clang 8.0.0
    + [+] Ubuntu 16.04 LTS, llvm/clang 9.0.0
    + ***不同项目有不同依赖, 在此无法一一列举, 请根据错误提示安装相应的依赖。***, 一般来说`cmake`或者`configure`后根据错误提示进行判断。
6. LoC 统计工具为[cloc](http://cloc.sourceforge.net/), 可以尝试使用发行版自带的包管理工具安装, 如`sudo apt install cloc`
    + 只统计 c/cpp/cc/h/hpp/... 等和 c, c++ 语言有关的代码文件
    + Ubuntu 16.04 LTS 官方源中的 cloc 版本为1.60, 含有[bug](https://github.com/AlDanial/cloc/issues/126), 请[下载较新版本](https://github.com/AlDanial/cloc/releases)使用
7. 其他:
    + 考虑该目录下的脚本文件鲁棒性不强, 可能需要根据实际电脑环境修改, 有问题随时咨询负责人[何杰煊](kuaiqleqren@163.com), 非逻辑 bug 的更改请勿 git add/commit(不要用`git add .`这种方法进行版本管理)。
    + 不将脚本文件添加到`.gitignore`下的原因: 这些文件仍需要被 git track, 添加到的`.gitignore`则无法 track
    + 项目以 git submodule (对tag支持尚不友好)形式存在或直接给出链接自行下载(必要时把源码打包部署在组内服务器中供校园网内下载)。

----------

### 使用(必看)<a name="Usage"></a>
>在使用过程中, 不同环境可能会遇到不同的问题, 在此无法一一列举, 一般来说可通过互联网搜索解决。如有疑问请联系负责人[何杰煊](kuaiqleqren@163.com)
1. 每个项目的构建流程大体相同, 下面介绍统一的构建方法, 后面只列出各个项目的部分依赖项/下载地址/注意事项
2. `.ast`文件生成原理和流程:
    + 使用 bear(`sudo apt install bear`)在 benchmark 项目构建(`make`)时提取编译命令, 生成`compile_commands.json`
    + 使用`genastcmd.py`对`compile_commands.json`里的编译命令进行提取并加以改造, 生成`buildast.sh`和`astList.txt`
    + 运行`buildast.sh`生成`.ast`文件
3. 运行命令: (总体上和编译源码本身的流程一致) (不同环境不同项目的运行命令可能不同)
    ```bash
    tar xvf xxx.tar.xz # 解压源码
    cd xxx # 进入源码目录
    mkdir build-ast && cd build-ast # out-of-source 方式构建项目
    
    # 设置环境变量(保证生成和 clang 编译 benchmark 本身使用的 CFLAGS/CXXFLAGS 一样)
    export CC=/path/to/clang
    export CXX=/path/to/clang++
    
    # 生成makefile文件
    # 对于cmake项目
    cmake -DCMAKE_BUILD_TYPE=Release ..
    # 对于非cmake项目
    ../configure # 目前提供的benchmark中非cmake项目都通过configure生成
    
    # 构建项目并生成compile_commands.json
    # 和构建项目时用make一样, 只不过在前面加上bear
    bear make -j`nproc` 
    
    # 拷贝getastcmd.py到当前目录, 并运行生成buildast.sh和astList.txt
    cp /path/to/genastcmd.py .
    python3 genastcmd.py
    
    # 运行buildast.sh
    chmod +x buildast.sh
    ./buildast.sh | tee buildast.log # log用来看看生成ast时有没有出现error
    
    # 看看buildast.log里是否有error, 有则需要排错
    ```
4. `astList.txt`里的路径均为绝对路径, 因此可以直接复制该文件到其他目录下进行使用。   
5. `cmake 2.8.5`之后提供了`-DCMAKE_EXPORT_COMPILE_COMMANDS=on`选项也能生成`compile_commands.json`, 不使用这种方法的原因有:
    + 目前来说, 并非所有项目都提供`cmake`方式构建, 使用`bear`能统一cmake项目和非cmake项目构建`.ast`文件方式和脚本。
    + 有些项目会在`make`时生成源码文件, 例如`mysql`会在`make`时生成`sql_yacc.cc`, 然后再对这个文件进行编译, 即, 即使使用cmake的该选项也需要make构建后才能运行由处理`compile_commands.json`生成的`buildast.sh`。
6. 其他说明；
    + 不把所有`.ast`文件放到同一个目录下的原因: 项目本身会对同一个`c/cpp`文件用不同的选项进行编译并生成不同的中间文件, 即会生成不同的`.ast`, 但是这些`.ast`文件里可能存在同样的函数

----------

#### mysql-5.6.46, 100w LoC
1. 依赖: [官网要求: python3, bison, openssl etc.](https://dev.mysql.com/doc/refman/5.6/en/source-installation-prerequisites.html)。Ubuntu环境下，如果安装了OpenSSL的情况下仍然报错`Cannot find appropriate system libraries for WITH_SSL=system`，可尝试安装libssl-dev(`sudo apt install libssl-dev`)
2. 下载: `wget https://github.com/mysql/mysql-server/archive/mysql-5.6.46.tar.gz`
3. 其他说明
    + 1k+ `.ast`文件, 约20分钟, 共5GB以上, 生成`.ast`时会有很多同类型`warning`, 可忽略


#### cpython-v3.8.0, 40w+ LoC
1. 依赖: `sudo apt install -y libreadline-dev libssl-dev openssl libffi-dev libbz2-dev libgdbm-dev libgdbm-compat-dev liblzma-dev tk-dev uuid-dev libsqlite3-dev`
    + ubuntu 16.04 LTS 官方源中没有`libgdbm-compat-dev`, 也不需要安装其他替代软件
2. 下载: `wget https://www.python.org/ftp/python/3.8.0/Python-3.8.0.tar.xz`
3. 若make后出现以下信息, 则需要解决, 解决后可能需要重新`../configure`
    ```
    Python build finished successfully!
    The necessary bits to build these optional modules were not found:
    ...
    
    Failed to build these modules:
    ... 
    ```
4. 出现以下信息可以先忽略
    ```
    The following modules found by detect_modules() in setup.py, have been
    built by the Makefile instead, as configured by the Setup files:
    ...
    ```


#### libjpeg-turbo-2.0.3, 4w- LoC
1. 依赖: [参考](https://github.com/libjpeg-turbo/libjpeg-turbo/blob/2.0.3/BUILDING.md), 主要是 NASM(`sudo apt install nasm`) 或 YASM
2. 下载: `wget https://github.com/libjpeg-turbo/libjpeg-turbo/archive/2.0.3.tar.gz`


#### Coreutils - GNU core utilities, 100~1k LoC
1. 关于[Coreutils](https://www.gnu.org/software/coreutils/)
    + 官网简介:The GNU Core Utilities are the basic file, shell and text manipulation utilities of the GNU operating system.
    + GNU 套件内含多个实用工具, 每个工具代码行数在几百到1千之间, 大部分相互独立
2. 依赖: [参考](https://github.com/coreutils/coreutils/blob/master/README-prereq), 大部分可以通过包管理工具安装(`sudo apt install xxx`)(note: in ubuntu 16.04, makeinfo named texinfo)
3. 下载: `wget https://ftp.gnu.org/gnu/coreutils/coreutils-8.31.tar.xz`
4. 说明:
    + 由于该项目是一个工具集, 内含多个相互独立的源码集, 但所生成的`astList.txt`中会包含全部`.ast`文件路径, 因此对代码分析时不必对`astList.tx`t中所有的`.ast`分析, 可以根据`src/`目录下的源代码文件对`astList.txt`作划分。
    + 含`gnulib-test`
