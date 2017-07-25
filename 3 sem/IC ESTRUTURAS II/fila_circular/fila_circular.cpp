/*-------------------------------------------------------------------------
  Programa: fila_circular.cpp
  Descricao: este programa ilustra a implementacao uma fila circular
             que armazena informacoes simples sobre uma transacao
             bancaria.
             Cada transacao possui os seguintes campos:
             - Codigo da transacao : numero inteiro, por exemplo :
                      1 - deposito em dinheiro
                      2 - deposito em cheque
                      3 - saque no caixa
                      4 - saque via caixa eletronico 24 hs
                      ...
             - Valor da transacao : numero real

  OBSERVACAO : este programa utiliza a sintaxe de passagem de parametros
             por referencia dalinguagem C++, e portanto, deve ser compilado
             como um programa em C++ (extensao .CPP ou .CC).
  -------------------------------------------------------------------------*/

#include <iostream>

#define	FRACASSO	0
#define	SUCESSO	        1

using namespace std;

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  Declaracao das estruturas de dados
  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

#define TAM 10          // quantidade maxima de elementos da fila

// -------  Aqui definimos como e' um item da fila  ---------
typedef	struct {
  int    Codigo;
  float  Valor;
} TIPO_TRANSACAO;

// ------- Aqui definimos como a estrutura FILA_CIRCULAR  -------------------
struct FILA_CIRCULAR {
  TIPO_TRANSACAO  Transacao[TAM];     // vetor de transacoes
  int             Inic;               // inicio da fila
  int             Fim;                // fim da fila
  int             Quant;              // fim da fila
};


/*--------------------------------------------------------------------------
  PROTOTIPOS DE FUNCOES
  --------------------------------------------------------------------------*/
void	inicializa ( struct FILA_CIRCULAR &p);
int	insere     ( struct FILA_CIRCULAR &p, TIPO_TRANSACAO novaTrans );
int	retira     ( struct FILA_CIRCULAR &p, TIPO_TRANSACAO &novaTrans );
void	exibe      ( struct FILA_CIRCULAR f );
void duplica(struct FILA_CIRCULAR &f, FILA_CIRCULAR &g);
// ---------------   funcao principal do programa ----------------------
int main ()
{
  // aqui declaramos uma ou mais variaveis do tipo FILA_CIRCULAR
  struct FILA_CIRCULAR f1, f2;
  TIPO_TRANSACAO novaTrans;
  int status, i;
  
  //        clrscr();
  inicializa (f1);
  
  for(i=0; i<10; i++) {
    novaTrans.Codigo = i;
    novaTrans.Valor  = i*1000.0;
    status = insere (f1, novaTrans);
    if (status == FRACASSO)
      cout << "Erro: fila cheia" << endl;
    else
      exibe(f1);
  }
  retira (f1, novaTrans);
  novaTrans.Codigo = 8;
  novaTrans.Valor = (float)555.55;
  insere(f1,novaTrans);
  exibe(f1);
  duplica(f1,f2);
  cout<<"Fila duplicada: "<<endl;
  exibe(f2);
  return 0;
}

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   Funcao		: Inicializa
   Finalidade	: inicializar uma FILA_CIRCULAR
   Entrada		: f = uma variavel FILA_CIRCULAR
   Retorno		: nenhum
   Observacoes	: Atriubui os seguintes valores :
   Inic =  0
   Fim  = -1
   Quant=  0
   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void	inicializa (struct FILA_CIRCULAR &f)
{
  f.Inic =  0;
  f.Fim  = -1;
  f.Quant=  0;
}


/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   Funcao		: insere ( )
   Finalidade	: inclui um novo elemento na fila
   Entrada		: f = uma variavel FILA_CIRCULAR
   novaTrans = contem informacoes sobre a nova transacao
   que sera colocada na fila
   Retorno		: retorna o valor SUCESSO quando consegue enfileirar
   "       "  "    FRACASSO "     a fila estaver cheia
   Observacoes	:
   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
int	insere       (struct FILA_CIRCULAR &f, TIPO_TRANSACAO novaTrans )
{
  if (f.Quant == TAM)
    return FRACASSO;
  else {
    f.Fim = (f.Fim+1) % TAM;
    f.Quant++;
    f.Transacao[f.Fim].Codigo = novaTrans.Codigo;
    f.Transacao[f.Fim].Valor  = novaTrans.Valor;
    return SUCESSO;
  }
}

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   Funcao		: retira (  )
   Finalidade	: retira um dado da fila ( o que esta no fim)
   Entrada		: f = uma variavel FILA_CIRCULAR
   Saida           : deposita o dado retirado na variavel 'transRetirada'
   Retorno		: retorna o valor SUCESSO quando consegue desefileirar
   "       "  "    FRACASSO "     a fila estaver vazia
   Observacoes	:
   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
int	retira  ( struct FILA_CIRCULAR &f, TIPO_TRANSACAO &transRetirada )
{
  if (f.Quant == 0)
    return FRACASSO;
  else {
    transRetirada.Codigo = f.Transacao[f.Inic].Codigo;
    transRetirada.Valor  = f.Transacao[f.Inic].Valor;
    f.Inic = (f.Inic+1) % TAM;
    f.Quant--;
    return SUCESSO;
  }
}

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   Funcao		: exibir
   Finalidade	: exibir o conrteudo de uma fila circular, do inicio
   at'e o final
   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void	exibe     ( struct FILA_CIRCULAR f )
{
	int i;
	for(i=0;i<f.Quant;i++)
	{
		cout<<"Codgio: "<<f.Transacao[(f.Inic+i)].Codigo<<" Valor: "<<f.Transacao[(f.Inic+i)].Valor<<endl;	
	}	
}

void duplica(struct FILA_CIRCULAR &f, FILA_CIRCULAR &g)
{
	int i;
	g.Inic=f.Inic;
	g.Fim=f.Fim;
	g.Quant=f.Quant;
	for(i=0;i<f.Quant;i++)
	{
		g.Transacao[(f.Inic+i)].Codigo=f.Transacao[(f.Inic+i)].Codigo;
		g.Transacao[(f.Inic+i)].Valor=f.Transacao[(f.Inic+i)].Valor;
	}
}
