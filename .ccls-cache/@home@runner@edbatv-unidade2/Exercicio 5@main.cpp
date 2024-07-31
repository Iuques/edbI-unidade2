#include <iostream>

using namespace std;

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

  countingSort(array, size);

  cout << "Vetor ordenado: ";
  for (int i = 0; i < size; i++) {
    cout << "[" << array[i] << "] ";
  }
  cout << endl;

  delete[] array;
  return 0;
}