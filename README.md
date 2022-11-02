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
docker run --gpus all -it --rm -v $Dir:/tmp tf:2.6 bash

# refer to README in Scripts/tokens and Scripts/graph to generate model input

# refer to README in Models/ to run models
```

## Introduction
CodeSem is a dataset built upon the source code of real-world flagship software (e.g., Linux Kernel, GCC, MySQL, etc.) and has been manually validated for two prediction tasks: (1) alias prediction in which models predict if two pointers must alias or must-not alias; and (2) equivalence prediction in which models predict whether two programs are semantically equivalent. We re-designed three influential code models for alias and equivalence prediction: CuBERT, GGNN, and Graph Sandwiches, and perform a head-to-head comparison based on CodeSem.

## Datasets

<!-- The dataset for equivalence prediction and alias prediction that we collected. -->
<!-- The details about the projects we selected for CodeSem are shown below. -->
Fourteen open-source projects are selected to construct CodeSem: Linux Kernel, GCC, MySQL, Git, tmux, Redis, curl, LevelDB, H2O, libgit2, The Silver Searcher, Protocol Buffers, aria2, and fish. These are all mature projects, most of which are large-scale (with hundreds of thousands or even millions of lines of code) and have a decades-long history. In general, the source code of those projects implement a board range of functionalities such as data transmission, memory management, cross-compilation, etc. which in turn makes CodeSem diverse.

| Projects     | Description                                     | Version | Size (KLoC) |
| ------------ | --------------- ------------------------------- | ------- | ----------- |
| Linux Kernel | The main component of a Linux operating system. | 5.3.6   | 18,892      |
| MySQL        | A relational database management system.        | 8.0.25  | 5,800       |
| GCC          | A compiler for the GNU operating system.        | 10.3.0  | 12,196      |
| Git          | A distributed version control system.           | 2.23.1  | 890         |
| tmux         | A terminal multiplexer.                         | 3.3-rc  | 86          |
| Redis        | An in-memory key–value database.                | 6.2.6   | 234         |
| curl         | A data transferring tool.                       | 7.79.0  | 283         |
| LevelDB      | A key-value storage library.                    | 1.23    | 115         |
| H2O          | An optimized HTTP/1, HTTP/2, HTTP/3 server.     | 2.2.6  |  371         |
| libgit2      | A cross-platform, linkable library implementation of Git. |  1.4.2 |  280      |
| The Silver Searcher |   A code-searching tool                  | 2.2.0  | 21          |
| Protocol Buffers|  A cross-platform data format used to serialize structured data. | 3.20.0  |   894     |
| aria2        |    A utility for downloading files.             | 1.36.0  |  367     |
| fish         |   A user-friendly command line shell.           | 3.4.1  |  455      |

### Data Details
This is the structure of our datasets:
```
.
├── alias_prediction
│   ├── fine-tune
│   │   ├── curl-alias.csv
│   │   ├── gcc-cc1-alias.csv
│   │   └── ...
│   └── pre-train_global
│       ├── gcc_cc1_aa_result-cfl-anders-wy-alias-pair.csv
│       └── ...
└── equivalence_prediction
    ├── README.md
    ├── fine-tune
    │   ├── curl
    │   │   ├── curl_eq
    │   │   │   ├── 1_146_147_148_149_150_151_152
    │   │   │   │   ├── tool_list_engines_1006-194455_1012-198094.foo.c
    │   │   │   │   ├── tool_list_engines_1006-194455_1023-198297.foo.c
    │   │   │   │   ├── tool_list_engines_1009-194517_1012-198094.foo.c
    │   │   │   │   └── tool_list_engines_1009-194517_1023-198297.foo.c
    │   │   │   └── ... 
    │   │   ├── curl_ne_1
    │   │   │   ├── 2_147_149_150_151_152_153_154
    │   │   │   │   ├── Curl_splay_45-167885_50-167961.foo.c
    │   │   │   │   └── tool_list_engines_1005-194422_1009-194585.foo.c
    │   │   │   └── ...
    │   │   │   
    │   │   ├── curl_ne_2
    │   │   └── include
    │   │       ├── curl_threads.i.hd.c.h
    │   │       └── ...
    │   ├── gcc
    │   └── ...
    └── pre-train_global
        ├── curl
        ├── gcc
        └── ...
```
There are two subdatasets under [datasets](https://github.com/CodeSemDataset/CodeSem/tree/main/datasets): [alias_prediction](https://github.com/CodeSemDataset/CodeSem/tree/main/datasets/alias_prediction) and [equivalence_prediction](https://github.com/CodeSemDataset/CodeSem/tree/main/datasets/equivalence_prediction), for two prediction tasks. The dataset for each task is further divided into pre-train_global and fine-tune, for different training tasks we designed for these three models. In [alias_prediction](https://github.com/CodeSemDataset/CodeSem/tree/main/datasets/alias_prediction), we use `csv` file to record alias pair and non-alias pair. In [equivalence_prediction](https://github.com/CodeSemDataset/CodeSem/tree/main/datasets/equivalence_prediction), we save the one function in each file, the file in each folder are equivalence to each other, the file in different folders are not equivalence to each other.

## Models

The models we used in the evaluation, namely [CuBERT](https://github.com/CodeSemDataset/CodeSem/tree/main/models/CuBERT), [GGNN](https://github.com/CodeSemDataset/CodeSem/tree/main/models/GGNN), and [Graph Sandwiches](https://github.com/CodeSemDataset/CodeSem/tree/main/models/GraphSandwiches).

Please refer to [this document](https://github.com/CodeSemDataset/CodeSem/blob/main/models/CuBERT/README.md) for the use of CuBERT. For the use of graph models, please refer to README in the specific task subdirectory. For example, for the equivalence prediction task of GGNN, please refer to this [README](https://github.com/CodeSemDataset/CodeSem/blob/main/models/GGNN/ggnn_for_equivalent/README.md).

## Scripts

The scripts we used to convert source code to model input.

Code in [scripts/tokens](https://github.com/CodeSemDataset/CodeSem/tree/main/scripts/tokens) is for CuBERT and code in [scripts/graph](https://github.com/CodeSemDataset/CodeSem/tree/main/scripts/graph) is for graph models.
