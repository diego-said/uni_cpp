#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
struct TEL{
			 char re[8],cel[8],pro[8];
};

struct END{
			 int cep;
			 char end[100],bairro[30],cidade[30],estado[2];
};

struct CONTATO{
			 char nome[30],snome[20],em[80];
			 int usado,pk;
			 TEL tel;
			 END end;
};

char menu(int,CONTATO[]);
void inserir(int,CONTATO[]);
void excluir(int,CONTATO[]);
void listar(int,CONTATO[]);
void pesquisar(int,CONTATO[]);
void total(int,CONTATO[]);
void inicializa(int,CONTATO[]);
void salva(int,CONTATO[]);
void troca_tam();
void topo();
void agentam();
void jan_menu();
void men_peq();
void men_gra();
void limpa();

void main()
{
	int tam,i=0;
	CONTATO *ptrvetcont;
	FILE *ptrconf,*ptrbd;
	char opcao;
	topo();
	agentam();
	gotoxy(2,6);
	if((ptrconf=fopen("\\confg.txt","r"))==NULL)
	{
		cout<<"Digite o tamanho da agenda: ";
		cin>>tam;
		if(tam>0)
		{
			if((ptrconf=fopen("\\confg.txt","a+"))!=NULL)
			{
				fprintf(ptrconf,"%d",tam);
				fclose(ptrconf);
			}
		}

	}
	else
	{
		if((ptrconf=fopen("\\confg.txt","a+"))!=NULL)
		{
			fscanf(ptrconf,"%d",&tam);
			fclose(ptrconf);
		}
	}
	if(tam>0)
	{
		ptrvetcont=new CONTATO[tam];
		if(ptrvetcont!=NULL)
		{
			if((ptrbd=fopen("\\bdados.txt","r"))==NULL)
			{
				ptrbd=fopen("\\bdados.txt","w+");
				inicializa(tam,ptrvetcont);
				if(ptrbd==NULL)
				{
					cout<<"Problema em criar o arquivo com a base de dados!";
				}
			}
			else
			{
				fclose(ptrbd);
				ptrbd=fopen("\\bdados.txt","a+");
				if(ptrbd==NULL)
				{
					cout<<"Problema em abrir o arquivo com a base de dados!";
				}
				else
				{
					int flag=0;
					while(!feof(ptrbd))
					{
						if(i<=tam)
						{
							fscanf(ptrbd,"%d\n",&ptrvetcont[i].pk);
							ptrvetcont[ptrvetcont[i].pk].usado=1;
							fscanf(ptrbd,"%s\n",ptrvetcont[i].nome);
							fscanf(ptrbd,"%s\n",ptrvetcont[i].snome);
							fscanf(ptrbd,"%s\n",ptrvetcont[i].em);
							fscanf(ptrbd,"%s\n",ptrvetcont[i].tel.re);
							fscanf(ptrbd,"%s\n",ptrvetcont[i].tel.pro);
							fscanf(ptrbd,"%s\n",ptrvetcont[i].tel.cel);
							fscanf(ptrbd,"%s\n",ptrvetcont[i].end.end);
							fscanf(ptrbd,"%s\n",ptrvetcont[i].end.bairro);
							fscanf(ptrbd,"%s\n",ptrvetcont[i].end.cidade);
							fscanf(ptrbd,"%s\n",ptrvetcont[i].end.estado);
							i=i+1;
						}
						else if(flag==0)
						{
							cerr<<"Problema em carregar o banco de dados, devido a falta de espa‡o. Altere o tamanho da agenda!";
							fscanf(ptrbd,"%s\n",ptrvetcont[i].nome);
							flag=1;
							getch();
						}
                                                else
                                                {
                                                        fscanf(ptrbd,"%s\n",ptrvetcont[i].nome);
                                                }
					}
				}
		}

			opcao = menu(tam,ptrvetcont);
			while(opcao!='7')
			{
				clrscr();
				opcao = menu(tam,ptrvetcont);
			}
                        salva(tam,ptrvetcont);
		}
		else
		{
			cout<<"Falta de mem¢ria!";
		}
	}
	else
	{
		cout<<"Digite um valor maior que zero!";
	}
}

