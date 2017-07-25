#include <iostream.h>
#include <conio.h>
#include "abb.h"

void main() {
  arvore t;
  celula *q;
  int x;

  inicializa_arvore(&t);
  do {
    clrscr();
    /* Busca elementos em uma árvore, removendo se 
       acha e inserindo se não acha, até digitarem 0. */
    cout<<"Nos nao terminais: "<<conta_nos(t.raiz)<<endl;
    cout << "Digite x: ";
    cin >> x;
    if ((q=busca(&t, x)) == NULL) {
      cout << endl << "Nao achou!" << endl;
      insere(&t, x);
    }
    else {
      cout << endl << "Achou!" << endl;
      remove(&t, q);
    }
    imprime(t.raiz, 0);
    cout<<"\nSoma total da arvore: "<<soma_arvore(t.raiz)<<endl;
    if(arvore_bb(t.raiz)==0)
           cout<<"Busca binaria: Sim"<<endl;
    else
           cout<<"Busca binaria: Nao"<<endl;
    if(arvore_eb(t.raiz)==0)
           cout<<"Estritamente binaria: Sim";
    else
           cout<<"Estritamente binaria: Nao";
    getch();
  } while (x != 0);
}
