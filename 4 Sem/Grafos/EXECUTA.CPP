#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include "llccc.h"
#include "abb.h"
#include "grafos.h"

void main()
{
	clrscr();
	vertice v[10];
	arvore grafo;
	int i,x,y;
	inicializa_arvore(&grafo);
	for(i=0;i<10;i++)
	{
		limpa_vertice(&v[i]);
		inicializa(&v[i],i);
	}
	preenche_arvore(&grafo);
	cout<<"Digite dois vértices(1 a 10): ";
	cin>>x>>y;
	cout<<"\n\nBusca em profundidade: ";
	busca_profundidade(&grafo,x,y);
	cout<<"\n\nBusca em largura: ";
	busca_largura(&grafo,x,y);
}