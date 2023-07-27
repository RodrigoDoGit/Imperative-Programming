#include <stdio.h>

int potencia(int x, int n){
  int potencia = 1;

  for(int i=1; i<=n; i++)
    potencia = potencia * x;

  return potencia;
}

int main(){
  int valor, n ,pot;

  scanf("%d", &valor);
  scanf("%d", &n);
  pot = potencia(valor, n);
  printf("%d\n", pot);

  return 0;
}
