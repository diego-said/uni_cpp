#ifndef _FILA_SEQUENCIAL_H
#define _FILA_SEQUENCIAL_H

#include "util.h"

#define MAX_FILA_SEQUENCIAL 100

typedef struct {
  int inicio;
  int fim;
  int v[MAX_FILA_SEQUENCIAL];
} fila_sequencial;

bool fila_cheia(fila_sequencial &f);
bool fila_vazia(fila_sequencial &f);
void inicializa(fila_sequencial &f);
void insere(fila_sequencial &f, int x);
int remove(fila_sequencial &f);

#endif

