#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class pessoa{
      protected:
                char nome[50],end[100];
                int idade,rg,telefone;
      public:
             void cadastra_pes();
             void altera_pes();
             void mostra_pes();
             pessoa();
             ~pessoa();
};

pessoa::pessoa()
{
        strcpy(nome," ");
        strcpy(end," ");
        idade=0;
        rg=0;
        telefone=0;
}

pessoa::~pessoa()
{
        cout<<"Destruindo pessoa...";
}
void pessoa::cadastra_pes()
{
        clrscr();
        cout<<"Digite o nome: ";
        gets(nome);
        cout<<"Digite o endereco: ";
        gets(end);
        cout<<"Digite a idade: ";
        cin>>idade;
        cout<<"Digite o rg: ";
        cin>>rg;
        cout<<"Digite o telefone: ";
        cin>>telefone;
}

void pessoa::altera_pes()
{
        clrscr();
        cout<<"Nome: "<<nome;
        cout<<"Alterar para: ";
        gets(nome);
        cout<<"Endereco: "<<end;
        cout<<"Alterar para: ";
        gets(end);
        cout<<"Idade: "<<idade;
        cout<<"Alterar para: ";
        cin>>idade;
        cout<<"RG: "<<rg;
        cout<<"Alterar para: ";
        cin>>rg;
        cout<<"Telefone: "<<telefone;
        cout<<"Alterar para: ";
        cin>>telefone;
}

void pessoa::mostra_pes()
{
        clrscr();
        cout<<"Nome: "<<nome;
        cout<<"Endereco: "<<end;
        cout<<"Idade "<<idade;
        cout<<"RG: "<<rg;
        cout<<"Telefone: "<<telefone;
}

class estudante:public pessoa{
      protected:
                int ano;
                char periodo;
      public:
             void cadastra_est();
             void altera_est();
             void mostra_est();
             estudante();
             ~estudante();
};

estudante::estudante():pessoa()
{
        ano=0;
        periodo=' ';
}

estudante::~estudante()
{
        cout<<"Destruindo estudante...";
}

void estudante::cadastra_est()
{
        cadastra_pes();
        cout<<"Digite o ano: ";
        cin>>ano;
        cout<<"Digite o periodo(M/T/N): ";
        cin>>periodo;
}

void estudante::altera_est()
{
        altera_pes();
        cout<<"Ano: "<<ano;
        cout<<"Alterar para: ";
        cin>>ano;
        cout<<"Periodo: "<<periodo;
        cout<<"Alterar para: ";
        cin>>periodo;
}

void estudante::mostra_est()
{
        mostra_pes();
        cout<<"Ano: "<<ano;
        cout<<"Periodo: "<<periodo;
}

class docente:public pessoa{
      protected:
                char materia[50],instituicao[50];
                int carga_horaria;
      public:
             void cadastra_doc();
             void altera_doc();
             void mostra_doc();
             docente();
             ~docente();
};

docente::docente():pessoa()
{
        strcpy(materia," ");
        strcpy(instituicao," ");
        carga_horaria=0;
}

docente::~docente()
{
        cout<<"Destruindo docente...";
}

void docente::cadastra_doc()
{
        cadastra_pes();
        cout<<"Digite a materia lecionada: ";
        gets(materia);
        cout<<"Digite a instituicao de ensino: ";
        gets(instituicao);
        cout<<"Digite a carga horaria: ";
        cin>>carga_horaria;
}

void docente::altera_doc()
{
        cadastra_pes();
        cout<<"Materia: "<<materia;
        cout<<"Alterar para: ";
        gets(materia);
        cout<<"Instituicao: "<<instituicao;
        cout<<"Alterar para: ";
        gets(instituicao);
        cout<<"Carga horaria: "<<carga_horaria;
        cout<<"Alterar para: ";
        cin>>carga_horaria;
}

void docente::mostra_doc()
{
        mostra_pes();
        cout<<"Materia: "<<materia;
        cout<<"Instituicao: "<<instituicao;
        cout<<"Carga horaria: "<<carga_horaria;
}

class graduacao:public estudante{
        protected:
                  char curso[50];
        public:
               void cadastra_grad();
               void altera_grad();
               void mostra_grad();
               graduacao();
               ~graduacao();
};

graduacao::graduacao():estudante()
{
        strcpy(curso," ");
}

graduacao::~graduacao()
{
        cout<<"Destruindo graduacao...";
}

