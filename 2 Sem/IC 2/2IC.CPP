#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#define NOME 30
#define CPTO 61
char menu(char[],char[]);
void trabalha(char,char[],char[]);
void main()
{
        char opcao,n1[NOME],n2[NOME],cpto[CPTO],cpy[CPTO];
	clrscr();
        cout<<"Digite um nome: ";
	gets(n1);
	cout<<"Digite outro nome: ";
	gets(n2);
	strcpy(cpto,n1);
	strcat(cpto," ");
	strcat(cpto,n2);
	strcpy(cpy,cpto);
        opcao=menu(cpy,cpto);
        while(opcao!='7')
        {
                clrscr();
                opcao=menu(cpy,cpto);
        }
}

/* Menu */
char menu(char cpy[],char cpto[])
{
        char opcao;
        clrscr();
        cout<<"Informacao armazenada: "<<cpy<<endl;
        cout<<"\n1 - Procura uma letra";
        cout<<"\n2 - Mostrar o numero de letras";
        cout<<"\n3 - Inverter a informacao";
        cout<<"\n4 - Converter para maiusculo";
        cout<<"\n5 - Ordenar informacao";
        cout<<"\n6 - Suprimir as 3 primeiras posicoes";
        cout<<"\n7 - Sair";
	cout<<"\n\nDigite a op‡Æo desejada:";
        cin>>opcao;
        trabalha(opcao,cpy,cpto);
        return opcao;
}

/* Trabalhando o vetor */
void trabalha(char opcao, char cpy[],char cpto[])
{
        switch(opcao)
        {
                case '1':
                        clrscr();
                        char letra,*ptrpos;
                        cout<<"Informacao armazenada: "<<cpy<<endl;
                        cout<<"\n\n1 - Procura uma letra"<<endl<<"\n";
                        cout<<"Digite uma letra: ";
                        cin>>letra;
                        ptrpos=strchr(cpy,letra);
                        if(ptrpos!=NULL)
                        {
                                for(int i=0;i<CPTO;i++)
                                {
                                        if(cpy[i]==*ptrpos)
                                        {
                                                cout<<"A letra se encontra na posicao: "<<i;
                                                i=CPTO;
                                        }
                                }
                                getch();
                        }
                getch();
                break;
                case '2':
                        clrscr();
                        int esp=0,i,tam,letras;
                        cout<<"Informacao armazenada: "<<cpy<<endl;
                        cout<<"\n\n2 - Mostrar o numero de letras"<<endl<<"\n";
                        for(i=0;i<CPTO;i++)
                        {
                                if(cpy[i]==' ')
                                {
                                        esp++;
                                }
                        }
                        tam=strlen(cpy);
                        letras=tam-esp;
                        cout<<"Numero de letras: "<<letras;
                        getch();
                break;
                case '3':
                        clrscr();
                        cout<<"Informacao armazenada: "<<cpy<<endl;
                        cout<<"\n\n3 - Inverter a informacao"<<endl<<"\n";
                        strrev(cpy);
                        cout<<cpy;
                        getch();
                        strrev(cpy);
                break;
                case '4':
                        clrscr();
                        cout<<"Informacao armazenada: "<<cpy<<endl;
                        cout<<"\n\n4 - Converter para maiusculo"<<endl<<"\n";
                        strupr(cpy);
                        cout<<cpy;
                        strcpy(cpy,cpto);
                        getch();
                break;
                case '5':
                        clrscr();
                        int k,l;
                        char aux;
                        cout<<"Informacao armazenada: "<<cpy<<endl;
                        cout<<"\n\n5 - Ordenar informacao"<<endl<<"\n";
                        for(k=0;k<=strlen(cpy)-2;k++)
                        {
                                for(l=0;l<=strlen(cpy)-2-k;l++)
                                {
                                        if(cpy[l]>cpy[l+1])
                                        {
                                            aux=cpy[l];
                                            cpy[l]=cpy[l+1];
                                            cpy[l+1]=aux;
                                        }
                                }
                        }
                        cout<<"Informacao ordenada: "<<cpy;
                        getch();
                        strcpy(cpy,cpto);
                break;
                case '6':
                        clrscr();
                        char sup[CPTO-3];
                        cout<<"Informacao armazenada: "<<cpy<<endl;
                        cout<<"\n\n6 - Suprimir as 3 primeiras posicoes"<<endl<<"\n";
                        for(int j=0;j<CPTO;j++)
                        {
                                sup[j]=cpy[j+3];
                        }
                        cout<<"Informacao suprimida: "<<sup;
                        getch();
                break;
        }
}