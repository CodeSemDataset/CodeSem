# CodeSem

CodeSem is a dataset of programs extracted from real-world flagship software codebases (e.g., Linux Kernel, GCC, MySQL, etc.) and manually validated for equivalence prediction and alias prediction. In this repository, we include not only the CodeSem dataset, but also the re-implementation of the CuBERT, CodeBERT, GGNN, and Graph Sandwiches models, as well as scripts for converting program source code into corresponding model inputs.

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
Here's a quick start to reproduce our experiment.
```shell
# clone this repository
git clone https://github.com/CodeSemDataset/CodeSem.git
cd CodeSem

# build the docker image
docker build --network=host -t "tf:2.6" .

# run a new docker container
# Dir is the workdir of your local device
docker run --gpus all -it --rm -v $Dir/CodeSem:/tmp tf:2.6 bash
```
To generate model inputs for sequence models and graph models, refer to README in [scripts/tokens](https://github.com/CodeSemDataset/CodeSem/tree/main/scripts/tokens) and [scripts/graph](https://github.com/CodeSemDataset/CodeSem/tree/main/scripts/graph), respectively.

To train and test models, refer to README in each code model under [models/](https://github.com/CodeSemDataset/CodeSem/tree/main/models).
## Introduction
CodeSem is a dataset built upon the source code of real-world flagship software (e.g., Linux Kernel, GCC, MySQL, etc.) and has been manually validated for two prediction tasks: (1) alias prediction in which models predict whether two pointers must alias, may alias or must not alias; and (2) equivalence prediction in which models predict whether two programs are semantically equivalent. We re-designed four influential code models for alias and equivalence prediction: CuBERT, CodeBERT, GGNN, and Graph Sandwiches, and perform a head-to-head comparison based on CodeSem.

## Datasets

<!-- The dataset for alias prediction and equivalence prediction that we collected. -->
<!-- The details about the projects we selected for CodeSem are shown below. -->
Fourteen open-source projects are selected to construct CodeSem: Linux Kernel, GCC, MySQL, Git, tmux, Redis, curl, LevelDB, H2O, libgit2, The Silver Searcher, Protocol Buffers, aria2, and fish. These are all mature projects, most of which are large-scale (with hundreds of thousands or even millions of lines of code) and have a decades-long history. In general, the source code of those projects implement a board range of functionalities such as data transmission, memory management, cross-compilation, etc., which in turn makes CodeSem diverse. We give the details about the projects we selected for CodeSem in the table below.

| Projects     | Description                                     | Version | Size (KLoC) |
| ------------ | ----------------------------------------------- | ------- | ----------- |
| Linux Kernel | The main component of a Linux operating system. | [6.2.9](https://cdn.kernel.org/pub/linux/kernel/v6.x/linux-6.2.9.tar.gz)   | 25,416      |
| MySQL        | A relational database management system.        | [8.0.32](https://github.com/mysql/mysql-server/archive/refs/tags/mysql-8.0.32.tar.gz)  | 4,005       |
| GCC          | A compiler for the GNU operating system.        | [12.2.0](https://ftp.gnu.org/gnu/gcc/gcc-12.2.0/gcc-12.2.0.tar.gz)  | 10,162      |
| Git          | A distributed version control system.           | [2.40.0](https://github.com/git/git/archive/refs/tags/v2.40.0.tar.gz)  | 883         |
| tmux         | A terminal multiplexer.                         | [3.3](https://github.com/tmux/tmux/archive/refs/tags/3.3.tar.gz) | 86          |
| Redis        | An in-memory key–value database.                | [7.0.10](https://github.com/redis/redis/archive/refs/tags/7.0.10.tar.gz)   | 269         |
| curl         | A data transferring tool.                       | [8.0.1](https://github.com/curl/curl/archive/refs/tags/curl-8_0_1.tar.gz)  | 319         |
| LevelDB      | A key-value storage library.                    | [1.23](https://github.com/google/leveldb/archive/refs/tags/1.23.tar.gz)    | 114         |
| H2O          | An optimized HTTP/1, HTTP/2, HTTP/3 server.     | [2.2.6](https://github.com/h2o/h2o/archive/refs/tags/v2.2.6.tar.gz) |  371         |
| libgit2      | A cross-platform, linkable library implementation of Git. |  [1.6.3](https://github.com/libgit2/libgit2/archive/refs/tags/v1.6.3.tar.gz) |  255      |
| The Silver Searcher |   A code-searching tool                  | [2.2.0](https://github.com/ggreer/the_silver_searcher/archive/refs/tags/2.2.0.tar.gz) | 20          |
| Protocol Buffers|  A cross-platform data format used to serialize structured data. | [22.2](https://github.com/protocolbuffers/protobuf/releases/download/v22.2/protobuf-22.2.tar.gz) |   603     |
| aria2        |    A utility for downloading files.             | [1.36.0](https://github.com/aria2/aria2/archive/refs/tags/release-1.36.0.tar.gz) |  136     |
| fish         |   A user-friendly command line shell.           | [3.6.1](https://github.com/fish-shell/fish-shell/archive/refs/tags/3.6.1.tar.gz) |  520      |

### Data Details
We assemble dataset for the following two tasks: alias prediction and equivalence prediction. The structure of the dataset is shown below:
```
.
├── alias_prediction
│   ├── fine-tune
│   │   ├── curl.csv
│   │   ├── gcc.csv
│   │   └── ...
│   └── specialized_pre-train
│       ├── gcc.csv
│       └── ...
└── equivalence_prediction
    ├── fine-tune
    │   ├── aria2_compare_equal_pairs.csv
    │   ├── aria2_compare_inequal_pairs.csv
    │   ├── curl_compare_equal_pairs.csv
    │   ├── curl_compare_inequal_pairs.csv
    │   └── ...
    ├── specialized_pre-train
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
There are two subdatasets under [datasets](https://github.com/CodeSemDataset/CodeSem/tree/main/datasets): [alias_prediction](https://github.com/CodeSemDataset/CodeSem/tree/main/datasets/alias_prediction) and [equivalence_prediction](https://github.com/CodeSemDataset/CodeSem/tree/main/datasets/equivalence_prediction), for two prediction tasks. The dataset for each task is further divided into `specialized_pre-train` and `fine-tune`, for different training stages we designed for these three models. 

For alias prediction, each `csv` file is formatted like `['name1', 'path1', 'def_line1', 'name2', 'path2', 'def_line2', 'fine_grained_label']`, in which the first three columns represent the variable name of the first variable, the relative path to the file where it is located, and the row where the definition point is located. Columns four through six represent the similar information for the second variable. The seventh column represents the label, which means that the two variables must alias (label is 1), may alias (label is 2) or must-not alias (label is 0). 

For equivalent predictions, each `csv` file is named after` 'projectName_compare_dataType_pairs.csv'`, and the file is formatted like `['file1', 'file2']`. `file1` and `file2` correspond to the relative paths of the two files in the `projectName_compare` subdirectory in Allprojects. When the `dataType` is `equal`, the two files are semantically equivalent, and label is 1. When the `dataType` is `inequal`, the two files are inequivalent, and label is 0. Each `.foo.c` file under `equivalence_prediction` can be compiled to `.ast` by using `clang`. (The header files required for each project are in the project's `include` folder, so just keep the current directory structure and run the command, e.g. `clang -emit-ast -c ./datasets/equivalence_prediction/AllProjects/gcc_compare/6/byte_re_match_2_internal_6583-212619_6851-219281.foo.c`.)

## Models

The models we used in the evaluation, namely [CuBERT](https://github.com/CodeSemDataset/CodeSem/tree/main/models/CuBERT), [CodeBERT](https://github.com/CodeSemDataset/CodeSem/tree/main/models/CodeBERT), [GGNN](https://github.com/CodeSemDataset/CodeSem/tree/main/models/GGNN), and [Graph Sandwiches](https://github.com/CodeSemDataset/CodeSem/tree/main/models/GraphSandwiches).

Please refer to [this document](https://github.com/CodeSemDataset/CodeSem/blob/main/models/CuBERT/README.md) for the use of sequence models. For the use of graph models, please refer to README in the specific task subdirectory. For example, for the equivalence prediction task of GGNN, please refer to this [README](https://github.com/CodeSemDataset/CodeSem/blob/main/models/GGNN/ggnn_for_equivalent/README.md).

## Scripts

The scripts we used to convert source code to model input.

Code in [scripts/tokens](https://github.com/CodeSemDataset/CodeSem/tree/main/scripts/tokens) is for sequence models and code in [scripts/graph](https://github.com/CodeSemDataset/CodeSem/tree/main/scripts/graph) is for graph models.
