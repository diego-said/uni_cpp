// Diego Alves Said Simao - Mat. 60339
// 1§ - Sem. Ciencia da Computacao - Noturno
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
		struct TEL{

				char re[8],cel[8],pro[8];
		};
		struct END{
				int cep;
				char end[100],bairro[30],cidade[30],estado[2];
		};
		struct CONTATO{
				char nome[30],snome[20],em[80];
				int pk[100];
				TEL tel;
				END end;

		};
		CONTATO contato[100];
		char checar,outro='s';
		int i,at=0,ind=0,con[100]={0};
		do
		{
				clrscr();
				cout<<"Agenda Eletr“nica";
				cout<<"\n\n__________________________";
				cout<<"\n\n1 - Incluir contato(s)";
				cout<<"\n2 - Excluir contato(s)";
				cout<<"\n3 - Pesquisar contato(s)";
				cout<<"\n4 - Listar contato(s)";
				cout<<"\n5 - Exibir o numero de contato cadastrados";
				cout<<"\n6 - Sair";
				cout<<"\n\nDigite a op‡Æo: ";
				cin>>checar;
				switch (checar)
				{
						case '1':
						clrscr();
						cout<<"Agenda Eletr“nica";
						cout<<"\n\n__________________________";
						cout<<"\n\n1 - Incluir contato(s)";
						do
						{
							for(i=0;i<=99;i++)
							{
								if(con[i]==0)
								{
									ind=i;
									con[i]=1;
									i=100;
								}
								else
								{
									ind=-1;
								}
							 }
							 if(ind>=0)
							 {
							      contato[ind].pk[ind]=ind;
							      cout<<"\n\nDigite o nome: ";
							      cin>>contato[ind].nome;
							      cout<<"Digite o sobrenome: ";
							      gets(contato[ind].snome);
							      cout<<"Digite o e-mail: ";
							      gets(contato[ind].em);
							      cout<<"Digite o telefone residencial: ";
							      cin>>contato[ind].tel.re;
							      cout<<"Digite o telefone comercial: ";
							      cin>>contato[ind].tel.pro;
							      cout<<"Digite o telefone celular: ";
							      cin>>contato[ind].tel.cel;
							      cout<<"Digite o endere‡o: ";
							      gets(contato[ind].end.end);
							      cout<<"Digite o bairro: ";
							      gets(contato[ind].end.bairro);
							      cout<<"Digite a cidade: ";
							      gets(contato[ind].end.cidade);
							      cout<<"Digite o estado: ";
							      cin>>contato[ind].end.estado;

							      cout<<"Incluir outro?(s/n)";
							      cin>>outro;
							 }
							 else
							 {
							      cout<<"\n\nNao e possivel incluir novos contatos, apague um ou mais contato(s).";
							      outro='n';
							      getch();
							 }
						}while(outro=='s');
						break;

						case '2':
                                                int cod;
                                                char ex,confex;
						do{
                                                clrscr();
                                                cout<<"Agenda Eletr“nica";
						cout<<"\n\n__________________________";
						cout<<"\n\n2 - Excluir contato(s)";
                                                cout<<"\n\nDigite o codigo do contato: ";
                                                cin>>cod;
                                                if(cod>=0 && cod<=99)
                                                {
                                                        if(con[cod]==1)
                                                        {
                                                                cout<<"\n\nNumero do contato: "<<contato[cod].pk[cod];
						                cout<<"\n\n"<<contato[cod].nome<<" "<<contato[cod].snome<<endl;
                                                                cout<<contato[cod].em<<endl;
						                cout<<"Tel.: "<<contato[cod].tel.re<<" Cel.: "<<contato[cod].tel.cel<<" Tel. Comercial: "<<contato[cod].tel.pro<<endl;
						                cout<<contato[cod].end.end<<endl;
						                cout<<"Bairro: "<<contato[cod].end.bairro<<" Cidade: "<<contato[cod].end.cidade<<" UF: "<<contato[cod].end.estado<<endl;
                                                                cout<<"\n\nConfirma exclusao?(s/n)";
                                                                cin>>confex;
                                                                if(confex=='s')
                                                                {
                                                                        con[cod]=0;
                                                                        cout<<"Contato excluido.";
                                                                }
                                                                else
                                                                {
                                                                        cout<<"Exclusao cancelada.";
                                                                }
                                                        }
                                                        else
                                                        {
                                                                cout<<"\n\nO codigo informado nao apresenta nenhum contato cadastrado.";
                                                        }
                                                }
                                                else
                                                {
                                                        cout<<"\n\nO codigo nao exite. Os codigos variam de 0 a 99.";
                                                }
                                                cout<<"\n\nDeseja continuar?(s/n)";
                                                cin>>ex;
                                                }while(ex=='s');
						break;

						case '3':
						char pes,pesquisa[80];
						do
						{
						clrscr();
						cout<<"Agenda Eletr“nica";
						cout<<"\n\n__________________________";
						cout<<"\n\n3 - Pesquisar contato(s)";
						cout<<"\n\n1 - Pesquisa por nome";
						cout<<"\n2 - Pesquisa por sobrenome";
						cout<<"\n3 - Pesquisa por e-mail";
						cout<<"\n4 - Sair";
						cout<<"\n\nDigite a op‡Æo: ";
						cin>>pes;
						switch (pes)
						{
							case '1':
								clrscr();
								int ac1=0;
								cout<<"Agenda Eletr“nica";
								cout<<"\n\n__________________________";
								cout<<"\n\n3 - Pesquisar contato(s)";
								cout<<"\n\n1 - Pesquisa por nome";
								cout<<"\n\nDigite o nome: ";
								gets(pesquisa);
								for(i=0;i<=99;i++)
								{
									if(strcmp(pesquisa,contato[i].nome)==0)
									{
										cout<<"Contato(s) encontrado(s):";
										cout<<"\n\nNumero do contato: "<<contato[i].pk[i];
										cout<<"\n\n"<<contato[i].nome<<" "<<contato[i].snome<<endl;
										cout<<contato[i].em<<endl;
										cout<<"Tel.: "<<contato[i].tel.re<<" Cel.: "<<contato[i].tel.cel<<" Tel. Comercial: "<<contato[i].tel.pro<<endl;
										cout<<contato[i].end.end<<endl;
										cout<<"Bairro: "<<contato[i].end.bairro<<" Cidade: "<<contato[i].end.cidade<<" UF: "<<contato[i].end.estado<<endl;
										ac1=1;
										getch();
									}
								}
								if(ac1==0)
								{
									cout<<"\n\nNenhum contato encontrado.";
									getch();
								}
							break;


							case '2':
								clrscr();
								int ac2=0;
								cout<<"Agenda Eletr“nica";
								cout<<"\n\n__________________________";
								cout<<"\n\n3 - Pesquisar contato(s)";
								cout<<"\n\n2 - Pesquisa por sobrenome";
								cout<<"\n\nDigite o sobrenome: ";
								gets(pesquisa);
								for(i=0;i<=99;i++)
								{
									if(strcmp(pesquisa,contato[i].snome)==0)
									{
										cout<<"Contato(s) encontrado(s):";
										cout<<"\n\nNumero do contato: "<<contato[i].pk[i];
										cout<<"\n\n"<<contato[i].nome<<" "<<contato[i].snome<<endl;
										cout<<contato[i].em<<endl;
										cout<<"Tel.: "<<contato[i].tel.re<<" Cel.: "<<contato[i].tel.cel<<" Tel. Comercial: "<<contato[i].tel.pro<<endl;
										cout<<contato[i].end.end<<endl;
										cout<<"Bairro: "<<contato[i].end.bairro<<" Cidade: "<<contato[i].end.cidade<<" UF: "<<contato[i].end.estado<<endl;
										ac2=1;
										getch();
									}
								}
								if(ac2==0)
								{
									cout<<"\n\nNenhum contato encontrado.";
									getch();
								}
							break;


							case '3':
								clrscr();
								int ac3=0;
								cout<<"Agenda Eletr“nica";
								cout<<"\n\n__________________________";
								cout<<"\n\n3 - Pesquisar contato(s)";
								cout<<"\n\n3 - Pesquisa por e-mail";
								cout<<"\n\nDigite o e-mail: ";
								gets(pesquisa);
								for(i=0;i<=99;i++)
								{
									if(strcmp(pesquisa,contato[i].em)==0)
									{
										cout<<"Contato(s) encontrado(s):";
										cout<<"\n\nNumero do contato: "<<contato[i].pk[i];
										cout<<"\n\n"<<contato[i].nome<<" "<<contato[i].snome<<endl;
										cout<<contato[i].em<<endl;
										cout<<"Tel.: "<<contato[i].tel.re<<" Cel.: "<<contato[i].tel.cel<<" Tel. Comercial: "<<contato[i].tel.pro<<endl;
										cout<<contato[i].end.end<<endl;
										cout<<"Bairro: "<<contato[i].end.bairro<<" Cidade: "<<contato[i].end.cidade<<" UF: "<<contato[i].end.estado<<endl;
										ac3=1;
										getch();
									}
								}
								if(ac3==0)
								{
									cout<<"\n\nNenhum contato encontrado.";
									getch();
								}
							break;
						}
						}while(pes!='4');
						break;

						case '4':
						clrscr();
						cout<<"Agenda Eletr“nica";
						cout<<"\n\n__________________________";
						cout<<"\n\n4 - Listar contato(s)";
						for(i=0;i<=99;i++)
						{
							if(con[i]==1)
							{
								at=1;
                                                                cout<<"\n\nNumero do contato: "<<contato[i].pk[i];
							        cout<<"\n\n"<<contato[i].nome<<" "<<contato[i].snome<<endl;
							        cout<<contato[i].em<<endl;
							        cout<<"Tel.: "<<contato[at].tel.re<<" Cel.: "<<contato[i].tel.cel<<" Tel. Comercial: "<<contato[i].tel.pro<<endl;
							        cout<<contato[i].end.end<<endl;
							        cout<<"Bairro: "<<contato[i].end.bairro<<" Cidade: "<<contato[i].end.cidade<<" UF: "<<contato[i].end.estado<<endl;
                                                                getch();
							}
						}
                                                if(at==0)
                                                {
                                                        cout<<"\n\nNenhum contato cadastrado.";
                                                }
						getch();
						break;

						case '5':
						int nuncont=0;
                                                clrscr();
						cout<<"Agenda Eletr“nica";
						cout<<"\n\n__________________________";
						cout<<"\n\n5 - Exibir o numero de contato cadastrados";
						for(i=0;i<=99;i++)
						{
							if(con[i]==1)
							{
								nuncont=nuncont+1;
							}
						}
						cout<<"\n\nContato(s) cadastrado(s): "<<nuncont;
                                                getch();
						break;
				}
		}while(checar!='6');
}