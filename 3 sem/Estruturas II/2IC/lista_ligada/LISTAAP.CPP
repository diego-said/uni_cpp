/**
 * Implementação de lista ligada usando apontadores
 * e das funções básica de manipulação de fila.     
 */

#include <iostream.h>
#include <stdlib.h>

#include "listaap.h"


/* Inicializa as duas listas como vazias */
void cria_lista (lista *L) {
  L->inicio = L->livre = NULL;
}

/* Pega uma célula da lista livre ou, se esta 
   estiver vazia, aloca mais uma célula */
celula* nova_celula (lista *L) {
  celula *aux;

  if (L->livre == NULL) {
    if ((aux = new celula) == NULL) {
      cerr << "Erro: memoria insuficiente!" << endl;
      exit(0);
    }
    return(aux);
  }
  else {
    aux = L->livre;
    L->livre = L->livre->prox;
    return(aux);
  }
}

/* Insere p na lista livre */
void libera_celula (lista *L, celula *p) {
  p->prox = L->livre;
  L->livre = p;
}

/* Desaloca toda a memória das duas listas */
void finaliza (lista *L) {
  celula *atual, *prox;
  
  atual = L->livre;
  while (atual != NULL) {
    prox = atual->prox;
    delete(atual);
    atual = prox;
  }
  L->livre = NULL;
  atual = L->inicio;
  while (atual != NULL) {
    prox = atual->prox;
    delete(atual);
    atual = prox;
  }
  L->inicio = NULL;
}

/* Funções de manipulação de fila */
void insere (lista *L, int x) {
  celula *nova, *p;

  nova = nova_celula(L);
  nova->info = x;
  nova->prox = NULL;
  if (L->inicio == NULL)
    L->inicio = nova;
  else {
    p = L->inicio;
    while (p->prox != NULL)
      p = p->prox;
    p->prox = nova;
  }
}

void remove (lista *L) {
  celula *aux;

  if (L->inicio == NULL) {
	cerr << "Erro: underflow!" << endl;
    exit(0);
  }
  aux = L->inicio;
  L->inicio = L->inicio->prox;  
  libera_celula(L, aux);
}

int primeiro (lista *L) {
  if (L->inicio == NULL) {
    cerr << "Erro: underflow!" << endl;
    exit(0);
  }
  return(L->inicio->info);
}

bool vazia (lista *L) {
  return(L->inicio == NULL);
}

/* Imprime o conteúdo da lista L */
void imprime (lista *L) {
  celula *p;

  cout << "Lista: ";
  p = L->inicio;
  while (p != NULL) {
    cout << p->info << " ";
    p = p->prox;
  }
  cout << endl;
}