char menu(int tam,CONTATO contato[])
{
	clrscr();
	char opcao;
	topo();
	jan_menu();
	gotoxy(2,6);cout<<"1 - Incluir contato(s)";
	gotoxy(2,7);cout<<"2 - Excluir contato(s)";
	gotoxy(2,8);cout<<"3 - Pesquisar contato(s)";
	gotoxy(2,9);cout<<"4 - Listar contato(s)";
	gotoxy(2,10);cout<<"5 - Total de contatos";
	gotoxy(2,11);cout<<"6 - Trocar o tamanho";
	gotoxy(2,12);cout<<"7 - Sair";
	gotoxy(2,13);cout<<"Digite a op‡Æo: ";
	cin>>opcao;
	switch (opcao)
	{
		case '1':
				 inserir(tam,contato);
		break;
		case '2':
				 excluir(tam,contato);
		break;
		case '3':
				 pesquisar(tam,contato);
		break;
		case '4':
				 listar(tam,contato);
		break;
		case '5':
				 total(tam,contato);
		break;
		case '6':
				 troca_tam();
		break;
	}
	return(opcao);
}

void inserir(int tam,CONTATO contato[])
{
	men_gra();
	int i,ind;
	char outro;
	do
	{
		for(i=0;i<tam;i++)
		{
			if(contato[i].usado!=1)
			{
				ind=i;
				contato[i].usado=1;
				i=100;
			}
			else
			{
				ind=-1;
			}
			limpa();
		}
		if(ind>=0)
		{
			contato[ind].pk=ind;

			gotoxy(35,6);
			cout<<"Digite o nome: ";
			gets(contato[ind].nome);

			gotoxy(35,7);
			cout<<"Digite o sobrenome: ";
			gets(contato[ind].snome);

			gotoxy(35,8);
			cout<<"Digite o e-mail: ";
			gets(contato[ind].em);

			gotoxy(35,9);
			cout<<"Digite o telefone residencial: ";
			cin>>contato[ind].tel.re;

			gotoxy(35,10);
			cout<<"Digite o telefone comercial: ";
			cin>>contato[ind].tel.pro;

			gotoxy(35,11);
			cout<<"Digite o telefone celular: ";
			cin>>contato[ind].tel.cel;

			gotoxy(35,12);
			cout<<"Digite o endere‡o: ";
			gets(contato[ind].end.end);

			gotoxy(35,13);
			cout<<"Digite o bairro: ";
			gets(contato[ind].end.bairro);

			gotoxy(35,14);
			cout<<"Digite a cidade: ";
			gets(contato[ind].end.cidade);

			gotoxy(35,15);
			cout<<"Digite o estado: ";
			cin>>contato[ind].end.estado;

			gotoxy(35,17);
			cout<<"Incluir outro?(s/n)";
			cin>>outro;
		}
								else
								{

			limpa();
												gotoxy(35,6);
												cout<<"Nao e possivel incluir novos contatos, apague";gotoxy(35,7);cout<<"um ou mais contato(s).";
												outro='n';
												getch();
		}
	}while(outro=='s');
}

