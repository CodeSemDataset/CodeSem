# CodeSem

CodeSem is a dataset of programs extracted from real-world flagship software codebases (e.g., Linux Kernel, GCC, MySQL, etc.) and manually validated for equivalence prediction and alias prediction. In this repository, we include not only the CodeSem dataset, but also the re-implementation of the CuBERT, GGNN, and Graph Sandwiches models, as well as scripts for converting program source code into corresponding model inputs.

<!-- Next we'll cover the contents of each subdirectory. -->

### Table of Contents
  - [Quickstart](#quickstart)
  - [Introduction](#introduction)
  - [Datasets](#datasets)
    <!-- + [Dataset of Local-Level Pre-Training](#dataset-of-local-level-pre-training) -->
    + [Data details](#data-details)
  - [Models](#models)
  - [Scripts](#scripts)


## Quickstart
There is the scripts to reproduce our experiments in the paper.
```
# clone this repository
git clone https://github.com/CodeSemDataset/CodeSem.git
cd CodeSem

# build the docker image
docker build --network=host -t "tf:2.6" .

# run a new docker container
# Dir is the workdir of your local device
docker run --gpus all -it --rm -v $Dir/CodeSem:/tmp tf:2.6 bash

# refer to README in Scripts/tokens and Scripts/graph to generate model input

# refer to README in Models/ to run models
```

## Introduction
CodeSem is a dataset built upon the source code of real-world flagship software (e.g., Linux Kernel, GCC, MySQL, etc.) and has been manually validated for two prediction tasks: (1) alias prediction in which models predict if two pointers must alias or must-not alias; and (2) equivalence prediction in which models predict whether two programs are semantically equivalent. We re-designed three influential code models for alias and equivalence prediction: CuBERT, GGNN, and Graph Sandwiches, and perform a head-to-head comparison based on CodeSem.

## Datasets

<!-- The dataset for alias prediction and equivalence prediction that we collected. -->
<!-- The details about the projects we selected for CodeSem are shown below. -->
Fourteen open-source projects are selected to construct CodeSem: Linux Kernel, GCC, MySQL, Git, tmux, Redis, curl, LevelDB, H2O, libgit2, The Silver Searcher, Protocol Buffers, aria2, and fish. These are all mature projects, most of which are large-scale (with hundreds of thousands or even millions of lines of code) and have a decades-long history. In general, the source code of those projects implement a board range of functionalities such as data transmission, memory management, cross-compilation, etc., which in turn makes CodeSem diverse. We give the details about the projects we selected for CodeSem in the table below.

| Projects     | Description                                     | Version | Size (KLoC) |
| ------------ | ----------------------------------------------- | ------- | ----------- |
| Linux Kernel | The main component of a Linux operating system. | [5.3.6](https://cdn.kernel.org/pub/linux/kernel/v5.x/linux-5.3.6.tar.gz)   | 18,892      |
| MySQL        | A relational database management system.        | [8.0.25](https://downloads.mysql.com/archives/get/p/23/file/mysql-8.0.25.tar.gz)  | 5,800       |
| GCC          | A compiler for the GNU operating system.        | [10.3.0](https://ftp.gnu.org/gnu/gcc/gcc-10.3.0/gcc-10.3.0.tar.gz)  | 12,196      |
| Git          | A distributed version control system.           | [2.23.1](https://mirrors.edge.kernel.org/pub/software/scm/git/git-2.23.1.tar.gz)  | 890         |
| tmux         | A terminal multiplexer.                         | 3.3-rc  | 86          |
| Redis        | An in-memory key–value database.                | [6.2.6](https://github.com/redis/redis/archive/refs/tags/6.2.6.tar.gz)   | 234         |
| curl         | A data transferring tool.                       | [7.79.0](https://github.com/curl/curl/releases/download/curl-7_79_0/curl-7.79.0.tar.gz)  | 283         |
| LevelDB      | A key-value storage library.                    | [1.23](https://github.com/google/leveldb/archive/refs/tags/1.23.tar.gz)    | 115         |
| H2O          | An optimized HTTP/1, HTTP/2, HTTP/3 server.     | [2.2.6](https://github.com/h2o/h2o/archive/refs/tags/v2.2.6.tar.gz) |  371         |
| libgit2      | A cross-platform, linkable library implementation of Git. |  [1.4.2](https://github.com/libgit2/libgit2/archive/refs/tags/v1.4.2.tar.gz) |  280      |
| The Silver Searcher |   A code-searching tool                  | [2.2.0](https://github.com/ggreer/the_silver_searcher/archive/refs/tags/2.2.0.tar.gz) | 21          |
| Protocol Buffers|  A cross-platform data format used to serialize structured data. | [3.20.0](https://github.com/protocolbuffers/protobuf/archive/refs/tags/v3.20.0.tar.gz) |   894     |
| aria2        |    A utility for downloading files.             | [1.36.0](https://github.com/aria2/aria2/archive/refs/tags/release-1.36.0.tar.gz) |  367     |
| fish         |   A user-friendly command line shell.           | [3.4.1](https://github.com/fish-shell/fish-shell/archive/refs/tags/3.4.1.tar.gz) |  455      |

### Data Details
We assemble dataset for the following two tasks: alias prediction and equivalence prediction. The structure of the dataset is shown below:
```
.
├── alias_prediction
│   ├── fine-tune
│   │   ├── curl.csv
│   │   ├── gcc.csv
│   │   └── ...
│   └── global-level_pre-train
│       ├── gcc.csv
│       └── ...
└── equivalence_prediction
    ├── fine-tune
    │   ├── aria2_compare_equal_pairs.csv
    │   ├── aria2_compare_inequal_pairs.csv
    │   ├── curl_compare_equal_pairs.csv
    │   ├── curl_compare_inequal_pairs.csv
    │   └── ...
    ├── global-level_pre-train
    │   ├── aria2_compare_equal_pairs.csv
    │   ├── aria2_compare_inequal_pairs.csv
    │   ├── curl_compare_equal_pairs.csv
    │   ├── curl_compare_inequal_pairs.csv
    │   └── ...
    └── AllProjects
        ├── aria2_compare
        │   ├── 1
        │   │   ├── wslay_event_recv_508-135788_607-140735.foo.c
        │   │   ├── wslay_event_recv_508-135788_696-145433.foo.c
        │   │   ├── wslay_event_recv_508-135788_703-145874.foo.c
        │   │   ├── wslay_event_recv_519-136415_607-140735.foo.c
        │   │   └── ...
        │   ├── 1_1090
        │   │   ├──wslay_event_recv_596-139874_703-145874.foo.c
        │   │   └── ...
        │   ├── ...
        │   └── include
        │       ├──dycfoo.h
        │       ├──uri_split.i.hd.c.h
        │       └── ...
        ├── curl_compare
        └── ...
```
There are two subdatasets under [datasets](https://github.com/CodeSemDataset/CodeSem/tree/main/datasets): [alias_prediction](https://github.com/CodeSemDataset/CodeSem/tree/main/datasets/alias_prediction) and [equivalence_prediction](https://github.com/CodeSemDataset/CodeSem/tree/main/datasets/equivalence_prediction), for two prediction tasks. The dataset for each task is further divided into `global-level_pre-train` and `fine-tune`, for different training stages we designed for these three models. 

For alias prediction, each `csv` file is formatted like `['name1', 'path1', 'def_line1', 'name2', 'path2', 'def_line2', 'fine_grained_label', 'alias_type']`, in which the first three columns represent the variable name of the first variable, the relative path to the file where it is located, and the row where the definition point is located. Columns four through six represent the similar information for the second variable. The seventh column represents the label, which means that the two variables are alias (label is 1) or nonalias (label is 0). The eighth column represents the alias type we defined in the paper if the pair of variables are aliased. This column is only valid for aliases in fine-tuning dataset.

For equivalent predictions, each `csv` file is named after` 'projectName_compare_dataType_pairs.csv'`, and the file is formatted like `['file1', 'file2']`. `file1` and `file2` correspond to the relative paths of the two files in the `projectName_compare` subdirectory in Allprojects. When the `dataType` is `equal`, the two files are semantically equivalent, and label is 1. When the `dataType` is `inequal`, the two files are inequivalent, and label is 0. Each `.foo.c` file under `equivalence_prediction` can be compiled to `.ast` by using `clang`. (The header files required for each project are in the project's `include` folder, so just keep the current directory structure and run the command, e.g. `clang -emit-ast -c ./datasets/equivalence_prediction/AllProjects/gcc_compare/6/byte_re_match_2_internal_6583-212619_6851-219281.foo.c`.)

## Models

The models we used in the evaluation, namely [CuBERT](https://github.com/CodeSemDataset/CodeSem/tree/main/models/CuBERT), [GGNN](https://github.com/CodeSemDataset/CodeSem/tree/main/models/GGNN), and [Graph Sandwiches](https://github.com/CodeSemDataset/CodeSem/tree/main/models/GraphSandwiches).

Please refer to [this document](https://github.com/CodeSemDataset/CodeSem/blob/main/models/CuBERT/README.md) for the use of CuBERT. For the use of graph models, please refer to README in the specific task subdirectory. For example, for the equivalence prediction task of GGNN, please refer to this [README](https://github.com/CodeSemDataset/CodeSem/blob/main/models/GGNN/ggnn_for_equivalent/README.md).

## Scripts

The scripts we used to convert source code to model input.

Code in [scripts/tokens](https://github.com/CodeSemDataset/CodeSem/tree/main/scripts/tokens) is for CuBERT and code in [scripts/graph](https://github.com/CodeSemDataset/CodeSem/tree/main/scripts/graph) is for graph models.
