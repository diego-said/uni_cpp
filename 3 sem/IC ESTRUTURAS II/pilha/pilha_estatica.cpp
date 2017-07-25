/*-------------------------------------------------------------------------
  Programa: pilha_estatica.cpp
  Descricao: este programa ilustra a implementacao de pilhas utilizando
             alocacao estatica de memoria (vetores).
             O objetivo do programa e armazenar uma pilha de cartas de
             baralho. Para tanto, cada carta tera as seguintes informacoes:
             - naipe : caracter que indica o naipe da carta
                     'c' = copas
                     'p' = paus
                     'o' = ouro
                     'e' = espada
             - numero : numero inteiro que indica a qual e a carta
                      1 = as
                      2 = 2
                      ...
                      11 = J (valete)
                      12 = Q (dama)
                      13 = K (rei)
  OBSERVACAO : este programa utiliza a sintaxe de passagem de parametros
             por referencia dalinguagem C++, e portanto, deve ser compilado
             como um programa em C++ (extensao .CPP ou .CC).
  -------------------------------------------------------------------------*/
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>

#include <iostream>

#define	FRACASSO	0
#define	SUCESSO	        1

using namespace std;

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
      Declaracao das estruturas de dados
 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

#define TAM 13          // quantidade maxima de elementos da pilha

// -------  Aqui definimos como e uma carta (um item da pilha) ---------
typedef	struct {
  char Naipe;
  int  Numero;
} TIPO_ITEM;

// ------- Aqui definimos como a estrutura PILHA --------------------
struct PILHA {
  TIPO_ITEM Carta[TAM];     // vetor de cartas
  int       Topo;           // indica onde esta o topo
};


/*--------------------------------------------------------------------------
		PROTOTIPOS DE FUNCOES
--------------------------------------------------------------------------*/
void	inicializa ( struct PILHA &p);
int	push       ( struct PILHA &p, TIPO_ITEM novaCarta );
int	pop        ( struct PILHA &p, TIPO_ITEM &cartaRetirada );
void	exibir     ( struct PILHA p );
void duplica(struct PILHA &p, PILHA &r);
// ---------------   funcao principal do programa ----------------------
int main ()
{
  // aqui declaramos uma ou mais variaveis do tipo pilha
  struct PILHA p1, p2;
  TIPO_ITEM    carta;
  int status, i;
  
  //    clrscr();
  inicializa (p1);
  
  for(i=0; i<13; i++) {
    carta.Numero = (i+1);
    carta.Naipe  = 'o';
    status = push (p1, carta);
    if (status == FRACASSO)
      cout << " Erro: pilha cheia" << endl;
    else
      exibir(p1);
  }
  duplica(p1,p2);
  cout<<"Pilha duplicada: "<<endl;
  exibir(p2);
  return 0;
}
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   Funcao		: Inicializa
   Finalidade	: esvaziar uma pilha
   Entrada		: p = uma variavel PILHA
   Retorno		: nenhum
   Observacoes	: faz o valor do campo 'topo' da pilha valer -1
   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void	inicializa (struct PILHA &p)
{
  p.Topo = -1;
}


/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   Funcao		: push
   Finalidade	: inclui uma nova carta no topo da pilha
   Entrada		: p = uma variavel PILHA
   novaCarta = contem informacoes sobre a nova carta que sera
   empilhada
   Retorno		: retorna o valor SUCESSO quando consegue empilhar
   "       "  "    FRACASSO "     a pilha estava cheia
   Observacoes	:
   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
int	push       ( struct PILHA &p, TIPO_ITEM novaCarta )
{
  if (p.Topo == TAM-1)
    return FRACASSO;
  else {
    p.Topo++;
    p.Carta[p.Topo].Naipe = novaCarta.Naipe;
    p.Carta[p.Topo].Numero= novaCarta.Numero;
    return SUCESSO;
  }
}

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   Funcao		: pop
   Finalidade	: retira a carta que est'a no topo da pilha
   Entrada		: p = uma variavel PILHA
   Saida           : deposita a carta retirada na variavel 'cartaRetirada'
   Retorno		: retorna o valor SUCESSO quando consegue desempilhar
   "       "  "    FRACASSO "     a pilha estava vazia
   Observacoes	:
   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
int	pop        ( struct PILHA &p, TIPO_ITEM &cartaRetirada )
{
  if (p.Topo == -1)
    return FRACASSO;
  else {
    cartaRetirada.Naipe = p.Carta[p.Topo].Naipe;
    cartaRetirada.Numero= p.Carta[p.Topo].Numero;
    p.Topo--;
    return SUCESSO;
  }
}

/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   Funcao		: exibir
   Finalidade	: exibir o conrteudo de uma pilha, comecando
   pelo elemento do topo
   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void	exibir     ( struct PILHA p )
{
	while(p.Topo!=-1)
	{
		cout<<"Naipe: "<<p.Carta[p.Topo].Naipe<<" Numero: "<<p.Carta[p.Topo].Numero<<endl;
		p.Topo--;
	}
	
}

void duplica(struct PILHA &p, PILHA &r)
{
	int i,tam;
	tam=p.Topo;
	r.Topo=p.Topo;
	for(i=0;i<=tam;i++)
	{
		r.Carta[i].Naipe=p.Carta[i].Naipe;
		r.Carta[i].Numero=p.Carta[i].Numero;
	}
}