#include "funcs.h"
#include <iostream>

using namespace std;

int main() {
  int sizes[5] = {100, 1000, 10000, 100000, 500000};

  for (int i = 0; i < 5; i++) {
    int *initialArray = new int[sizes[i]];
    int *copy = copyArray(initialArray, sizes[i]);

    // Testes para a função insertionSort (Exercicio 3)
    cout << "Teste insertionSort para " << sizes[i] << " elementos, ";
    insertionSort(copy, sizes[i]);
    cout << "passou? = " << (isSorted(copy, sizes[i]) ? "Sim" : "Não") << endl;
  }
}