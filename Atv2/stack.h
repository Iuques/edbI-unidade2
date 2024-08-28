#ifndef STACK_H
#define STACK_H
#define SIZE 100

#include <iostream>

using namespace std;

/*
  Definição de uma classe 'Stack', que implementa a estrutura de dados Stack para characteres
*/

class Stack{
  private:
    // Índice do topo do stack
    char topIndex;
    // Array que armazena os valores do stack
    char stck[SIZE];

  public:
    // Construtor padrão
    Stack();
    // Método 'push', para adicionar um valor no topo do stack
    void push(char c);
    // Método 'top', retorna o valor no topo do stack
    char top();
    // Método 'pop', remove o valor do topo do stack
    void pop();
    // Método 'empty', retorna true caso o stack esteja vazio
    bool empty();
};

#endif