// IC 2 - 6
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
        clrscr();
        char nome[20][50];
        int i,m=0,ind=0;
        for(i=0;i<=19;i++)
        {
                cout<<"Digite um nome: ";
                gets(nome[i]);
                if(strlen(nome[i])>=m)
                {
                        m=strlen(nome[i]);
                        ind=i;
                }
        }
        cout<<"O maior nome digitado foi: "<<nome[ind]<<" e possui "<<m<<" letras.";
        getch();
}