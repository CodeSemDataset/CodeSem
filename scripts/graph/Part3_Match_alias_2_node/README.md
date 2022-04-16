# README

## Function of the project

This project is an extension of part2, besides generating AST(ggnn, sandwich), PDG-AST, PDG-TokenSequence, CFG-AST, CFG-TokenSequence, it can match the input alias to the specific node in above graphs

## Build and run

You can find out the build steps in part1, the build steps for this paoject is exactly the same

Make sure there are initial dicts under ./tests before running

## Others

The class CSVRead which gets defined in ./include/framework/function.h controls the input of CSV file, currently the class use absolute path to locate the .ast source file, you should change the paths to your own input paths when using, the brief introduction is as follow:

ReadFromSingleCSV()： read gcc/linux/mysql alias file

deal_with_filename()：switch the path of alias in csv file to actual .ast file path

