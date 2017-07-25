//IC 2 - 2
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
//strlen
//strcmp
//strcat
//strcpy
void main()
{
	clrscr();
	char nome1[50],nome2[50];
	cout<<"Digite um nome: ";
	gets(nome1);
	cout<<"Digite outro nome: ";
	gets(nome2);
	if(strcmp(nome1,nome2)==0)
	{
		cout<<"Nomes iguais.";
	}
	else
	{
		cout<<"Nomes diferentes.";
	}
	getch();
}