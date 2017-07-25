// IC 2 - 8
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
        clrscr();
        int i;
        char nome[20][50],prof[20][30];
        for(i=0;i<=19;i++)
        {
                cout<<"Digite seu nome: ";
                gets(nome[i]);
                cout<<"Digite sua profissao: ";
                gets(prof[i]);
        }
        clrscr();
        cout<<"Nome Profissao"<<endl;
        for(i=0;i<=19;i++)
        {
                cout<<nome[i]<<" "<<prof[i]<<endl;
        }
        getch();
}