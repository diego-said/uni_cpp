/* Atividade Complementar - Estruturas de dados I

Sistema de Biblioteca

Alunos: Daniel Mambrini, Diego Alves, Fabio Feitosa
Turma: 2 semetre Ciencia da Computacao - Noturno - Sao Camilo */

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void retirar();
void buscar();
void inserir();
void limpar();
void classificar();
struct LIVRO
{
	int cod,est,prat,pos;
	char titulo[100],autor[50],editora[30];
};
struct PRATELEIRA
{
	int espaco[20];
};
struct ESTANTE
{
	PRATELEIRA prateleira [8];

};

/*variaveis globais*/
ESTANTE estante[10];
LIVRO livro[1600];
int livro_atual=0,livro_re_atual=0,livro_removido[20]={0};


/* Exibi‡Æo do menu */

char menu()
{
	char opcao;
	//clrscr();
	cout<<"Sistema de Controle de Bilbioteca" <<endl;
	cout<<"\n1-Inserir um novo livro";
	cout<<"\n2-Retirar um livro";
	cout<<"\n3-Buscar um livro";
	cout<<"\n4-Classificar livros";
	cout<<"\n5-Sair";
	cout<<"\n\nDigite a op‡Æo desejada:";
	cin>>opcao;
	if(opcao=='1' ||opcao=='2' ||opcao=='3' ||opcao=='4')
	{
		switch(opcao)
		{
		      case '1':
			    inserir();
			    break;

		      case '2':
			    retirar();
			    break;

		      case '3':
			    buscar();
			    break;
		      case '4':
			    classificar();
			    break;
		 }

	}
	return opcao;
}
/* Inserir livro */

void inserir()
{
	//clrscr();
        int est=0,prat=0,pos=0,cod,cheio=0,troca,i;
	cout<<"Sistema de Controle de Bilbioteca" <<endl;
	cout<<"\n1-Inserir um novo livro";
        cout<<"\n\nDigite a estante: ";
        cin>>est;
        cout<<"Digite a prateleira: ";
        cin>>prat;
        cout<<"Digite a posicao: ";
        cin>>pos;
        if(estante[est].prateleira[prat].espaco[pos]!=0)
        {
                for(i=0;i<=19;i++)
                {
                        if(estante[est].prateleira[prat].espaco[i]==0)
                        {
                                cheio=1;
                        }
                }
                if(cheio==0)
                {
                        cout<<"\n\nO livro nao pode ser inserido neste lugar, porque o mesmo ja se encontra ocupado e a prateleira tambem.";
                        getch();
                }
                else
                {
                        for(i=0;i<=19;i++)
                        {
                                if(estante[est].prateleira[prat].espaco[i]==0)
                                {
                                        troca=i;
                                        cod=estante[est].prateleira[prat].espaco[pos];
                                        estante[est].prateleira[prat].espaco[troca]=cod;
                                        livro[cod-1].est=est;
                                        livro[cod-1].prat=prat;
                                        livro[cod-1].pos=troca;
                                        estante[est].prateleira[prat].espaco[pos]=0;
                                        i=20;
                                }
                        }
                        livro[livro_atual].cod=livro_atual+1;
                        estante[est].prateleira[prat].espaco[pos]=livro_atual+1;
                        livro[livro_atual].est=est;
                        livro[livro_atual].prat=prat;
                        livro[livro_atual].pos=pos;
                        cout<<"Digite o titulo do livro: ";
                        gets(livro[livro_atual].titulo);
                        cout<<"Digite o autor do livro: ";
                        gets(livro[livro_atual].autor);
                        cout<<"Digite a editora do livro: ";
                        gets(livro[livro_atual].editora);
                        livro_atual=livro_atual+1;
                        cout<<"Livro inserido.";
                }
        }
        else
        {
                livro[livro_atual].cod=livro_atual+1;
                estante[est].prateleira[prat].espaco[pos]=livro_atual+1;
                livro[livro_atual].est=est;
                livro[livro_atual].prat=prat;
                livro[livro_atual].pos=pos;
                cout<<"Digite o titulo do livro: ";
                gets(livro[livro_atual].titulo);
                cout<<"Digite o autor do livro: ";
                gets(livro[livro_atual].autor);
                cout<<"Digite a editora do livro: ";
                gets(livro[livro_atual].editora);
                livro_atual=livro_atual+1;
                cout<<"Livro inserido.";
        }
}

/* Retirar livro */

