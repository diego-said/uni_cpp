#include<iostream.h>
#include "inverte.h"

void limpa(char[]);

void main()
{
        //clrscr();
        char palavra[100];
        limpa(palavra);
        cout<<"Digite a palavra: ";
		gets(palavra);
        inverte(palavra);
        cout<<palavra;
}

void limpa(char limpa[])
{
        strcpy(limpa," ");
}