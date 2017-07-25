// IC 2 - 7
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
        clrscr();
        int i,p=0;
        char frase[100],op;
        cout<<"Digite a frase: ";
        gets(frase);
        while(p!=1)
        {
                cout<<"MENU"<<endl;
                cout<<"\n1 - Imprime o comprimento da frase"<<endl;
                cout<<"2 - Imprime os dois primeiros e os dois ultimos caracteres da frase"<<endl;
                cout<<"3 - Imprime a frase espelhada"<<endl;
                cout<<"4 - Termina o programa"<<endl;
                cout<<"\nDigite a opcao desejada: ";
                cin>>op;
                switch (op)
                {
                        case '1':
                             cout<<"A frase possui "<<strlen(frase)<<" posicoes.";
                             getch();
                             clrscr();
                             cout<<"Digite a frase: "<<frase<<endl;
                        break;
                        case '2':
                             if(strlen(frase)>=2)
                             {
                                cout<<frase[(strlen(frase)-strlen(frase))]<<frase[((strlen(frase)-strlen(frase))+1)]<<" "<<frase[(strlen(frase)-2)]<<frase[(strlen(frase)-1)];
                                getch();
                                clrscr();
                                cout<<"Digite a frase: "<<frase<<endl;
                             }
                             else
                             {
                                cout<<"A frase possui menos de 2 caracteres.";
                                getch();
                                clrscr();
                                cout<<"Digite a frase: "<<frase<<endl;
                             }
                        break;
                        case '3':
                             	for(i=strlen(frase)-1;i>=0;i--)
	                        {
	                                cout<<frase[i];
	                        }
                                getch();
                                clrscr();
                                cout<<"Digite a frase: "<<frase<<endl;
                        break;
                        case '4':
                             p=1;
                        break;
                }
        }
        getch();
}