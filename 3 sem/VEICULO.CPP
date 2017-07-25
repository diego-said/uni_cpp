#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class veiculo{
	private:
		char nome[50],combustivel[30],cor[20],fabricante[30];
		float peso,altura,largura;
		int trans_pessoa;
	public:
		void cadastra();
		void mostra();
		void altera();
		void limpa();
		veiculo();
		~veiculo();
};

veiculo::veiculo()
{
	strcpy(nome," ");
	strcpy(combustivel," ");
	strcpy(cor," ");
	strcpy(fabricante," ");
	peso=0;
	altura=0;
	largura=0;
	trans_pessoa=0;
}

veiculo::~veiculo()
{
	cout<<"Destruindo...";
}

void veiculo::cadastra()
{
	clrscr();
	cout<<"Digite nome: ";
	gets(nome);
	cout<<"\nDigite o tipo de combustivel: ";
	gets(combustivel);
	cout<<"\nDigite a cor do veiculo: ";
	gets(cor);
	cout<<"\nDigite o fabricante: ";
	gets(fabricante);
	cout<<"\nDigite o peso: ";
	cin>>peso;
	cout<<"\nDigite a altura: ";
	cin>>altura;
	cout<<"\nDigite a largura: ";
	cin>>largura;
	cout<<"\nDigite o numero maximo de pessoas que o veiculo transporta: ";
	cin>>trans_pessoa;
}

void veiculo::mostra()
{
	clrscr();
	cout<<"Nome: "<<nome;
	cout<<"\nCombustivel: "<<combustivel;
	cout<<"\nCor: "<<cor;
	cout<<"\nFabricante: "<<fabricante;
	cout<<"\nPeso: "<<peso;
	cout<<"\nAltura: "<<altura;
	cout<<"\nLargura: "<<largura;
	cout<<"\nPessoas transportadas: "<<trans_pessoa;
}

void veiculo::altera()
{
	clrscr();
	cout<<"Nome: "<<nome;
	cout<<"\nAlterar para: ";
	gets(nome);
	cout<<"\nCombustivel: "<<combustivel;
	cout<<"\nAlterar para: ";
	gets(combustivel);
	cout<<"\nCor: "<<cor;
	cout<<"\nAlterar para: ";
	gets(cor);
	cout<<"\nFabricante: "<<fabricante;
	cout<<"\nAlterar para: ";
	gets(fabricante);
	cout<<"\nPeso: "<<peso;
	cout<<"\nAlterar para: ";
	cin>>peso;
	cout<<"\nAltura: "<<altura;
	cout<<"\nAlterar para: ";
	cin>>altura;
	cout<<"\nLargura: "<<largura;
	cout<<"\nAlterar para: ";
	cin>>largura;
	cout<<"\nPessoas transportadas: "<<trans_pessoa;
	cout<<"\nAlterar para: ";
	cin>>trans_pessoa;
}

void veiculo::limpa()
{
	clrscr();
	int x;
	cout<<"Nome: "<<nome;
	cout<<"\nCombustivel: "<<combustivel;
	cout<<"\nCor: "<<cor;
	cout<<"\nFabricante: "<<fabricante;
	cout<<"\nPeso: "<<peso;
	cout<<"\nAltura: "<<altura;
	cout<<"\nLargura: "<<largura;
	cout<<"\nPessoas transportadas: "<<trans_pessoa;
	cout<<"\n\nConfrima limpeza(1-sim/0-nao): ";
	cin>>x;
	if(x==1){
		strcpy(nome," ");
		strcpy(combustivel," ");
		strcpy(cor," ");
		strcpy(fabricante," ");
		peso=0;
		altura=0;
		largura=0;
		trans_pessoa=0;
	}
}

class terrestres:public veiculo{
	private:
		int eixos, portas;
		char tmotor;

	public:
		void cadastrat();
		void mostrat();
		void alterat();
		void limpat();
		terrestres();
		~terrestres();


};

terrestres::terrestres()
{
	eixos=0;
	portas=0;
	tmotor= ' ';
}

terrestres::~terrestres()
{
	cout<<"Destruindo...";
}

void terrestres::cadastrat()
{
     cadastra();
     cout<<"\nDigite quantidade de eixo(s): ";
     cin>>eixos;
     cout<<"\nDigite a quantidade de portas: ";
     cin>>portas;
     cout<<"\nDigite o tipo de motor (V/W/L): ";
     cin>>tmotor;
}

void terrestres::mostrat()
{
        mostra();
        cout<<"\nEixo(s): "<<eixos;
        cout<<"\nNumero de portas: "<<portas;
        cout<<"\nTipo de motor: "<<tmotor;
}

void terrestres::alterat()
{
        altera();
	cout<<"\nEixo(s): "<<eixos;
	cout<<"\nAlterar para: ";
	cin>>eixos;
	cout<<"\nPortas: "<<portas;
	cout<<"\nAlterar para: ";
	cin>>portas;
	cout<<"\nTipo de motor: "<<tmotor;
	cout<<"\nAlterar para: ";
	cin>>tmotor;
}

void terrestres::limpat()
{
        clrscr();
	int x;
	clrscr();
/*        cout<<"Nome: "<<nome;
	cout<<"\nCombustivel: "<<combustivel;
	cout<<"\nCor: "<<cor;
	cout<<"\nFabricante: "<<fabricante;
	cout<<"\nPeso: "<<peso;
	cout<<"\nAltura: "<<altura;
	cout<<"\nLargura: "<<largura;
	cout<<"\nPessoas transportadas: "<<trans_pessoa;*/
       	cout<<"Quantidade de eixo(s): ";
	cout<<"\n "     "   de portas: ";
	cout<<"\nTipo de motor (V/W/L): ";
	cout<<"\n\nConfrima limpeza(1-sim/0-nao): ";
	cin>>x;
	if(x==1)
        {
               /* strcpy(nome," ");
		strcpy(combustivel," ");
		strcpy(cor," ");
		strcpy(fabricante," ");
		peso=0;
		altura=0;
		largura=0;
		trans_pessoa=0;*/
		eixos=0;
		portas=0;
		tmotor=' ';
	}
}

