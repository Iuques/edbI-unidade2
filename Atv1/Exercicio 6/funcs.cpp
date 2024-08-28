#include "funcs.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void resetArray(int *dest, const int *src, int n) {
  for (int i = 0; i < n; ++i) {
    dest[i] = src[i];
  }
}

void printArray(int *a, int n) {
  for (int i = 0; i < n; i++) {
    cout << "[" << a[i] << "]";
    if (i < n - 1) {
      cout << ", ";
    }
  }
  cout << endl;
}

/** Funções dos exercícios anteriores **/

// Exercicio 1
int *generateArray(int n) {
  srand(static_cast<unsigned>(time(0)));

  int *array = new int[n];
  for (int i = 0; i < n; i++) {
    array[i] = rand() % (n + 1);
  }

  return array;
}

// Exercicio 2
bool isSorted(int *a, int n) {
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      return false;
    }
  }
  return true;
}

// Exercicio 3
void insertionSort(int *a, int n) {
  int i, j, key;
  for (j = 1; j < n; j++) {
    key = a[j];
    i = j - 1;
    while (i >= 0 && a[i] > key) {
      a[i + 1] = a[i];
      i = i - 1;
    }
    a[i + 1] = key;
  }
}

// Exercicio 4
void merge(int *a, int inic, int meio, int fim) {
  int n1 = meio - inic + 1;
  int n2 = fim - meio;
  int *L = new int[n1];
  int *R = new int[n2];

  for (int i = 0; i < n1; i++) {
    L[i] = a[inic + i];
  }
  for (int j = 0; j < n2; j++) {
    R[j] = a[meio + 1 + j];
  }

  int i = 0, j = 0, k = inic;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      a[k] = L[i];
      i = i + 1;
    } else {
      a[k] = R[j];
      j = j + 1;
    }
    k = k + 1;
  }
  while (i < n1) {
    a[k] = L[i];
    i = i + 1;
    k = k + 1;
  }
  while (j < n2) {
    a[k] = R[j];
    j = j + 1;
    k = k + 1;
  }

  delete[] L;
  delete[] R;
}

void mergeSort(int *a, int inic, int fim) {
  if (inic < fim) {
    int meio = (inic + fim) / 2;
    mergeSort(a, inic, meio);
    mergeSort(a, meio + 1, fim);
    merge(a, inic, meio, fim);
  }
}

// Exercicio 5
int getMaxVal(int *a, int n) {
  int maxVal = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > maxVal) {
      maxVal = a[i];
    }
  }

  return maxVal;
}

int *copyArray(int *a, int n) {
  int *copy = new int[n];
  for (int i = 0; i < n; i++) {
    copy[i] = a[i];
  }

  return copy;
}

void countingSort(int *a, int n) {
  int maxVal = getMaxVal(a, n);
  int *B = copyArray(a, n);

  int *C = new int[maxVal+1];
  for (int i = 0; i <= maxVal; i++) {
    C[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    C[B[i]] = C[B[i]] + 1;
  }

  for (int i = 1; i <= maxVal; i++) {
    C[i] = C[i] + C[i - 1];
  }

  for (int i = n - 1; i >= 0; i--) {
    a[C[B[i]] - 1] = B[i];
    C[B[i]] = C[B[i]] - 1;
  }

  delete[] C;
  delete[] B;
}