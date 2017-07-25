#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void buscar();
void inserir();
void molde();
void menu();

struct VIDEO
{
        int cod, quanti;
	char nome[45],genero[15],comentario[50],tipo[4];
};

/*variaveis globais*/

VIDEO video[10];
int tam=0;

/* Exibicao do menu */

void menu()
{
	int op;
	clrscr();
	molde();

				gotoxy(5,7);
				cout<<"\n  Sistema de Controle de Video locadora\n";
                                cout<<"\n  1-Inserir um novo Video";
                               	cout<<"\n  2-Buscar um video";
				cout<<"\n  0-Sair";
				cout<<"\n\n  Digite a opcao desejada: ";
				cin>>op;


		switch(op)
		{
		      case 1:
			    inserir();
			    break;

		      case 2:
			    buscar();
			    break;

                       //default: exit(0);

               }



}
/* Inserir VIDEO */

void inserir()
{
int cont,i=0;
clrscr();
molde();
	cout<<"\nSistema de Controle da VideoLocadora\n";
                   if(tam==0)
                   {
                   cout<<"\nDigite a quantidade de cadastros TOTAL: ";
                   cin>>tam;
                   cout<<endl;
                   }
                   if(video[i].cod!=0)
                   {
                        cout<<"\nNao ha espaco disponivel, chamar programador";
                   }
                   else
                   {
                         for(i=0;i<tam;i++)
	                 {

       	                        video[i].cod=i+1;
			        molde();
                                clrscr();
                                cout<<"\nSistema de Controle da VideoLocadora\n";
			        cout<<"\n1-Inserir um novo video";
			        cout<<"\n\nCodigo Definido: "<<video[i].cod;
			        cout<<"\n\nDigite o nome: ";
                                gets(video[i].nome);
			        cout<<"\nGenero: ";
			        cin>>video[i].genero;
			        cout<<"\nTipo (DVD ou VHS): ";
			        cin>>video[i].tipo;
			        cout<<"\nQuantidade disponivel: ";
			        cin>>video[i].quanti;
			        cout<<"\nlocation: p"<<(i+1);
			        cout<<"\n\nComentario: ";
                                gets(video[i].comentario);
			        cout<<"\nDeseja continuar cadastrando (0 sair, 1 continuar): ";
			        cin>>cont;
                                if(cont!=1) menu();
                                }

		      }
}



void buscar()
{
int mo=0,i;
char busc[50];
clrscr();
molde();
cout<<"\nSistema de Controle da Locadora" <<endl;
cout<<"\nModo de pesquisa:"<<endl;
cout<<"\n1-Nome do Filme\n2-Codigo\n3-Genero\n4-Listar todos os nomes\n0-Sair\nDigite a opcao: ";
cin>>mo;
        switch(mo)
	{
        case '1':
        cout<<"\nInsira o nome: ";
                  gets(busc);
                  for(i=0;i<tam;i++)
                                  if(strcmp(busc,video[i].nome)!=0)
	                          {
                                  cout<<"\nVideo encontrado";
                                  }
                                  else
                                  {
                                  cout<<"\nVideo nÆo encontrado!";
                                  }
                                   break;

        case '4': for(i=0;i<tam;i++)
                {
                cout<<"\n"<<video[i].nome<<" Cod "<<video[i].cod;
                getch();
                }

                break;
        }


}

//desenha
void molde(void)
{


gotoxy(2,2);
cout<<"\n   \xDC\xDC\xDC\xDC\xDC\n   \xDBO\xDBO\xDB\n \xDF\xDF\xDF\xDF\xDF\n";

}

void main()
{
	int op, mo;

				textcolor(LIGHTGREEN);
				textbackground(BLUE);
        menu();
        while(op!=0||mo!=0)
        {
        menu();
        }

	//getch();
}

