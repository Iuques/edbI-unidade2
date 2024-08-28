#include "funcs.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

// Copia um array para outro
void resetArray(int *dest, const int *src, int n) {
  for (int i = 0; i < n; ++i) {
    dest[i] = src[i];
  }
}

// Imprime os elementos de um array
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
/*
  Gera um array de tamanho n, com inteiros aleatórios de 0 a n.
 */
int *generateArray(int n) {
  // Seed para 'rand' gerar um inteiro através do tempo atual do sistema
  srand(static_cast<unsigned>(time(0)));

  int *array = new int[n];
  for (int i = 0; i < n; i++) {
    // Pega o inteiro aletório gerado e pega o resto da divisão por n + 1, obtendo assim, um inteiro de 0 a n
    array[i] = rand() % (n + 1);
  }

  return array;
}

// Exercicio 2
/*
  Checa se um array de inteiros está ordenado de forma crescente.
*/
bool isSorted(int *a, int n) {
  for (int i = 0; i < n - 1; i++) {
    // Checa para cada elemento do array se o valor anterior é maior que o posterior
    if (a[i] > a[i + 1]) {
      // Retorna falso se o valor anterior for maior que o posterior
      return false;
    }
  }
  // Só conseguirá retornar verdadeiro caso passe no teste para todos os elementos
  return true;
}

// Exercicio 3
/*
  Implementação base do algorítmo de ordenação 'InsertionSort'
*/
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
/*
  Implementação do algorítmo 'merge', que junta os elementos de forma ordenada
*/
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

/*
  Implementação base do algorítmo de ordenação 'MergeSort'
*/
void mergeSort(int *a, int inic, int fim) {
  if (inic < fim) {
    int meio = (inic + fim) / 2;
    mergeSort(a, inic, meio);
    mergeSort(a, meio + 1, fim);
    merge(a, inic, meio, fim);
  }
}

// Exercicio 5
// Retorna o maior valor de um array de inteiros
int getMaxVal(int *a, int n) {
  // Começa atribuindo o primeiro elemento do array a variável maxVal
  int maxVal = a[0];
  for (int i = 1; i < n; i++) {
    // Sempre que um valor for maior que maxVal, atribui esse valor a maxVal
    if (a[i] > maxVal) {
      maxVal = a[i];
    }
  }

  return maxVal;
}

// Retorna um array cópia de um array passado como parâmetro
int *copyArray(int *a, int n) {
  int *copy = new int[n];
  for (int i = 0; i < n; i++) {
    copy[i] = a[i];
  }

  return copy;
}

/*
  Implementação base do algorítmo de ordenação 'CountingSort'
*/
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