void retirar()
{
	//clrscr();
        int est=0,prat=0,pos=0,cod=0;
        char conf='n';
	cout<<"Sistema de Controle de Bilbioteca" <<endl;
	cout<<"\n2-Retirar um livro";
        cout<<"\n\nDigite a estante: ";
        cin>>est;
        cout<<"Digite a prateleira: ";
        cin>>prat;
        cout<<"Digite a posicao: ";
        cin>>pos;
        if(estante[est].prateleira[prat].espaco[pos]==0)
        {
                cout<<"Esta posicao nao possui nenhum livro.";
                getch();
        }
        else
        {
                cod=estante[est].prateleira[prat].espaco[pos];
                cout<<"\nCodigo do livro: "<<cod<<endl;
                cout<<"Titulo: "<<livro[cod-1].titulo<<endl;
                cout<<"Autor: "<<livro[cod-1].autor<<endl;
                cout<<"Editora: "<<livro[cod-1].editora<<endl;
                cout<<"\nConfirma a retirada?(s/n):";
                cin>>conf;
                if(conf=='s')
                {
                        livro_removido[livro_re_atual]=cod;
                        estante[est].prateleira[prat].espaco[pos]=0;
                        livro[cod-1].est=-1;
                        livro[cod-1].prat=-1;
                        livro[cod-1].pos=-1;
                        livro_re_atual=livro_re_atual+1;
                        cout<<"\nLivro retirado.";
                }
                getch();
        }
}

/* Buscar livro */
void buscar()
{
	//clrscr();
        int est,cod,i,j,en=0;
	cout<<"Sistema de Controle de Bilbioteca"<<endl;
	cout<<"\n3-Buscar um livro";
        cout<<"\n\nDigite a estante para busca: ";
        cin>>est;
        cout<<"Digite o codigo do livro: ";
        cin>>cod;
        for(i=0;i<=7;i++)
        {
                for(j=0;j<=19;j++)
                {
                        if(estante[est].prateleira[i].espaco[j]==cod)
                        {
                                cout<<"\nO livro encontra-se na prateleira "<<i<<" na posicao "<<j;
                                getch();
                                en=1;
                        }
                }
        }
        if(en==0)
        {
                cout<<"Livro nao encontrado.";
        }
        getch();
}
/* Classificar livros */
void classificar()
{
        //clrscr();
        int i,j,k,l,cod1,cod2,est,prat,pos;
        char conf='n';
	cout<<"Sistema de Controle de Bilbioteca"<<endl;
        cout<<"\n4-Classificar livros";
        cout<<"\n\nEsta operacao ira alterar a atual diposicao dos livros. Ordenando-os pelo seu codigo na atual prateleira em que se encontrarem.";
        cout<<"\n\nConfirma a operacao?(s/n):";
        cin>>conf;
        if(conf=='s')
        {
                for(i=0;i<=9;i++)
                {
                        for(j=0;j<=7;j++)
                        {
                                for(k=0;k<=18;k++)
                                {
                                        for(l=0;l<=19;l++)
                                        {
                                                if(estante[i].prateleira[j].espaco[l]>estante[i].prateleira[j].espaco[k])
                                                {
                                                        cod1=estante[i].prateleira[j].espaco[l];
                                                        cod2=estante[i].prateleira[j].espaco[k];
                                                        estante[i].prateleira[j].espaco[l]=estante[i].prateleira[j].espaco[k];
                                                        estante[i].prateleira[j].espaco[k]=cod1;
                                                        est=livro[cod1-1].est;
                                                        prat=livro[cod1-1].prat;
                                                        pos=livro[cod1-1].pos;
                                                        livro[cod1-1].est=livro[cod2-1].est;
                                                        livro[cod1-1].prat=livro[cod2-1].prat;
                                                        livro[cod1-1].pos=livro[cod2-1].pos;
                                                        livro[cod2-1].est=est;
                                                        livro[cod2-1].prat=prat;
                                                        livro[cod2-1].pos=pos;

                                                }
                                        }
                                }
                        }
                }
                cout<<"Classificacao completada.";
                getch();
        }
}

/* Limpar biblioteca*/
void limpar()
{
        int i,j,k;
        for(i=0;i<=9;i++)
        {
                for(j=0;j<=7;j++)
                {
                        for(k=0;k<=19;k++)
                        {
                                estante[i].prateleira[j].espaco[k]=0;
                        }
                }
        }
}

void main()
{
	char opcao;
        limpar();
        opcao = menu();
	while(opcao!='5')
	{
		//clrscr();
		opcao = menu();
	}
	getch();
}