void excluir(int tam,CONTATO contato[])
{
	int cod;
	char ex,confex;
				do{
	men_gra();
	limpa();
				gotoxy(35,6);
	cout<<"Digite o codigo do contato: ";
	cin>>cod;
	if(cod>=0 && cod<tam)
	{
								if(contato[cod].usado==1)
		{
												gotoxy(35,8);
			cout<<"Numero do contato: "<<contato[cod].pk;
												gotoxy(35,10);
			cout<<contato[cod].nome<<" "<<contato[cod].snome;
												gotoxy(35,11);
			cout<<contato[cod].em;
			gotoxy(35,12);
			cout<<"Tel.: "<<contato[cod].tel.re<<" Cel.: "<<contato[cod].tel.cel<<" Tel. Comercial: "<<contato[cod].tel.pro;
			gotoxy(35,13);
												cout<<contato[cod].end.end<<endl;
												gotoxy(35,14);
			cout<<"Bairro: "<<contato[cod].end.bairro<<" Cidade: "<<contato[cod].end.cidade<<" UF: "<<contato[cod].end.estado;
			gotoxy(35,16);
												cout<<"Confirma exclusao?(s/n)";
			cin>>confex;
			if(confex=='s')
			{
				contato[cod].usado=0;
																gotoxy(35,18);
				cout<<"Contato excluido.";
				getch();
			}
			else
			{
																gotoxy(35,18);
																cout<<"Exclusao cancelada.";
				getch();
			}
								}
								else
								{
			gotoxy(35,8);
			cout<<"O codigo informado nao apresenta nenhum conta";gotoxy(35,9);cout<<"to cadastrado.";
												getch();
		}
	}
	else
				{
		gotoxy(35,8);
		cout<<"O codigo nao exite.";gotoxy(35,9);cout<<"Os codigos variam de 0 a "<<(tam-1);

		getch();
	}
	limpa();
				gotoxy(35,6);
	cout<<"Deseja continuar?(s/n)";
	cin>>ex;
	}while(ex=='s');
}

void pesquisar(int tam,CONTATO contato[])
{
	int i;
	char pes,pesquisa[80];
	do
	{
				men_gra();
	limpa();
	gotoxy(35,6);
				cout<<"1 - Pesquisa por nome";
				gotoxy(35,7);
	cout<<"2 - Pesquisa por sobrenome";
	gotoxy(35,8);
				cout<<"3 - Pesquisa por e-mail";
				gotoxy(35,9);
				cout<<"4 - Sair";
	gotoxy(35,11);
	cout<<"Digite a op‡Æo: ";
	cin>>pes;
	switch (pes)
	{
		case '1':
		limpa();
		int ac1=0;
								gotoxy(35,6);
		cout<<"Digite o nome: ";
		gets(pesquisa);
		for(i=0;i<tam;i++)
		{
			if(toupper(*pesquisa) == toupper(*contato[i].nome))
			{
				limpa();
				gotoxy(35,8);
																cout<<"Contato(s) encontrado(s):";
																gotoxy(35,10);
							cout<<"Numero do contato: "<<contato[i].pk;
																gotoxy(35,12);
							cout<<contato[i].nome<<" "<<contato[i].snome;
																gotoxy(35,13);
				cout<<contato[i].em;
				gotoxy(35,14);
							cout<<"Tel.: "<<contato[i].tel.re<<" Cel.: "<<contato[i].tel.cel<<" Tel. Comercial: "<<contato[i].tel.pro;
				gotoxy(35,15);
				cout<<contato[i].end.end;
																gotoxy(35,16);
							cout<<"Bairro: "<<contato[i].end.bairro<<" Cidade: "<<contato[i].end.cidade<<" UF: "<<contato[i].end.estado;
				ac1=1;
				getch();
			}
		}
		if(ac1==0)
		{
			gotoxy(35,8);
                        cout<<"Nenhum contato encontrado.";
			getch();
                }
		break;


                case '2':
		limpa();
		int ac2=0;
		gotoxy(35,6);
		cout<<"Digite o sobrenome: ";
		gets(pesquisa);
		for(i=0;i<tam;i++)
		{
			if(strcmp(pesquisa,contato[i].snome)==0)
			{
				limpa();
				gotoxy(35,8);
				cout<<"Contato(s) encontrado(s):";
				gotoxy(35,10);
				cout<<"Numero do contato: "<<contato[i].pk;
				gotoxy(35,12);
				cout<<contato[i].nome<<" "<<contato[i].snome;
				gotoxy(35,13);
				cout<<contato[i].em;
				gotoxy(35,14);
				cout<<"Tel.: "<<contato[i].tel.re<<" Cel.: "<<contato[i].tel.cel<<" Tel. Comercial: "<<contato[i].tel.pro;
				gotoxy(35,15);
				cout<<contato[i].end.end;
				gotoxy(35,16);
				cout<<"Bairro: "<<contato[i].end.bairro<<" Cidade: "<<contato[i].end.cidade<<" UF: "<<contato[i].end.estado;
				ac2=1;
				getch();
			}
		}
		if(ac2==0)
		{
			gotoxy(35,8);
			cout<<"Nenhum contato encontrado.";
			getch();
		}
		break;


		case '3':
		limpa();
		int ac3=0;
		gotoxy(35,6);
		cout<<"Digite o e-mail: ";
		gets(pesquisa);
		for(i=0;i<tam;i++)
		{
			if(strcmp(pesquisa,contato[i].em)==0)
			{
				limpa();
				gotoxy(35,8);
				cout<<"Contato(s) encontrado(s):";
				gotoxy(35,10);
				cout<<"Numero do contato: "<<contato[i].pk;
				gotoxy(35,12);
				cout<<contato[i].nome<<" "<<contato[i].snome;
				gotoxy(35,13);
				cout<<contato[i].em;
				gotoxy(35,14);
				cout<<"Tel.: "<<contato[i].tel.re<<" Cel.: "<<contato[i].tel.cel<<" Tel. Comercial: "<<contato[i].tel.pro;
				gotoxy(35,15);
				cout<<contato[i].end.end;
				gotoxy(35,16);
				cout<<"Bairro: "<<contato[i].end.bairro<<" Cidade: "<<contato[i].end.cidade<<" UF: "<<contato[i].end.estado;
				ac3=1;
				getch();
			}
		}
		if(ac3==0)
		{
			gotoxy(35,8);
			cout<<"Nenhum contato encontrado.";
			getch();
		}
		break;
	}
	}while(pes!='4');
}

