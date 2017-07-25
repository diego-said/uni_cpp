#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>

class livro{	private:

					char titulo[50],autor[30],ano[5],editora[25];

					public:

					void setl();
					void getl();
					livro();
					};

			void livro::setl(){

			cout<<"\nInsira Titulo: "; gets(titulo);
			cout<<"\nInsira Autor: "; gets(autor);
			cout<<"\nInsira Ano: "; gets(ano);
			cout<<"\nInsira Editora: "; gets(editora);
			};

			void livro:: getl(){
			cout<<"\nTitulo: "; cout<<titulo;
			cout<<"\nAutor: "; cout<<autor;
			cout<<"\nAno: "; cout<<ano;
			cout<<"\nEditora: "; cout<<editora;
			};

			livro::livro(){

			strcpy(titulo," ");
			strcpy(autor," ");
			strcpy(ano," ");
			strcpy(editora," ");
			};

			void main()
			{
			clrscr();
			cout<<"dp";
			getch();

			}




