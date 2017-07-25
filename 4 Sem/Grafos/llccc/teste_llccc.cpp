#include <iostream.h>
#include "llccc.h"


void main() {
  LLCCC L;
  elemento x;

  cria_lista(&L);
  do {
    cout << "Digite elemento: ";
    cin >> x;
	if (x!=0) insere_inicio(&L, x);
  } while (x != 0);
  imprime(&L);
  remove_inicio(&L);
  imprime(&L);
  remove_fim(&L);
  imprime(&L);
  finaliza(&L);
}