class maritimos:veiculo{
	private:
		float carga;
		char tmotor,tmc[15];

	public:
		void cadastram();
		void mostram();
		void alteram();
		void limpam();
		maritimos();
		~maritimos();
};

maritimos::maritimos()
{
	strcpy(tmc," ");
	carga=0;
	tmotor= ' ';
}

maritimos::~maritimos()
{
	cout<<"Destruindo...";
}

void maritimos::cadastram()
{
        cadastra();
        cout<<"\nDigite a quantidade de carga: ";
        cin>>carga;
        cout<<"\nDigite se possui motor(s/n):";
        cin>>tmotor;
        cout<<"\nDigite o material de fabricacao da embarcacao: ";
        gets(tmc);
}

void maritimos::mostram()
{
        mostra();
        cout<<"\nCarga: "<<carga;
        cout<<"\nMotor: "<<tmotor;
        cout<<"\nMaterial: "<<tmc;
}

void maritimos::alteram()
{
        altera();
	cout<<"\nCarga: "<<carga;
	cout<<"\nAlterar para: ";
	cin>>carga;
        cout<<"\nMotor: "<<tmotor;
        cout<<"\nAlterar para: ";
	cin>>tmotor;
        cout<<"\nMaterial: "<<tmc;
        cout<<"\nAlterar para: ";
        gets(tmc);
}

void maritimos::limpam()
{
        clrscr();
	int x;
	clrscr();
/*        cout<<"Nome: "<<nome;
	cout<<"\nCombustivel: "<<combustivel;
	cout<<"\nCor: "<<cor;
	cout<<"\nFabricante: "<<fabricante;
	cout<<"\nPeso: "<<peso;
	cout<<"\nAltura: "<<altura;
	cout<<"\nLargura: "<<largura;
	cout<<"\nPessoas transportadas: "<<trans_pessoa;*/
       	cout<<"\nCarga: "<<carga;
        cout<<"\nMotor: "<<tmotor;
        cout<<"\nMaterial: "<<tmc;
	cout<<"\n\nConfrima limpeza(1-sim/0-nao): ";
	cin>>x;
	if(x==1)
        {
               /* strcpy(nome," ");
		strcpy(combustivel," ");
		strcpy(cor," ");
		strcpy(fabricante," ");
		peso=0;
		altura=0;
		largura=0;
		trans_pessoa=0;*/
                strcpy(tmc," ");
	        carga=0;
                tmotor= ' ';
        }
}


class aereas:veiculo{
	private:
		float altitude, velocidade, carga;
		char tmotor[30];

	public:
		void cadastraa();
		void mostraa();
		void alteraa();
		void limpaa();
		aereas();
		~aereas();
};

aereas::aereas()
{
	altitude=0;
	velocidade=0;
        carga=0;
	strcpy(tmotor," ");
}

aereas::~aereas()
{
	cout<<"Destruindo...";
}

void aereas::cadastraa()
{
        cadastra();
        cout<<"\nDigite a altitude de cruzeiro: ";
        cin>>altitude;
        cout<<"\nDigite a velocidade de cruzerio: ";
        cin>>velocidade;
        cout<<"\nDigite a quantidade de carga: ";
        cin>>carga;
        cout<<"\nDigite o tipo de motor: ";
        gets(tmotor);
}

void aereas::mostraa()
{
        mostra();
        cout<<"\nAltitude: "<<altitude;
        cout<<"\nVelocidade: "<<velocidade;
        cout<<"\nCarga: "<<carga;
        cout<<"\nMotor: "<<tmotor;
}

void aereas::alteraa()
{
        altera();
        cout<<"\nAltitude: "<<altitude;
        cout<<"\nAlterar para: ";
        cin>>altitude;
        cout<<"\nVelocidade: "<<velocidade;
        cout<<"\nAlterar para: ";
        cin>>velocidade;
        cout<<"\nCarga: "<<carga;
	cout<<"\nAlterar para: ";
	cin>>carga;
        cout<<"\nMotor: "<<tmotor;
        cout<<"\nAlterar para: ";
        gets(tmotor);

}

void aereas::limpaa()
{
        clrscr();
	int x;
	clrscr();
/*        cout<<"Nome: "<<nome;
	cout<<"\nCombustivel: "<<combustivel;
	cout<<"\nCor: "<<cor;
	cout<<"\nFabricante: "<<fabricante;
	cout<<"\nPeso: "<<peso;
	cout<<"\nAltura: "<<altura;
	cout<<"\nLargura: "<<largura;
	cout<<"\nPessoas transportadas: "<<trans_pessoa;*/
        cout<<"\nAltitude: "<<altitude;
        cout<<"\nVelocidade: "<<velocidade;
       	cout<<"\nCarga: "<<carga;
        cout<<"\nMotor: "<<tmotor;
	cout<<"\n\nConfrima limpeza(1-sim/0-nao): ";
	cin>>x;
	if(x==1)
        {
               /* strcpy(nome," ");
		strcpy(combustivel," ");
		strcpy(cor," ");
		strcpy(fabricante," ");
		peso=0;
		altura=0;
		largura=0;
		trans_pessoa=0;*/
                altitude=0;
	        velocidade=0;
                carga=0;
	        strcpy(tmotor," ");
        }
}