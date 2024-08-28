#include <iostream>

using namespace std;

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

  insertionSort(array, size);

  cout << "Vetor ordenado: ";
  for (int i = 0; i < size; i++) {
    cout << "[" << array[i] << "] ";
  }
  cout << endl;

  delete[] array;
  return 0;
}