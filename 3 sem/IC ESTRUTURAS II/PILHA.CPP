/***
 * Implementação de Pilha com Vetores.
 */

#include <iostream.h>
#include "pilha.h"


/**
 * Diz se a pilha esta cheia ou nao.
 */
bool pilha_cheia(pilha &p) {
  if (p.topo == MAX_PILHA-1)
    return true;
  else
    return false;
}

/**
 * Diz se a pilha esta vazia ou nao.
 */
bool pilha_vazia(pilha &p) {
  if (p.topo == -1)
    return true;
  else
    return false;
}

/**
 * Declarações das funções inicializa, empilha, desempilha e topo.
 */
void inicializa(pilha &p) {
  p.topo = -1;
}

void empilha(pilha &p, int x) {
  if (pilha_cheia(p) == false) {
    p.topo++;
    p.v[p.topo]=x;
  }
  else {
    cerr << "ERRO!! PILHA CHEIA!" << endl;
  }
}

void desempilha(pilha &p) {
  if (pilha_vazia(p) == false)
    p.topo--;
  else
    cerr << "ERRO!! PILHA VAZIA!" << endl;
}

int topo(pilha &p) {
  if (pilha_vazia(p) == false) {
    return p.v[p.topo];
  }
  else {
    cerr << "ERRO!! PILHA VAZIA!" << endl;
    return -1; //-1 indica erro.
  }
}