void listar(int tam,CONTATO contato[])
{
	int i,at=0;
	for(i=0;i<tam;i++)
	{
		if(contato[i].usado==1)
		{
			at=1;
			men_gra();
			limpa();
			gotoxy(35,6);
			cout<<"Numero do contato: "<<contato[i].pk;
			gotoxy(35,8);
			cout<<contato[i].nome<<" "<<contato[i].snome;
			gotoxy(35,9);
			cout<<contato[i].em;
			gotoxy(35,10);
			cout<<"Tel.: "<<contato[i].tel.re<<" Cel.: "<<contato[i].tel.cel<<" Tel. Comercial: "<<contato[i].tel.pro;
			gotoxy(35,11);
			cout<<contato[i].end.end;
			gotoxy(35,12);
			cout<<"Bairro: "<<contato[i].end.bairro<<" Cidade: "<<contato[i].end.cidade<<" UF: "<<contato[i].end.estado;
			getch();
		}
	}
	if(at==0)
	{
		men_peq();
		gotoxy(40,12);
		cout<<"Nenhum contato cadastrado.";
		getch();
	}
}

void total(int tam,CONTATO contato[])
{
	int nuncont=0,i;
	for(i=0;i<tam;i++)
	{
		if(contato[i].usado==1)
		{
			nuncont=nuncont+1;
		}
	}
	men_peq();
	gotoxy(40,12);
	cout<<"Contato(s) cadastrado(s): "<<nuncont;
	getch();
}

void topo()
{
	clrscr();
	cout<<"\xC9";
	for(int i=0;i<78;i++)
	{
		cout<<"\xCD";
	}
	cout<<"\xBB";
	cout<<"\xBA";
	gotoxy(80,2);
	cout<<"\xBA";
	cout<<"\xC8";
	for(i=0;i<78;i++)
	{
		cout<<"\xCD";
	}
	cout<<"\xBC";
	gotoxy(32,2);
	cout<<"Agenda Eletr“nica";
}

void agentam()
{
	gotoxy(1,5);
	cout<<"\xC9";
	for(int i=0;i<34;i++)
	{
		cout<<"\xCD";
	}
	cout<<"\xBB";
	gotoxy(1,6);
	cout<<"\xBA";
	gotoxy(36,6);
	cout<<"\xBA";
	gotoxy(1,7);
	cout<<"\xC8";
	for(i=0;i<34;i++)
	{
		cout<<"\xCD";
	}
	cout<<"\xBC";
}

