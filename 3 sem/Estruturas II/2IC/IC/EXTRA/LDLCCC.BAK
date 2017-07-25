#include <iostream.h>
#include <stdlib.h>
#include "ldlccc.h"

celula* nova_celula (LLCCC *L)
{
        celula *aux;
        if (L->livre == NULL)
        {
	        if((aux = new celula) == NULL)
                {
                        cerr<<"Erro: memoria insuficiente!"<<endl;
	                exit(0);
	        }
	        return(aux);
        }
        else
        {
	        aux = L->livre;
	        L->livre = L->livre->prox;
	        return(aux);
        }
}

void cria_lista (LLCCC *L)
{
        L->livre = NULL;
        L->inicio = nova_celula(L);
        L->inicio->prox = L->inicio;
        L->inicio->ant = L->inicio;
        L->inicio->info=0;
}

void libera_celula (LLCCC *L, celula *p)
{
        p->prox = L->livre;
        L->livre = p;
}

void finaliza(LLCCC *L)
{
        celula *atual, *prox;

        atual = L->livre;
        while(atual != NULL)
        {
	        prox = atual->prox;
	        delete(atual);
	        atual = prox;
        }
        L->livre = NULL;

        atual = L->inicio->prox;
        while(atual != L->inicio)
        {
	        prox = atual->prox;
	        delete(atual);
	        atual = prox;
        }
        L->inicio->prox = L->inicio;
}

void insere_inicio (LLCCC *L, elemento x)
{
        celula *nova;
        nova = nova_celula(L);
        nova->info = x;
        nova->prox = L->inicio->prox;
        nova->ant = L->inicio->ant;
        L->inicio->ant=ultimo_elemento(L);
        L->inicio->prox = nova;
        L->inicio->info++;
}

void insere_fim (LLCCC *L, elemento x)
{
        celula *nova, *p;
        nova = nova_celula(L);
        nova->info = x;
        p=ultimo_elemento(L);
        p->prox=nova;
        nova->ant=p;
        nova->prox=L->inicio;
        L->inicio->info++;
}

void remove_inicio (LLCCC *L)
{
        celula *p,*aux;
        aux = L->inicio->prox;
        if (L->inicio->info==0)
        {
                cerr << "Erro: underflow!" << endl;
                exit(0);
        }
        p=aux->prox;
        L->inicio->prox = p;
        libera_celula(L, aux);
        p->ant=L->inicio;
	//L->inicio->info--;
	L->inicio->info=L->inicio->info-1;
}

void remove_fim (LLCCC *L)
{
	celula *aux, *p;
        aux=ultimo_elemento(L);
        p=aux->ant;
        libera_celula(L,aux);
        p->prox=primeiro_elemento(L);
        L->inicio->ant=ultimo_elemento(L);
	//L->inicio->info--;
	L->inicio->info=L->inicio->info-1;
}

void imprime(LLCCC *L)
{
	celula *p;
	cout<<"Lista: ";
	p=L->inicio->prox;
	while (p!=L->inicio)
	{
		cout<<p->info<<" ";
		p=p->prox;
	}
	cout<<endl;
}

int total(LLCCC *L)
{
	return L->inicio->info;
}

celula* ultimo_elemento(LLCCC *L)
{
	celula *p;
	p=L->inicio->prox;
	while(p->prox!=L->inicio){
	       p=p->prox;
	}
	return(p);
}

celula* primeiro_elemento(LLCCC *L)
{
	celula *p;
	p=L->inicio->prox;
	return p;
}