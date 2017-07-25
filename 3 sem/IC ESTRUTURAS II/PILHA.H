#ifndef _PILHA_H
#define _PILHA_H

#include "util.h"
#define MAX_PILHA 100

/**
 * Declaracao dos tipos de estruturas e funcoes utilizadas no programa.
 */
typedef struct {
  int v[MAX_PILHA];
  int topo;
} pilha;

void inicializa(pilha &p);
void empilha(pilha &p, int x);
void desempilha(pilha &p);
int topo(pilha &p);
bool pilha_cheia(pilha &p);
bool pilha_vazia(pilha &p);


#endif