void jan_menu()
{
	gotoxy(1,5);
	cout<<"\xC9";
	for(int i=0;i<30;i++)
	{
		cout<<"\xCD";
	}
	cout<<"\xBB";
	for(i=0;i<8;i++)
	{
		gotoxy(1,6+i);
		cout<<"\xBA";
		gotoxy(32,6+i);
		cout<<"\xBA";
	}
	gotoxy(1,14);
	cout<<"\xC8";
	for(i=0;i<30;i++)
	{
		cout<<"\xCD";
	}
	cout<<"\xBC";
}

void men_peq()
{
	gotoxy(39,11);
	cout<<"\xC9";
	for(int i=0;i<30;i++)
	{
		cout<<"\xCD";
	}
	cout<<"\xBB";
	gotoxy(39,12);
	cout<<"\xBA";
	gotoxy(70,12);
	cout<<"\xBA";
	gotoxy(39,13);
	cout<<"\xC8";
	for(i=0;i<30;i++)
	{
		cout<<"\xCD";
	}
	cout<<"\xBC";
}

void men_gra()
{
	gotoxy(34,5);
	cout<<"\xC9";
	for(int i=0;i<45;i++)
	{
		cout<<"\xCD";
	}
	cout<<"\xBB";
	for(i=0;i<18;i++)
	{
		gotoxy(34,6+i);
		cout<<"\xBA";
		gotoxy(80,6+i);
		cout<<"\xBA";
	}
	gotoxy(34,24);
	cout<<"\xC8";
	for(i=0;i<45;i++)
	{
		cout<<"\xCD";
	}
	cout<<"\xBC";
}

void limpa()
{
	int i,j;
	for(i=0;i<18;i++)
	{
		for(j=0;j<45;j++)
		{
			gotoxy(35+j,6+i);
			cout<<" ";
		}
	}
}

void inicializa(int tam,CONTATO contato[])
{
	for(int i=0;i<tam;i++)
	{
		contato[i].usado=0;
	}
}

void troca_tam()
{

	clrscr();
	int tam;
	FILE *ptrtroca;
	if((ptrtroca=fopen("\\confg.txt","r"))!=NULL)
	{
		fscanf(ptrtroca,"%d",&tam);
		cout<<"Tamanho atual: "<<tam<<endl;
		fclose(ptrtroca);
		if((ptrtroca=fopen("\\confg.txt","w"))!=NULL)
		{
			cout<<"Digite o novo tamanho: ";
			cin>>tam;
			if(tam>0)
			{
				fprintf(ptrtroca,"%d",tam);
				fclose(ptrtroca);
			}
			else
			{
				cout<<"NÆo foi possivel alterar o tamanho, digite um valor positivo.";
			}
		}
	}
}

void salva(int tam,CONTATO contato[])
{
        FILE *ptrbd;
        if((ptrbd=fopen("\\bdados.txt","w"))==NULL)
        {
                cerr<<"Impossivel salvar as alteracores!";
        }
        else
        {
                for(int i=0;i<tam;i++)
                {
                        if(contato[i].usado==1)
                        {
                                fprintf(ptrbd,"%d\n",contato[i].pk);
                                fprintf(ptrbd,"%s\n",contato[i].nome);
                                fprintf(ptrbd,"%s\n",contato[i].snome);
                                fprintf(ptrbd,"%s\n",contato[i].em);
                                fprintf(ptrbd,"%s\n",contato[i].tel.re);
                                fprintf(ptrbd,"%s\n",contato[i].tel.pro);
                                fprintf(ptrbd,"%s\n",contato[i].tel.cel);
                                fprintf(ptrbd,"%s\n",contato[i].end.end);
                                fprintf(ptrbd,"%s\n",contato[i].end.bairro);
                                fprintf(ptrbd,"%s\n",contato[i].end.cidade);
                                fprintf(ptrbd,"%s\n",contato[i].end.estado);
                        }
                }
        }
}