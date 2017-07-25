#include <iostream.h>
#include <stdlib.h>
#include "llccc.h"

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
        L->inicio->prox = nova;
        L->inicio->info++;
}

void insere_fim (LLCCC *L, elemento x)
{
        celula *nova, *p;
        nova = nova_celula(L);
        nova->info = x;
        p = L->inicio;
        while(p->prox != L->inicio)
        {
                p = p->prox;
        }
        p->prox = nova;
        nova->prox = L->inicio;
        L->inicio->info++;
}

void remove_inicio (LLCCC *L)
{
        celula *aux;
        aux = L->inicio->prox;
        if (aux == L->inicio)
        {
                cerr << "Erro: underflow!" << endl;
                exit(0);
        }
        L->inicio->prox = aux->prox;
        libera_celula(L, aux);
        L->inicio->info=L->inicio->info-1;
}

void remove_fim (LLCCC *L)
{
        celula *aux, *p;
        p = L->inicio;
        while (p->prox != L->inicio)
        {
                p = p->prox;
        }
        p->prox = L->inicio->prox;
        aux = L->inicio;
        L->inicio = p;
        libera_celula(L, aux);
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