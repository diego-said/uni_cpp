#include <iostream.h>
#include <stdlib.h>
#include "abb.h"

celula* nova_celula(arvore *t)
{
        celula* aux;

        if (t->livre == NULL)
        {
                if ((aux = new celula) == NULL)
                {
                        cerr << "Erro: memoria insuficiente!" << endl;
                        exit(0);
                }
                return(aux);
        }
        else
        {
                aux = t->livre;
                t->livre = t->livre->esq;
                return(aux);
        }
}

void libera_celula(arvore *t, celula* p)
{
        p->esq = t->livre;
        t->livre = p;
}

void inicializa_arvore(arvore *t)
{
        t->raiz = t->livre = NULL;
}

celula* busca(arvore *t, int x)
{
        celula* p;

        p = t->raiz;
        while (p != NULL && p->valor != x)
        {
                if (x<p->valor)
                {
                        p = p->esq;
                }
                else
                {
                        p = p->dir;
                }
        }
        return p;
}

void insere(arvore *t, int x)
{
        celula *p, *ant, *q;

        q = nova_celula(t);
        q->valor = x;
        q->esq = q->dir = NULL;

        ant = NULL;
        p = t->raiz;
        while (p != NULL && p->valor != x)
        {
                ant = p;
                if (x < p->valor)
                {
                        p = p->esq;
                }
                else
                {
                        p = p->dir;
                }

        }

        if (ant == NULL)
        {
                t->raiz = q;
        } 
        else
        {
                if (x < ant->valor)
                {
                        ant->esq = q;
                }
                else
                {
                        ant->dir = q;
                }
                q->pai = ant;        
        }
}

celula* minimo (celula* r)
{
        celula *p, *ant;

        p = r;
        ant = NULL;
        while (p != NULL)
        {
                ant = p;
                p = p->esq;
        }
        return ant;
}

void remove (arvore *t, celula* q)
{
        celula *p, *f;

  /* Determina a célula que será efetivamente deletada da árvore */
        if (q->esq == NULL || q->dir == NULL)
        {
                p = q;
        }
        else
        {
                p = minimo(q->dir);
                q->valor = p->valor;
        }

  /* p tem no máximo um filho */ 
        if (p->esq != NULL)
        {
                f = p->esq;
        }
        else
        {
                f = p->dir;
        }
  /* f é NULL se p não tem filhos, ou o seu único filho */

  /* Remove p da árvore */
        if (f != NULL)
        {
                f->pai = p->pai;
        }
        if (p->pai == NULL)
        {
                t->raiz = f;
        }
        else
        {
                if (p->pai->esq == p)
                {
                        p->pai->esq = f;
                }
                else
                {
                        p->pai->dir = f;
                }
        }
        libera_celula(t, p);
}

void imprime (celula* r)
{
        if (r != NULL)
        {
	        imprime(r->esq);
	        cout<<r->valor<<" ";
	        imprime(r->dir);
        }
}

void imprime (celula* r, int i)
{
        int j;

        if (r != NULL)
        {
	        imprime(r->dir, i+1);
	        for (j=0;j<i; j++)
                {
	                cout<<"   ";
                }
	        cout<<r->valor<<endl;
	        imprime(r->esq, i+1);
        }
}

int conta_nos(celula *r)
{
        celula *p;
        p=r;
        if(p==NULL)
        {
                return 0;
        }
        else
        {
        if(p->esq==NULL && p->dir==NULL)
        {
                return 0;
        }
        else
        {
                if(p->esq!=NULL && p->dir!=NULL)
                {
                        return(1+conta_nos(p->esq)+conta_nos(p->dir));
                }
                else
                {
                        if(p->esq!=NULL)
                        {
                                return(1+conta_nos(p->esq));
                        }
                        else
                        {
                                return(1+conta_nos(p->dir));
                        }
                }
        }
        }
}

int soma_arvore(celula *r)
{
        celula *p;
        p=r;
        if(p==NULL)
        {
                return 0;
        }
        else
        {
                if(p->esq==NULL && p->dir==NULL)
                {
                        return p->valor;
                }
                else
                {
                        if(p->esq!=NULL && p->dir!=NULL)
                        {
                                return(p->valor+soma_arvore(p->esq)+soma_arvore(p->dir));
                        }
                        else
                        {
                                if(p->esq!=NULL)
                                {
                                        return(p->valor+soma_arvore(p->esq));
                                }
                                else
                                {
                                        return(p->valor+soma_arvore(p->dir));
                                }
                        }
                }
        }
}

int arvore_eb(celula *r)
{
        celula *p;
        p=r;
        if(p==NULL)
        {
                return 0;
        }
        else
        {
                if(p->esq==NULL && p->dir==NULL)
                {
                        return 0;
                }
                else
                {
                        if(p->esq!=NULL && p->dir!=NULL)
                        {
                                return(0+arvore_eb(p->esq)+arvore_eb(p->dir));
                        }
                        else
                        {
                                if(p->esq!=NULL)
                                {
                                        return(1+arvore_eb(p->esq));
                                }
                                else
                                {
                                        return(1+arvore_eb(p->dir));
                                }
                        }
                }
        }
}

int arvore_bb(celula *r)
{
        celula *p;
        p=r;
        if(p==NULL)
        {
                return 0;
        }
        else
        {
                if(p->esq==NULL && p->dir==NULL)
                {
                        return 0;
                }
                else
                {
                        if(p->esq!=NULL && p->dir!=NULL)
                        {
                                if(p->valor>p->esq->valor && p->valor<p->dir->valor)
                                {
                                        return(0+arvore_bb(p->esq)+arvore_bb(p->dir));
                                }
                                else
                                {
                                        return(1+arvore_bb(p->esq)+arvore_bb(p->dir));
                                }
                        }
                        else
                        {
                                if(p->esq!=NULL)
                                {
                                        if(p->valor>p->esq->valor)
                                        {
                                                return(0+arvore_bb(p->esq));
                                        }
                                        else
                                        {
                                                return(1+arvore_bb(p->esq));
                                        }
                                }
                                else
                                {
                                        if(p->valor<p->dir->valor)
                                        {
                                                return(0+arvore_bb(p->dir));
                                        }
                                        else
                                        {
                                                return(1+arvore_bb(p->dir));
                                        }
                                }
                        }
                }
        }
}

int total_nos (celula *r)
{
        celula *p;
        p=r;
        if(p==NULL)
             return 0;
        if(p->esq==NULL && p->dir==NULL)
             return 1;
        else
             return(1+total_nos(p->esq)+total_nos(p->dir));
}

void inverte_arvore (celula *r)
{
        celula *p,*aux;
        p=r;
        if(p!=NULL)
        {
                aux=p->esq;
                p->esq=p->dir;
                p->dir=aux;
                inverte_arvore(p->esq);
                inverte_arvore(p->dir);
        }
}

celula* prox_celula (celula *r)
{
        celula *p,*pai;
        pai=r->pai;
        p=r;
        if(p==NULL)
              return NULL;
        if(p->dir!=NULL)
              return(minimo(p->dir));
        else
              if(pai==NULL)
                   return NULL;
              else
              {
                   if(pai->dir!=p)
                        return(p->pai);
                   else
                        return NULL;
              }
}
