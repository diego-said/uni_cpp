#ifndef _LISTAAP_H
#define _LISTAAP_H

#include "util.h"

struct celula {
  int info;
  celula *prox;
};

struct lista {
  celula *inicio, *livre;
};


void cria_lista (lista *L);
celula* nova_celula (lista *L);
void libera_celula (lista *L, celula *p);
void finaliza (lista *L);
void insere (lista *L, int x);
int primeiro (lista *L);
bool vazia (lista *L);
void imprime (lista *L);
void remove (lista *L);


#endif
