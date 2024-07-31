#include <iostream>

using namespace std;

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

int main() {
  int size;
  cout << "Entre com o tamanho do vetor: ";
  cin >> size;

  int *array = new int[size];

  cout << "Entre com os valores do vetor: " << endl;
  for (int i = 0; i < size; i++) {
    cout << "index " << i << ": ";
    cin >> array[i];
  }

  mergeSort(array, 0, size - 1);

  cout << "Vetor ordenado: ";
  for (int i = 0; i < size; i++) {
    cout << "[" << array[i] << "] ";
  }
  cout << endl;

  delete[] array;
  return 0;
}