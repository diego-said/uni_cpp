#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct comida
{
        char nome_comida[30];
        float calorias,carboidratos;
};

void cadastra(comida[] , int);
void imprime(comida[] , int);

void main()
{
        clrscr();
        int tam;
        comida *ptrv;
        cout<<"Digite o tamanho do vetor:";
        cin>>tam;
        if(tam>0)
        {
                ptrv = new comida[tam];
                if(ptrv!=NULL)
                {
                        cadastra(ptrv,tam);
                        imprime(ptrv,tam);
                }
        }
}

void cadastra(comida vetcom[], int tam)
{
        for(int i=0;i<tam;i++)
        {
                      clrscr();
                      cout<<"Digite o nome da comida:";
                      gets(vetcom[i].nome_comida);
                      cout<<"Digite as calorias:";
                      cin>>vetcom[i].calorias;
                      cout<<"Digite os carboidratos:";
                      cin>>vetcom[i].carboidratos;
        }
}

void imprime (comida vetcom[],int tam)
{
        clrscr();
        cout <<"Comidas cadastradas:";
        for(int i=0;i<tam;i++)
        {
                cout<<"\n\n\Nome: "<<vetcom[i].nome_comida;
                cout<<"\nCalorias: "<<vetcom[i].calorias;
                cout<<" Carboidratos: "<<vetcom[i].carboidratos;
                getch();
        }
}