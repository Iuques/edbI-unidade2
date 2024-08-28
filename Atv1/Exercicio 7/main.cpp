#include "funcs.h"
#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono;

void printDuration(const string &label,
                   const high_resolution_clock::time_point &start,
                   const high_resolution_clock::time_point &end) {
  auto duration = duration_cast<nanoseconds>(end - start).count();
  cout << ", tempo de execução: " << duration << " ns";
}

int main() {
  int sizes[5] = {100, 1000, 10000, 100000, 500000};

  for (int i = 0; i < 5; i++) {
    int *initialArray = generateArray(sizes[i]);

    int *copy1 = copyArray(initialArray, sizes[i]);
    // Teste para a função insertionSort
    auto start = high_resolution_clock::now();
    insertionSort(copy1, sizes[i]);
    auto end = high_resolution_clock::now();
    cout << "insertionSort para " << sizes[i] << " elementos";
    printDuration("", start, end);
    cout << ", passou? = " << (isSorted(copy1, sizes[i]) ? "Sim" : "Não")
         << endl;
    delete[] copy1;

    int *copy2 = copyArray(initialArray, sizes[i]);
    // Teste para a função mergeSort
    start = high_resolution_clock::now();
    mergeSort(copy2, 0, sizes[i] - 1);
    end = high_resolution_clock::now();
    cout << "mergeSort para " << sizes[i] << " elementos";
    printDuration("", start, end);
    cout << ", passou? = " << (isSorted(copy2, sizes[i]) ? "Sim" : "Não")
         << endl;
    delete[] copy2;

    int *copy3 = copyArray(initialArray, sizes[i]);
    // Teste para a função countingSort
    start = high_resolution_clock::now();
    countingSort(copy3, sizes[i]);
    end = high_resolution_clock::now();
    cout << "countingSort para " << sizes[i] << " elementos";
    printDuration("", start, end);
    cout << ", passou? = " << (isSorted(copy3, sizes[i]) ? "Sim" : "Não")
         << endl;
    delete[] copy3;

    delete[] initialArray;
  }

  return 0;
}
