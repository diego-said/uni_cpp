// Programa Idadfe
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int idade;
	clrscr();
	cout<<"Qual sua idade\?";
	cin>>idade;
	if (idade>=19)
	{
		cout<<"Adulto";
	}
	else
	{
		if(idade>12&&idade<=18)
		{
			cout<<"Adolescente";
		}
		else
		{
			cout<<"Crianca";
		}
	}
	getch();
}
