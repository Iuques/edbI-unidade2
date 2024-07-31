#include <iostream>

using namespace std;

bool isSorted(int *a, int n) {
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      return false;
    }
  }
  return true;
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


  if (isSorted(array, size)) {
    cout << "O vetor está ordenado" << endl;
  } else {
    cout << "O vetor não está ordenado" << endl;
  }

  delete[] array;
  return 0;
}