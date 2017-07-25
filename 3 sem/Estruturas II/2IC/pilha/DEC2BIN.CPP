/*---------------------------------------------------------------------
  Programa: pilha_dec_bin.cpp
  Descricao: Implementacao do codigo para converter numero decimal
             para binario.
  Objetivo: Fornecer um numero decimal e obter como resultado o numero
            inserido em binario.
---------------------------------------------------------------------*/

#include <iostream.h>
#include "pilha.h"

//using namespace std;


/**
 * Inicio da funcao principal "main ()"
 */
int main(int argc, char* argv) {

  int n, x, y;
  pilha p;
  char resp;
  
  inicializa(p);

  do {
    cout << "-> Digite um numero decimal: ";
    cin >> n;
    y = n;
    
    do {
      x = n%2;  // x eh o resto de n dividido por 2
      empilha(p, x);
      n = n/2;
    } while (n != 0);
    
    cout << "-> Numero binario de " << y << " = ";
    while (pilha_vazia(p) == false) {
      x = topo(p);
      cout << x;
      desempilha(p);
    }
    
    cout << "\n=== Deseja continuar o programa? (S ou N) ";
    cin >> resp;
    cout << endl;
  } while ((resp == 's') || (resp == 'S'));


  return 0;
}


