# CodeSem

CodeSem is a dataset of programs extracted from real-world flagship software codebases (e.g., Linux Kernel,

GCC, MySQL, etc.) and manually validated for equivalence prediction and alias prediction. In this repository, we include not only the CodeSem dataset, but also the re-implementation of the CuBERT, GGNN, and Graph Sandwiches models, as well as scripts for converting program source code into corresponding model inputs.

Next we'll cover the contents of each subdirectory.

## datasets
The dataset for equivalence prediction and alias prediction that we collected.

The details about the projects we selected for CodeSem are shown below.


| Projects     | Description                                     | Version | Size (KLoC) |
| ------------ | ----------------------------------------------- | ------- | ----------- |
| Linux Kernel | The main component of a Linux operating system. | 5.3.6   | 18,892      |
| MySQL        | A relational database management system.        | 8.0.25  | 5,800       |
| GCC          | A compiler for the GNU operating system.        | 10.3.0  | 12,196      |
| Git          | A distributed version control system.           | 2.23.1  | 890         |
| Tmux         | A terminal multiplexer.                         | 3.3-rc  | 86          |
| Redis        | An in-memory key–value database.                | 6.2.6   | 234         |
| Curl         | A data transferring tool.                       | 7.79.0  | 283         |
| LevelDB      | A key-value storage library.                    | 1.23    | 115         |

## models
The models we used in the evaluation, namely [CuBERT](https://github.com/CodeSemDataset/CodeSem/tree/main/models/CuBERT), [GGNN](https://github.com/CodeSemDataset/CodeSem/tree/main/models/GGNN), and [Graph Sandwiches](https://github.com/CodeSemDataset/CodeSem/tree/main/models/GraphSandwiches).

Please refer to [this document](https://github.com/CodeSemDataset/CodeSem/blob/main/models/CuBERT/README.md) for the use of CuBERT. For the use of graph models, please refer to README in the specific task subdirectory. For example, for the equivalence prediction task of GGNN, please refer to this [README](https://github.com/CodeSemDataset/CodeSem/blob/main/models/GGNN/ggnn_for_equivalent/README.md).

## scripts
The scripts we used to convert source code to model input.

Code in [scripts/tokens](https://github.com/CodeSemDataset/CodeSem/tree/main/scripts/tokens) is for CuBERT and code in [scripts/graph](https://github.com/CodeSemDataset/CodeSem/tree/main/scripts/graph) is for graph models.

