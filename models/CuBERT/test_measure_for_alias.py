#!/usr/bin/env python
# coding: utf-8

import sys
import csv
from csv import reader
from sklearn.metrics import accuracy_score
from sklearn.metrics import confusion_matrix

def main():
    args = sys.argv[1:]
    test_file_path = args[0]
    test_result_path = args[1]

    test_labels = []
    with open(test_file_path, 'r') as f_labels:
      data = f_labels.readlines()
      data = data[1:]
      for one in data:
         test_labels.append(int(one.split('\t')[5]))
    # print('labels: ' + str(test_labels))
        
    test_result = []
    with open(test_result_path, 'r') as f_labels:
      data = f_labels.readlines()
      for row in data:
        row = row.replace('[','')
        row = row.replace(']','')
        line = row.strip().split()
        newline = [float(num) for num in line]
        predict_label = newline.index(max(newline))
        test_result.append(predict_label)
    # print('result: ' + str(test_result))

    accuracy = accuracy_score(test_labels, test_result)
    matrix = confusion_matrix(test_labels, test_result)
    acc_for_each_class = matrix.diagonal() / matrix.sum(axis=1)
    print('Overall Accuracy : ' + str(accuracy))
    print('Accuracy for must alias: ' + str(acc_for_each_class[1]))
    print('Accuracy for may alias: ' + str(acc_for_each_class[2]))
    print('Accuracy for must not alias: ' + str(acc_for_each_class[0]))


if __name__ == "__main__":
    main()
