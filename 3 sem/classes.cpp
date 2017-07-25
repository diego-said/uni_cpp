#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#define DATA "04/03/05"

class Arquivo{
	public:
		char nome[64],extensao[4],data[9];
		int tipo; //0 - completo/1 - somente leitura
		int oculto; //0 - visivel/1 - oculto

	void renomear(void){
		cout<<"Nome atual: "<<nome<<endl<<"Insira o novo nome: ";
		gets(nome);
		cout<<"\nExtensao atual: "<<extensao<<endl<<"Insira a nova extensao: ";
		gets(extensao);
		strcpy(data,DATA);
	};

	void alttipo(void){
		cout<<"\nTipo atual: "<<tipo<<endl<<"\n0 - acesso completo\n1 - somente leitura";
		cin>>tipo;
	};

	void aoculto(void){
		cout<<"\nTipo: "<<oculto<<endl<<"\n0 - visivel\n1 - oculto";
		cin>>oculto;
	};
};

void main(){
	int op=4;
	Arquivo IC;
	while(op!=0){
		clrscr();
		cout<<"0-Sair\n1-Renomear\n2-Alterar tipo\n3-Ocultar\n\nDigite a opcao: ";
		cin>>op;
		switch(op){
			case 1:
				IC.renomear();
			break;
			case 2:
				IC.alttipo();
			break;
			case 3:
				IC.aoculto();
			break;
		};
	};
}
