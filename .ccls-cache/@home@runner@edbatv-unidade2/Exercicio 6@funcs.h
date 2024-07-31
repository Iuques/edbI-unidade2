#ifndef FUNCS_H
#define FUNCS_H

void resetArray(int *dest, const int *src, int n);
void printArray(int *a, int n);
int *generateArray(int n);
bool isSorted(int *a, int n);
void insertionSort(int *a, int n);
void merge(int *a, int start, int mid, int end);
void mergeSort(int *a, int start, int end);
int getMaxVal(int *a, int n);
int *copyArray(int *a, int n);
void countingSort(int *a, int n);

#endif
