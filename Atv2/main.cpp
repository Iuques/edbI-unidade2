#include <iostream>
#include <string>
#include "stack.h"

using namespace std;

// Retorna true se a expressão etiver balanceada
bool isBalanced(string str){
  // Inicia um novo Stack 
  Stack stck;
  
  for(int i = 0; i < str.length(); i++){
    
    // Se encontra uma "abertura", adiciona o charactere correspondente ao stack
    if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
      stck.push(str[i]);
    }

    // Checa se existe uma "fechadura".
    // Se encontrar e o charactere de fechadura corresponder com a abertura no topo do stack, então remove o charactere do topo do stack
    // Caso encontre o charactere de fechadura, porém não corresponda com o de abertura no topo do stack, então a expressão não está balanceada e retorna 'false'
    switch(str[i]) {
      case (')'):
        if(stck.empty() || stck.top() != '('){
          return false;
        }
        stck.pop();
        break;
      case (']'):
        if(stck.empty() || stck.top() != '['){
          return false;
        }
        stck.pop();
        break;
      case ('}'):
        if(stck.empty() || stck.top() != '{'){
          return false;
        }
        stck.pop();
        break;
    }
    
  }

  // Após percorrer toda a string de entrada, se o stack estiver vazio então todas as expressões foram fechadas, e a expressão principal está balanceada.
  if(stck.empty()){
    return true;
  }
  // Caso não esteja vazio, alguma "abertura" ficou sem fechamento, retorna falso.
  return false;
}

int main(){
  string test;

  while (test != "1"){
    cout << "Informe a expressão [1 para sair]: ";
    cin >> test;

    if(test == "1"){
      break;
    }
  
    if(isBalanced(test)){
      cout << "Expressão balanceada." << endl;
    } else {
      cout << "Expressão não balanceada." << endl;
    }
  }

  cout << "Fim da execução." << endl;
  
  return 0;
}