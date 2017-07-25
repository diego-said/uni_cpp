/***
 * Implementação de Pilha com Vetores.
 */

#include <iostream.h>
#include "pilha.h"

//using namespace std;

/**
 * Diz se a pilha está cheia ou não.
 */
bool pilha_cheia(pilha &p) {
  if (p.topo == MAX_PILHA-1)
    return true;
  else
    return false;
}

/**
 * Diz se a pilha está vazia ou não.
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
    int pos = p.topo + 1;
    p.v[pos] = x;
    p.topo = pos;
  }
  else {
    cerr << "ERRO!! PILHA CHEIA!" << endl;
  }
}

void desempilha(pilha &p) {
  if (pilha_vazia(p) == false)
    p.topo = p.topo-1;
  else
    cerr << "ERRO!! PILHA VAZIA!" << endl;
}

int topo(pilha &p) {
  if (pilha_vazia(p) == false) {
    int x = p.v[p.topo];
    return x;
  }
  else {
    cerr << "ERRO!! PILHA VAZIA!" << endl;
    return -1; //-1 indica erro.
  }
}

