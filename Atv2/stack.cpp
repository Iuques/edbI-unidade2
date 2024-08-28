#include "stack.h"

// Construtor inicia o índice do topo como negativo (ou seja, vazio)
Stack::Stack(){
  topIndex = -1;
}

void Stack::push(char data){
  // Incrementa o índice do topo
  topIndex++;
  // Adiciona o valor no índice do topo
  stck[topIndex] = data;
}

char Stack::top(){
  // Retorna o elemento do array no índice do topo
  return stck[topIndex];
}

void Stack::pop(){
  // Diminui o índice do topo
  topIndex--;
}

bool Stack::empty(){
  // Checa se o índice do topo é menor que 0 (ou seja, se o stack está vazio)
  if(topIndex < 0){
    return true;
  }
  return false;
}