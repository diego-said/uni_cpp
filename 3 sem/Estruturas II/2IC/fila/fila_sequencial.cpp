/***
 * Implementacao de Fila Sequencial (com Vetores). 
 */

#include <iostream.h>
#include "filaseq.h"

//using namespace std;


bool fila_cheia(fila_sequencial &f) {
  if (f.fim == MAX_FILA_SEQUENCIAL-1) {
    return true;
  } else {
    return false;
  }
}

bool fila_vazia(fila_sequencial &f) {
  if (f.inicio == f.fim) {
    return true;
  } else {
    return false;
  }
}

void inicializa(fila_sequencial &f) {
  f.inicio = 0;
  f.fim = 0;
}

void insere(fila_sequencial &f, int x) {
  if (fila_cheia(f) == false) {
    f.v[f.fim] = x;
    f.fim = f.fim + 1;
  } else {
    cerr << "ERRO!! FILA CHEIA!" << endl;
  }
}

int remove(fila_sequencial &f) {
  if (fila_vazia(f) == false) {
    int x = f.v[f.inicio];
    f.inicio = f.inicio + 1;
    return x;
  } else {
    cerr << "ERRO!! FILA VAZIA!" << endl;
    return -1; // -1 indica erro
  }
}



