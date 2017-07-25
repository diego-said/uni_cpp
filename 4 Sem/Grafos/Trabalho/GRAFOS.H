#ifndef _GRAFOS_H
#define _GRAFOS_H

#include "llccc.h"
#include "abb.h"

struct vertice {
	int valor, visitado;
	LLCCC listadj;
};

void busca_profundidade(arvore *t,int v1,int v2);
void busca_largura(arvore *t,int v1,int v2);
void inicializa(vertice *v,int n);
void imprime(vertice *v);
void limpa_vertice(vertice *v);
void preenche_arvore(arvore *t);

#endif