#!/usr/bin/env python
# coding: utf-8

import sys
import csv
from csv import reader

def main():
    args = sys.argv[1:]
    test_labels_path = args[0]
    test_result_path = args[1]

    test_labels = []
    with open(test_labels_path, 'r') as f_labels:
      data = f_labels.readlines()
      test_labels = list(map(int, data[0].split()))
    print('labels: ' + str(test_labels))


    test_result = []
    with open(test_result_path, 'r') as f_labels:
      data = f_labels.readlines()
      for row in data:
        row = row.replace('[','')
        row = row.replace(']','')
        line = row.strip().split()
        weight0 = float(line[0])
        weight1 = float(line[1])
        if weight0 > weight1:
          test_result.append(0)
        else:
          test_result.append(1)
    print('result: ' + str(test_result))


    TP = TN = FP = FN = 0.
    for i in range(len(test_labels)):
      label = test_labels[i]
      result = test_result[i]
      if (label == result):
        if (label == 1):
          TP += 1
        else:
          TN += 1
      else:
        if (label == 1):
          FN += 1
        else:
          FP += 1
    print('True Positives: ' + str(TP))
    print('True Negatives : ' + str(TN))
    print('False Positives: ' + str(FP))
    print('False Negatives: ' + str(FN))


    Accuracy = (TP+TN) / (TP+FP+FN+TN)
    Precision = TP / (TP+FP) if (TP+FP) > 0 else 0
    Recall = TP / (TP+FN) if (TP+FN) > 0 else 0
    F1_Score = 2 * (Recall * Precision) / (Recall + Precision) if (Recall + Precision) > 0 else 0

    print('Accuracy : ' + str(Accuracy))
    print('Precision : ' + str(Precision))
    print('Recall: ' + str(Recall))
    print('F1 Score: ' + str(F1_Score))

if __name__ == "__main__":
    main()
