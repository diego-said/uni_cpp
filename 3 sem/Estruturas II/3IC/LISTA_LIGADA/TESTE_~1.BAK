#include <iostream.h>
#include <conio.h>
#include "listaap.h"


void main() {
  lista L;
  int x;
  clrscr();
  cria_lista(&L);
  do {
    cout << "Digite elemento: ";
    cin >> x;
	if (x!=0) insere(&L, x);
  } while (x != 0);
  insere_pos(&L,7,2);
  remove_pos(&L,4);
  cout<<"Tamanho da lista: "<<total(&L)<<endl;
  imprime(&L);
  while (!vazia(&L)) {
	remove(&L);
    imprime(&L);
  }
  getch();
  finaliza(&L);
}
