#include <iostream.h>
#include "pilha.h"

bool pilha_vazia(pilha &p) {
  if (p.L->inicio->prox==p.L->inicio)
    return true;
  else
    return false;
}

void inicializa(pilha &p) {
  cria_lista(p.L);
  p.topo=NULL;
}

void empilha(pilha &p, int x) {
  insere_fim(p.L,x);
  p.topo=ultimo_elemento(p.L);
}

void desempilha(pilha &p) {
  if (pilha_vazia(p) == false)
  {
    remove_fim(p.L);
    p.topo=ultimo_elemento(p.L);
  }
  else
    cerr << "ERRO!! PILHA VAZIA!" << endl;
}

int topo(pilha &p) {
  if (pilha_vazia(p) == false) {
    return p.topo->info;
  }
  else {
    cerr << "ERRO!! PILHA VAZIA!" << endl;
    return -1; //-1 indica erro.
  }
}

