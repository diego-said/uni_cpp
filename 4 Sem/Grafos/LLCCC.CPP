/**
 * Listas circularmente ligadas com cabeça de lista (LLCCCL),
 * implementada com apontadores.
 */

#include <iostream.h>
#include <stdlib.h>
#include "llccc.h"

/* Pega uma célula da lista livre ou, se esta
   estiver vazia, aloca mais uma célula */
celula* nova_celula (LLCCC *L) {
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

/* Inicializa as duas listas como vazias */
void cria_lista (LLCCC *L) {
  L->livre = NULL;
  L->inicio = nova_celula(L);
  L->inicio->prox = L->inicio;
}

/* Insere p na lista livre */
void libera_celula (LLCCC *L, celula *p) {
  p->prox = L->livre;
  L->livre = p;
}

/* Desaloca toda a memória das duas listas */
void finaliza (LLCCC *L) {
  celula *atual, *prox;

  atual = L->livre;
  while (atual != NULL) {
	prox = atual->prox;
	delete(atual);
	atual = prox;
  }
  L->livre = NULL;

  atual = L->inicio->prox;
  while (atual != L->inicio) {
	prox = atual->prox;
	delete(atual);
	atual = prox;
  }
  L->inicio->prox = L->inicio;
}

void insere_inicio (LLCCC *L, elemento x) {
  celula *nova;

  nova = nova_celula(L);
  nova->info = x;
  nova->prox = L->inicio->prox;
  L->inicio->prox = nova;
}

void insere_fim (LLCCC *L, elemento x) {
  celula *nova, *p;

  nova = nova_celula(L);
  nova->info = x;
  p = L->inicio;
  while (p->prox != L->inicio)
	p = p->prox;
  p->prox = nova;
  nova->prox = L->inicio;
}

void remove_inicio (LLCCC *L) {
  celula *aux;

  aux = L->inicio->prox;
  if (aux == L->inicio) {
	cerr << "Erro: underflow!" << endl;
	exit(0);
  }
  L->inicio->prox = aux->prox;
  libera_celula(L, aux);
}

void remove_fim (LLCCC *L) {
  celula *aux, *p;

  p = L->inicio;
  while (p->prox != L->inicio)
	p = p->prox;
  p->prox = L->inicio->prox;
  aux = L->inicio;
  L->inicio = p;
  libera_celula(L, aux);
}

/* Imprime o conteúdo da lista L */
void imprime (LLCCC *L) {
  celula *p;

  cout << "Lista: ";
  p = L->inicio->prox;
  while (p != L->inicio) {
	cout << p->info << " ";
	p = p->prox;
  }
  cout << endl;
}

