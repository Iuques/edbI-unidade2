# Projetos da Unidade 2 - Estruturas de Dados Básicas I

## Descrição Geral

Este repositório contém os projetos desenvolvidos para a Unidade 2 da disciplina **Estruturas de Dados Básicas I (EDB)**. Os projetos abordam a implementação e análise de algoritmos de ordenação e a implementação da estrutura de dados Stack.

Os projetos estão organizados em dois diretórios principais: `Atv1` e `Atv2`.

## Atividade 1

A Atividade 1 consiste na implementação e análise de algoritmos de ordenação comuns. O objetivo principal é comparar a complexidade temporal dos algoritmos e observar seu desempenho com diferentes tamanhos de entrada.

### Descrição dos Exercícios

- **Exercício 1 e 2:** Implementam um gerador de arrays de inteiros e um algoritmo que verifica se um array está ordenado, respectivamente.
- **Exercício 3:** Implementa o algoritmo de ordenação Insertion Sort.
- **Exercício 4:** Implementa o algoritmo de ordenação Merge Sort.
- **Exercício 5:** Implementa o algoritmo de ordenação Counting Sort.
- **Exercício 6:** Testa os algoritmos de ordenação (Insertion Sort, Merge Sort e Counting Sort) nos mesmos dois arrays desordenados.
- **Exercício 7:** Gera arrays aleatórios com tamanhos variados (100, 1000, 10000 e 50000 elementos) e testa cada array com os três algoritmos de ordenação, verificando se o array foi ordenado e medindo o tempo de execução.

### Compilação dos Exercícios

Para compilar cada exercício da Atividade 1, use os seguintes comandos:

- **Exercício 1:** Compile `Atv1/Exercicio 1/main.cpp` com o comando:
```bash
g++ Atv1/Exercicio\ 1/main.cpp -o geraArray
```
- **Exercício 2:** Compile `Atv1/Exercicio 2/main.cpp` com o comando:
```bash
g++ Atv1/Exercicio\ 2/main.cpp -o checaOrdenado
```
- **Exercício 3:** Compile `Atv1/Exercicio 3/main.cpp` com o comando:
```bash
g++ Atv1/Exercicio\ 3/main.cpp -o insertionSort
```
- **Exercício 4:** Compile `Atv1/Exercicio 4/main.cpp` com o comando:
```bash
g++ Atv1/Exercicio\ 4/main.cpp -o mergeSort
```
- **Exercício 5:** Compile `Atv1/Exercicio 5/main.cpp` com o comando:
```bash
g++ Atv1/Exercicio\ 5/main.cpp -o countingSort
```
- **Exercício 6:** Compile `Atv1/Exercicio 6/main.cpp` e `Atv1/Exercicio 6/funcs.cpp` com o comando:
```bash
g++ Atv1/Exercicio\ 6/main.cpp Atv1/Exercicio\ 6/funcs.cpp -o testarOrdenacao
```
- **Exercício 7:** Compile `Atv1/Exercicio 7/main.cpp` e `Atv1/Exercicio 7/funcs.cpp` com o comando:
```bash
g++ Atv1/Exercicio\ 7/main.cpp Atv1/Exercicio\ 7/funcs.cpp -o testarPerformance
```

## Atividade 2

A Atividade 2 foca na implementação da estrutura de dados Stack utilizando caracteres. Esta atividade visa criar uma Stack com os métodos básicos e usá-la para validar expressões matemáticas balanceadas.

### Métodos

- **add:** Adiciona um elemento ao topo da pilha.
- **top:** Retorna o elemento no topo da pilha sem removê-lo.
- **pop:** Remove o elemento do topo da pilha.
- **empty:** Verifica se a pilha está vazia.

### Compilação da Atividade 2

Para compilar a Atividade 2, use o seguinte comando:

- Compile `Atv2/main.cpp` e `Atv2/stack.cpp` com o comando:
```bash
g++ Atv2/main.cpp Atv2/stack.cpp -o stackTest
```
