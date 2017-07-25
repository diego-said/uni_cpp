#include <iostream.h>
#include "filaseq.h"

bool fila_vazia(fila_sequencial &f) {
  if (total(f.L)==0) {
    return true;
  } else {
    return false;
  }
}

void inicializa(fila_sequencial &f) {
  cria_lista(f.L);
  f.inicio = f.L->inicio->prox;
  f.fim = f.L->inicio->prox;
}

void insere(fila_sequencial &f, int x) {
    insere_inicio(f.L,x);
    f.fim=primeiro_elemento(f.L);
    f.inicio=ultimo_elemento(f.L);
}

int remove(fila_sequencial &f) {
  if (fila_vazia(f) == false) {
    int x = f.inicio->info;
    remove_fim(f.L);
    f.inicio=ultimo_elemento(f.L);
    return x;
  } else {
    cerr << "ERRO!! FILA VAZIA!" << endl;
    return -1;
  }
}



