#include<iostream.h>
#include<conio.h>
#include "llccc.h"

void main()
{
	int x=-1,pos=0;
	LLCCC L;
	cria_lista(&L);
	clrscr();
        cout<<"Digite um valor para adicionar a lista: ";
        cin>>x;
        insere_fim(&L,x);
        x=-1;
	while(x!=0)
	{
                clrscr();
		cout<<"Digite um valor para adicionar a lista: ";
		cin>>x;
                cout<<"Digite a posicao: ";
                cin>>pos;
		if(x!=0)
			insere_pos(&L,x,pos);
                imprime(&L);
                getch();
	}
        x=-1;
        while(x!=0)
        {
                clrscr();
		cout<<"Digite a posicao para remover da lista: ";
		cin>>x;
                if(x!=0)
			remove_pos(&L,x);
                imprime(&L);
                getch();
        }
        finaliza(&L);
}