#include "inverte.h"

void inverte(char palavra[])
{
        int i;
        pilha p;
        inicializa(p);
        for(i=0;i<strlen(palavra);i++)
        {
                empilha(p,(int)palavra[i]);        
        }
        i=0;
        while(p.topo!=-1)
        {
                palavra[i]=(char)topo(p);
                desempilha(p);
                i++;
        }
}