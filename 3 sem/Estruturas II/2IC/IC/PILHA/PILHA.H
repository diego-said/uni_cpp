#ifndef _PILHA_H
#define _PILHA_H

#include "util.h"
#include "llccc.h"

typedef struct {
  LLCCC *L;
  celula *topo;
} pilha;

void inicializa(pilha &p);
void empilha(pilha &p, int x);
void desempilha(pilha &p);
int topo(pilha &p);
bool pilha_cheia(pilha &p);
bool pilha_vazia(pilha &p);


#endif
