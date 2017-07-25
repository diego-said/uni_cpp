/****
 * Implementacao de Fila Circular (com Vetores).
 */

#include <iostream.h>
#include "filacirc.h"

void inicializa(fila_circular &f) {
  f.total = 0;
  f.inicio = 0;
  f.fim = 0;
}

bool fila_vazia(fila_circular &f) {
  if (f.total == 0) {
    return true;
  } else {
    return false;
  }
}

bool fila_cheia(fila_circular &f) {
  if (f.total == MAX_FILA_CIRCULAR) {
    return true;
  } else {
    return false;
  }
}

void insere(fila_circular &f, int x) {
  if (fila_cheia(f) == false) {
    f.v[f.fim] = x;
    f.fim = (f.fim + 1) % MAX_FILA_CIRCULAR;
    f.total++;
  } else {
    cerr << "ERRO!! FILA CHEIA!" << endl;
  }
}

int remove(fila_circular &f) {
  if (fila_vazia(f) == false) {
    int x = f.v[f.inicio];
    f.inicio = (f.inicio + 1) % MAX_FILA_CIRCULAR;
    f.total--;
    return x;
  } else {
    cerr << "ERRO!! FILA VAZIA!" << endl;
    return -1; // -1 indica erro
  }
}


