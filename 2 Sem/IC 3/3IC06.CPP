#include<iostream.h>
#include<conio.h>
#include<stdio.h>


struct disciplina
{
        char nome_disciplina[30];
        float notap1,notap2,ic;
};

void cadastra(disciplina[],int);
void imprimir(disciplina[],int);

void main()
{
        clrscr();
        int tam;
        disciplina *ptrv;
        cout<<"Digite o tamanho do vetor: ";
        cin>>tam;
        if(tam>0)
        {
                ptrv = new disciplina[tam];
                if(ptrv!=NULL)
                {
                        cadastra(ptrv,tam);
                        imprimir(ptrv,tam);
                }
        }
}


void cadastra(disciplina vetdis[],int tam)
{
        for(int i=0;i<tam;i++)
        {
                clrscr();
                cout<<"Digite o nome da disciplina: ";
                gets(vetdis[i].nome_disciplina);
                cout<<"Digite a nota da P1: ";
                cin>>vetdis[i].notap1;
                cout<<"Digite a nota da P2: ";
                cin>>vetdis[i].notap2;
                cout<<"Digite a nota de IC: ";
                cin>>vetdis[i].ic;
        }
}

void imprimir(disciplina vetdis[],int tam)
{
        clrscr();
        float med;
        for(int i=0;i<tam;i++)
        {
                med=(vetdis[i].notap1+vetdis[i].notap2+vetdis[i].ic)/3;
                cout<<"\n\nDiciplina: "<<vetdis[i].nome_disciplina<<endl;
                cout<<"P1: "<<vetdis[i].notap1<<" P2: "<<vetdis[i].notap2<<" IC: "<<vetdis[i].ic<<endl;
                cout<<"Media: "<<med;
                if(med>=6)
                {
                        cout<<" APROVADO";
                }
                else
                {
                        cout<<" REPROVADO";
                }
                getch();
        }
}