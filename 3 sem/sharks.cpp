#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#define data "04/03/05";

class arquivo{

private:
char nome[64], ext[4];

//public:
//char data[9];
//int tipo;
int oc;


public:
void obtem_dados()
{
cout<<" Nome: ";
gets(nome);
cout<<" Extensao: ";
gets(ext);
}

void exibir_dados()
{
cout<<" Nome: "<<nome;
cout<<"\n Extensao: "<<ext;
}

void oculto()
{
cout<<" \n Tipo :"<<oc<<" \n 0 - Nao oculto\n 1 - Oculto \n Digite a Opçao:";
cin>>oc;
}

void renomear()
{
cout<<"Nome atual : "<<nome<<endl<<" Insira um novo Nome: ";
gets(nome);
cout<<" Extensao atual: "<<nome<<endl<<" Insira a extensao: ";
gets(ext);
}
};




	void main()
	{
	int op=4;
	arquivo ic;
		while(op!=0)
		{
		cout<<" \n 1-Renomear \n 2-Alterar tipo \n 3-Ocultar \n 0-Sair \n";
		cin>>op;
			switch(op)
			{
			//case 1 : ic.renomear(); break;
			//case 2 : ic.alttipo(); break;
			case 3 : ic.oculto(); break;
			}
		};
	}

