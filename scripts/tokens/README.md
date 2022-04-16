## run environment

Python 3 and LLVM 11.0.0 are needed. You should also add environment variable 'CLANG_LIBRARY_PATH' for python binding to libclang, i.e. the path to find clang

## total_tokenize

### what can I do

- input：

  A folder containing source files of various types c, cpp and cc.


- output：

  - vocab.txt：

     It is a collection of all tokens after tokenizing the input folder. Each token is placed on a line with a lower count limit. Tokens below this lower limit are discarded.

  - total_tk_seq.txt：

     Each line of this file is a token sequence generated after tokenizing a function in a source file, separated by spaces.

### how to run：

```sh
python tokenize_dir.py in_path vocab_path out_path min_num
```

In this command, in_path represents the input folder, such as "/home/shared/projects/", vocab_path represents the path where vocab.txt is located, out_path represents the path where total_tk_seq.txt is located, and min_num represents the lower limit of each token count in vocab.txt.

## token_alias

### what can I do

- input：

  - alias-datasets-processed/：

    This folder includes three files, gcc_output.csv, linux_output.csv and mysql_output.csv, which describe the alias pair information under the corresponding path.

  - vocab.txt：

    The vocab file generated in the total_tokenize phase.

- output：

  - [gcc | linux | mysql]_index.tsv:

    These files, gcc_index.tsv, linux_index.tsv and mysql_index.tsv, map the two-dimensional coordinates of the def point and the use point in a alias pair to the index of the token sequence and put them in a line of the tsv files.

### how to run：

```sh
python token_alias.py csv_path vocab_path out_path
```

In this command, csv_path represents the path of the input folder "alias-datasets-processed/", vocab_path represents the path where vocab.txt is located, and out_path represents the path where gcc_index.tsv, linux_index.tsv and mysql_index.tsv are located.

