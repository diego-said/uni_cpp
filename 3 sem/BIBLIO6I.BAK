#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

#define TAM 100

class livro
{
        protected:
                  char titulo[64],autor[64],editora[64],ano[5];
                  int situacao; //0-Disponivel 1-Em uso
        public:
               livro();
               ~livro();
               void cadastra_livro();
               void mostra_livro();
               void altera_livro();
};

livro::livro()
{
        strcpy(titulo,"");
        strcpy(autor,"");
        strcpy(editora,"");
        strcpy(ano,"");
        situacao=0;
}

livro::~livro()
{
        cout<<"Destruindo livro...";
}

void livro::cadastra_livro()
{
           clrscr();
           cout<<"Digite o titulo: ";
           gets(titulo);
           cout<<"Digite o autor: ";
           gets(autor);
           cout<<"Digite a editora: ";
           gets(editora);
           cout<<"Digite o ano: ";
           gets(ano);
           cout<<"Disponivel (0-Sim/1-Nao)?";
           cin>>situacao;
}

void livro::mostra_livro()
{
        clrscr();
        cout<<"Titulo: "<<titulo<<endl;
        cout<<"Autor: "<<autor<<endl;
        cout<<"Editora: "<<editora<<endl;
        cout<<"Ano: "<<ano<<endl;
        cout<<"Disponivel: "<<situacao;
}

void livro::altera_livro()
{
        clrscr();
        cout<<"Titulo: "<<titulo<<endl;
        cout<<"Alterar para: ";
        gets(titulo);
        cout<<"Autor: "<<autor<<endl;
        cout<<"Alterar para: ";
        gets(autor);
        cout<<"Editora: "<<editora<<endl;
        cout<<"Alterar para: ";
        gets(editora);
        cout<<"Ano: "<<ano<<endl;
        cout<<"Alterar para: ";
        gets(ano);
        cout<<"Disponivel: "<<situacao<<endl;
        cout<<"Alterar para: ";
        cin>>situacao;
}

class biblioteca
{
        public:
               livro listalivros[TAM];
               biblioteca();
               ~biblioteca();
};

biblioteca::biblioteca()
{

}

biblioteca::~biblioteca()
{
        cout<<"Destruindo biblioteca...";
}

void main()
{
        int op=-1,cad=0,mos=0,alt=0,c=0,m=-1,a=-1,i;
        biblioteca b1;
        do{
           clrscr();
           cout<<"Biblioteca - v0.1"<<endl;
           cout<<"\n1 - Cadastra livros";
           cout<<"\n2 - Mostra livros";
           cout<<"\n3 - Altera livros";
           cout<<"\n4 - Sair"<<endl;
           cout<<"\nDigite a opcao:";
           cin>>op;
           switch(op)
           {
                case 1:
                     do{
                        clrscr();
                        if(c>=TAM)
                                  cout<<"Impossivel adicionar mais livros!";
                        else
                        {
                                  b1.listalivros[c].cadastra_livro();
                                  c++;
                                  m=c;
                                  a=c;
                        }
                        cout<<"\n\nDeseja continuar (0-Nao/1-Sim)?";
                        cin>>cad;
                     }while(cad!=0);
                break;

                case 2:
                     int ok=0;
                     clrscr();
                     if(m<0)
                            cout<<"Nenhum livro cadastrado!";
                     else
                     {
                            do{
                               clrscr();
                               cout<<"1 - Mostrar todos"<<endl;
                               cout<<"2 - Mostrar um a um"<<endl;
                               cout<<"3 - Sair"<<endl;
                               cout<<"\nDigite a opcao: ";
                               cin>>mos;
                               switch(mos)
                               {
                                    case 1:
                                         for(i=0;i<m;i++)
                                         {
                                                b1.listalivros[i].mostra_livro();
                                                getch();
                                         }
                                    break;

                                    case 2:
                                         for(i=0;i<m;i++)
                                         {
                                                b1.listalivros[i].mostra_livro();
                                                cout<<"\n\nDeseja continuar(0-Nao/1-Sim)?";
                                                cin>>ok;
                                                if(ok==0)
                                                     i=m+1;
                                         }
                                    break;
                               }
                            }while(mos!=3);
                     }
                break;

                case 3:
                     clrscr();
                     if(a<0)
                            cout<<"Nenhum livro cadastrado!";
                     else
                     {
                        do{
                           cout<<"Digite o indice: ";
                           cin>>i;
                           if(i<0&&i>a)
                               cout<<"Impossivel alterar!";
                           else
                           {
                               b1.listalivros[i].altera_livro();
                               cout<<"\n\nDeseja continuar (0-Nao/1-Sim)?";
                               cin>>alt;
                           }
                        }while(alt!=0);
                     }
                break;
           }
        }while(op!=4);
}