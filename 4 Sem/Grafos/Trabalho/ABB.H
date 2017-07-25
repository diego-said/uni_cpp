#ifndef _ABB_H
#define _ABB_H

struct celula {
  int valor;
  celula *esq, *dir, *pai;
};

struct arvore {
  celula *raiz, *livre;
};

void libera_celula (arvore *t, celula *p);
void inicializa_arvore (arvore *t);
void insere (arvore *t, int x);
void remove (arvore *t, celula *q);
void imprime (celula *r);
void imprime (celula *r, int i);
celula* minimo (celula *r);
celula* nova_celula (arvore *t);
celula* busca (arvore *t, int x);
int conta_nos (celula *r);
int soma_arvore (celula *r);
int arvore_eb (celula *r);
int arvore_bb (celula *r);
int total_nos (celula *r);
void inverte_arvore (celula *r);
celula* prox_celula (celula *r);

#endif
