#include <iostream.h>
#include "filacirc.h"
#include "llccc.h"

void inicializa(fila_circular &f) {
  cria_lista(f.L);
  f.inicio = f.L->inicio->prox;
  f.fim = f.L->inicio->prox;
}

bool fila_vazia(fila_circular &f) {
  if (total(f.L) == 0) {
    return true;
  } else {
    return false;
  }
}

void insere(fila_circular &f, int x) {
     insere_inicio(f.L,x);
     f.inicio=ultimo_elemento(f.L);
     f.fim=primeiro_elemento(f.L);
}

int remove(fila_circular &f) {
  if (fila_vazia(f) == false) {
    int x = f.inicio->info;
    remove_fim(f.L);
    f.inicio=ultimo_elemento(f.L);
    return x;
  } else {
    cerr << "ERRO!! FILA VAZIA!" << endl;
    return -1; // -1 indica erro
  }
}