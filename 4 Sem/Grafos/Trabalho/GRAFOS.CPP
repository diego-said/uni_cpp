#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include "llccc.h"
#include "abb.h"

void incializa(vertice *v,int n);
{
	int i,m;
	m=n+1;
	v->valor=m;
	v->visitado=0;
	cria_lista(v);
	for(i=0;i<10;i++)
	{
		if(i!=n)
		{		
			insere_inicio(v->listadj,m);
		}
	}
}

void limpa_vertice(vertice *v)
{
	v->valor=0;
	v->visitado=0;
}

void imprime(vertice *v)
{
	cout<<"Vértice: "<<v->valor;
	imprime(v);	
}

void preenche_arvore(arvore *t)
{
	insere(t,5);
	insere(t,3);
	insere(t,4);
	insere(t,2);
	insere(t,1);
	insere(t,8);
	insere(t,7);
	insere(t,6);
	insere(t,9);
	insere(t,10);
}