#include "funcs.h"
#include <iostream>

using namespace std;

int main() {
  const int initialArr1[10] = {44, 20, 32, 11, 22, 32, 46, 13, 9, 10};
  const int initialArr2[7] = {23, 32, 14, 41, 53, 35, 21};

  int arr1[10];
  int arr2[7];

  // Testes para a função insertionSort (Exercicio 3)
  cout << "Testes para insertionSort -------------------------------------------------------" << endl;

  resetArray(arr1, initialArr1, 10);
  resetArray(arr2, initialArr2, 7);
  
  cout << "Vetor original (1): ";
  printArray(arr1, 10);
  cout << "Vetor ordenado (1): ";
  insertionSort(arr1, 10);
  printArray(arr1, 10);
  cout << "Passou no teste?(1) = " << (isSorted(arr1, 10) ? "Sim" : "Não") << endl;

  cout << "Vetor original (2): ";
  printArray(arr2, 7);
  cout << "Vetor ordenado (2): ";
  insertionSort(arr2, 7);
  printArray(arr2, 7);
  cout << "Passou no teste?(2) = " << (isSorted(arr2, 7) ? "Sim" : "Não") << endl;

  cout << "Fim dos testes para insertionSort -----------------------------------------------" << endl;

  // Testes para a função mergeSort (Exercicio 4)
  cout << "Testes para mergeSort ----------------------------------------------------------" << endl;

  resetArray(arr1, initialArr1, 10);
  resetArray(arr2, initialArr2, 7);
  
  cout << "Vetor original (1): ";
  printArray(arr1, 10);
  cout << "Vetor ordenado (1): ";
  mergeSort(arr1, 0, 9);
  printArray(arr1, 10);
  cout << "Passou no teste?(1) = " << (isSorted(arr1, 10) ? "Sim" : "Não") << endl;

  cout << "Vetor original (2): ";
  printArray(arr2, 7);
  cout << "Vetor ordenado (2): ";
  mergeSort(arr2, 0, 6);
  printArray(arr2, 7);
  cout << "Passou no teste?(2) = " << (isSorted(arr2, 7) ? "Sim" : "Não") << endl;

  cout << "Fim dos testes para mergeSort --------------------------------------------------" << endl;

  // Testes para a função countingSort (Exercicio 5)
  cout << "Testes para countingSort -------------------------------------------------------" << endl;

  resetArray(arr1, initialArr1, 10);
  resetArray(arr2, initialArr2, 7);

  cout << "Vetor original (1): ";
  printArray(arr1, 10);
  cout << "Vetor ordenado (1): ";
  countingSort(arr1, 10);
  printArray(arr1, 10);
  cout << "Passou no teste?(1) = " << (isSorted(arr1, 10) ? "Sim" : "Não") << endl;

  cout << "Vetor original (2): ";
  printArray(arr2, 7);
  cout << "Vetor ordenado (2): ";
  countingSort(arr2, 7);
  printArray(arr2, 7);
  cout << "Passou no teste?(2) = " << (isSorted(arr2, 7) ? "Sim" : "Não") << endl;

  cout << "Fim dos testes para countingSort ------------------------------------------------" << endl;

  return 0;
}
