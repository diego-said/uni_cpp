// IC 2 - 1
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	clrscr();
	int i,a=0;
	char nome[50];
	cout<<"Digite seu nome: ";
	gets(nome);
	for(i=0;i<=(strlen(nome)-1);i++)
	{
		if(nome[i]=='a')
		{
			a=a+1;
		}
	}
	cout<<"Seu nome possui "<<a<<" letras a.";
	getch();
}