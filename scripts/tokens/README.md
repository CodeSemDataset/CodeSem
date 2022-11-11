# Environment

Python 3 and LLVM 12.0.0 are needed. You should also add some environment variables:

- **PYTHONPATH**: the path to find python bindings to clang, eg. "/home/**/llvm-project/clang/bindings/python/"
- **CLANG_LIBRARY_PATH**: the path to find libclang library, eg. "/home/**/llvm-project/build/lib"

# Configuration

We suppose **${ROOT}** is root path of this project. User should modify some variables in

${ROOT}/scripts/program_to_embedding/tokens/common/config.py, for example:

```python
# the map of project name to project path
whichToDir = {
    'gcc': '**/gcc-10.3.0/', 'mysql': '**/mysql-8.0.25/'}

# the map of project name to project ast path
whichToAstRoot={
    'gcc': '**/gcc-10.3.0/build-ast/', 'mysql': '**/mysql-8.0.25/build-ast/'}
```

# Tokenize

## ability

- input：

  Some folders containing multiple source files, such as c, cpp and cc files.


- output：

  - vocab.txt：

     It is a collection of all tokens after tokenizing the input folder. Each token is placed on a line with a lower count limit. Tokens below this lower limit are discarded.

  - tkseq.txt：

     Each line of this file is a token sequence generated after tokenizing a function in a source file, separated by spaces.

## configuration

User should modify variable 'srcPaths'  in ${ROOT}/scripts/program_to_embedding/tokens/tokenize/pack/config.py

```python
# the directories which contain some source files
srcPaths=[
    'path1', 'path2' 
]
```

## run command

```sh
# ${ROOT} is root path of this project
cd ${ROOT}/scripts/program_to_embedding/tokens/tokenize/tkzrun
python3 tkz-all.py ${out_dir} ${min_num}
```

In this command,  **out_dir** represents the path where vocab.txt and tkseq.txt are located, and **min_num** represents the minimum bound of each token's number in vocab.txt.

# Token_alias

## alias_verify

### ability

This module is created to find and collect alias pairs in C/C++ files.

- input：

  Folder containing some csv files. Each csv file has the following format:

  | name1 | path1 | def_line1 | name2 | path2 | def_line2 | label |
  | ----- | ----- | --------- | ----- | ----- | --------- | ----- |
  |       |       |           |       |       |           |       |


- output：

  Folder containing some csv files. Each csv file has the following format:

  | name1 | path1 | def_line1 | name2 | path2 | def_line2 | label | alias_type |
  | ----- | ----- | --------- | ----- | ----- | --------- | ----- | ---------- |
  |       |       |           |       |       |           |       |            |

### run command

```sh
cd ${ROOT}/scripts/program_to_embedding/tokens/token_alias/alias_verify
# $in_dir is the directory for input, $out_dir is the directory for output
python3 find_all_alias.py $in_dir $out_dir full
```

## refine_alias

### ability

This module is created to find def-use chains of variables in C/C++ files.

- input：

  Folder containing some csv files. Each csv file has the following format:

  | name1 | path1 | def_line1 | name2 | path2 | def_line2 | label | alias_type |
  | ----- | ----- | --------- | ----- | ----- | --------- | ----- | ---------- |
  |       |       |           |       |       |           |       |            |


- output：

  Folder containing some csv files. Each csv file has the following format:

  | name1 | path1 | def_line1 | name2 | path2 | def_line2 | label | alias_type |
  | ----- | ----- | --------- | ----- | ----- | --------- | ----- | ---------- |
  |       |       |           |       |       |           |       |            |

### run command

```python
cd ${ROOT}/scripts/program_to_embedding/tokens/token_alias/refine_alias
# ${VOCAB_PATH} is one of the results created by module 'Tokenize'
python3 refine.py $in_dir ${VOCAB_PATH} $out_dir full
```

## tkarun

### ability

User can use this module to create alias pairs input of a Deep Learning Model

### run command

```python
cd ${ROOT}/scripts/program_to_embedding/tokens/token_alias/tkarun
# ${VOCAB_PATH} is one of the results created by module 'Tokenize'
python3 tka_classify.py $in_dir ${VOCAB_PATH} $out_dir full
```

$in_dir is path of the output created by module 'refine_alias'

# Equivalence

## ability

User can use this module to create a input of a Deep Learning Model

## run command

```python
cd ${ROOT}/scripts/program_to_embedding/tokens/equivalence/eqrun-no-var
# ${VOCAB_PATH} is one of the results created by module 'Tokenize'
python3 multi-eqrun.py $in_dir ${VOCAB_PATH} $out_dir
```

