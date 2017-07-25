#ifndef _LLCCC_H
#define _LLCCC_H

typedef int elemento;

struct celula {
  elemento info;
  celula *prox;
  celula *ant;
};

struct LLCCC {
  celula *inicio, *livre;
};

celula* nova_celula (LLCCC *L);
void cria_lista (LLCCC *L);
void libera_celula (LLCCC *L, celula *p);
void finaliza (LLCCC *L);
void insere_inicio (LLCCC *L, int x);
void insere_fim (LLCCC *L, int x);
void remove_inicio (LLCCC *L);
void remove_fim (LLCCC *L);
void imprime (LLCCC *L);
int total(LLCCC *L);
celula* ultimo_elemento(LLCCC *L);
celula* primeiro_elemento(LLCCC *L);

#endif
