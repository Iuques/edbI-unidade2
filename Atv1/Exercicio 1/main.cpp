#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int *generateArray(int n) {
  srand(static_cast<unsigned>(time(0)));

  int *array = new int[n];
  for (int i = 0; i < n; i++) {
    array[i] = rand() % (n + 1);
  }

  return array;
}

int main() {
  int n;

  cout << "Entre com o tamanho do vetor: ";
  cin >> n;

  int *array = generateArray(n);

  cout << "Vetor gerado: ";
  for (int i = 0; i < n - 1; i++) {
    cout << " [" << array[i] << "], ";
  }
  cout << " [" << array[n - 1] << "] ";

  delete[] array;
  return 0;
}