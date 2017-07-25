#ifndef _FILA_SEQUENCIAL_H
#define _FILA_SEQUENCIAL_H

#include "util.h"
#include "llccc.h"

typedef struct {
  celula *inicio;
  celula *fim;
  LLCCC *L;
} fila_sequencial;

bool fila_vazia(fila_sequencial &f);
void inicializa(fila_sequencial &f);
void insere(fila_sequencial &f, int x);
int remove(fila_sequencial &f);

#endif

