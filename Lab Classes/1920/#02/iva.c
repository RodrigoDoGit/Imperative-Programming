#include <stdio.h>

int main(){
  float valor, nvalor;

  printf("Valor sem IVA? ");
  scanf("%f", &valor);

  nvalor = 0.23*valor + valor;
  printf("Valor com IVA: %.2f\n", nvalor);

  return 0;
}
