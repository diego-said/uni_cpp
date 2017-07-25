#include <iostream.h>
#include "listaap.h"


void main() {
  lista L;
  int x;

  cria_lista(&L);
  do {
    cout << "Digite elemento: ";
    cin >> x;
	if (x!=0) insere(&L, x);
  } while (x != 0);
  imprime(&L);
  while (!vazia(&L)) {
	remove(&L);
    imprime(&L);
  }
  finaliza(&L);
}
