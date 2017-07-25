#ifndef _FILA_CIRCULAR_H
#define _FILA_CIRCULAR_H

#include "util.h"

#define MAX_FILA_CIRCULAR 100

typedef struct {
  int total;
  int inicio;
  int fim;
  int v[MAX_FILA_CIRCULAR];
} fila_circular;

void inicializa(fila_circular &f);
bool fila_vazia(fila_circular &f);
bool fila_cheia(fila_circular &f);
void insere(fila_circular &f, int x);
int remove(fila_circular &f);

#endif