void graduacao::cadastra_grad()
{
        cadastra_est();
        cout<<"Digite o curso: ";
        gets(curso);
}

void graduacao::altera_grad()
{
        altera_est();
        cout<<"Curso: "<<curso;
        cout<<"Alterar para: ";
        gets(curso);
}

void graduacao::mostra_grad()
{
        mostra_est();
        cout<<"Curso: "<<curso;
}

class p_graduacao:public estudante{
      protected:
                char especializacao[50];
      public:
             void cadastra_pgrad();
             void altera_pgrad();
             void mostra_pgrad();
             p_graduacao();
             ~p_graduacao();
};

p_graduacao::p_graduacao():estudante()
{
        strcpy(especializacao," ");
}

p_graduacao::~p_graduacao()
{
        cout<<"Destruindo pos-graduacao...";
}

void p_graduacao::cadastra_pgrad()
{
        cadastra_est();
        cout<<"Digite a especializacao: ";
        gets(especializacao);
}

void p_graduacao::altera_pgrad()
{
        altera_est();
        cout<<"Especializacao: "<<especializacao;
        cout<<"Alterar para: ";
        gets(especializacao);
}

void p_graduacao::mostra_pgrad()
{
        mostra_est();
        cout<<"Especializacao: "<<especializacao;
}

void main()
{
        graduacao grad[10];
        p_graduacao pgrad[10];
        docente doc[10];
        int op=0,opdoc=0,opgrad=0,oppgrad=0,i;
        while(op!=4)
        {
                clrscr();
                cout<<"1 - Docente";
                cout<<"\n2 - Graduacao";
                cout<<"\n3 - Pos-Graduacao";
                cout<<"\n4 - Sair";
                cout<<"\n\nDigite a opcao: ";
                cin>>op;
                switch(op)
                {
                        case 1:
                             while(opdoc!=4)
                             {
                                clrscr();
                                cout<<"1 - Cadastrar docente";
                                cout<<"\n2 - Alterar docente";
                                cout<<"\n3 - Mostrar docente";
                                cout<<"\n4 - Sair";
                                cout<<"\n\nDigite a opcao: ";
                                cin>>opdoc;
                                switch(opdoc)
                                {
                                        case 1:
                                             for(i=0;i<10;i++)
                                             {
                                                doc[i].cadastra_doc();
                                             }
                                        break;

                                        case 2:
                                             for(i=0;i<10;i++)
                                             {
                                                doc[i].altera_doc();
                                             }
                                        break;

                                        case 3:
                                             for(i=0;i<10;i++)
                                             {
                                                doc[i].mostra_doc();
                                             }
                                        break;
                                }
                             }
                        break;

                        case 2:
                             while(opgrad!=4)
                             {
                                clrscr();
                                cout<<"1 - Cadastrar graduando";
                                cout<<"\n2 - Alterar graduando";
                                cout<<"\n3 - Mostrar graduando";
                                cout<<"\n4 - Sair";
                                cout<<"\n\nDigite a opcao: ";
                                cin>>opgrad;
                                switch(opdoc)
                                {
                                        case 1:
                                             for(i=0;i<10;i++)
                                             {
                                                grad[i].cadastra_grad();
                                             }
                                        break;

                                        case 2:
                                             for(i=0;i<10;i++)
                                             {
                                                grad[i].altera_grad();
                                             }
                                        break;

                                        case 3:
                                             for(i=0;i<10;i++)
                                             {
                                                grad[i].mostra_grad();
                                             }
                                        break;
                                }
                             }
                        break;

                        case 3:
                             while(oppgrad!=4)
                             {
                                clrscr();
                                cout<<"1 - Cadastrar pos-graduando";
                                cout<<"\n2 - Alterar pos-graduando";
                                cout<<"\n3 - Mostrar pos-graduando";
                                cout<<"\n4 - Sair";
                                cout<<"\n\nDigite a opcao: ";
                                cin>>oppgrad;
                                switch(oppgrad)
                                {
                                        case 1:
                                             for(i=0;i<10;i++)
                                             {
                                                pgrad[i].cadastra_pgrad();
                                             }
                                        break;

                                        case 2:
                                             for(i=0;i<10;i++)
                                             {
                                                pgrad[i].altera_pgrad();
                                             }
                                        break;

                                        case 3:
                                             for(i=0;i<10;i++)
                                             {
                                                pgrad[i].mostra_pgrad();
                                             }
                                        break;
                                }
                             }
                        break;
                }
        }
}