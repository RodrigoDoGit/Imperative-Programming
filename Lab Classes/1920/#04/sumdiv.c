#include <stdio.h>
#define FALSE 0
#define TRUE 1

int divisor(int n, int d){
  if(n % d == 0)
    return TRUE;

  return FALSE;
}

int soma_divisores(int n){
  int soma = 0;

  for(int i=1; i<n; i++){
    if(divisor(n, i) == TRUE)
      soma += i;
  }

  return soma;
}

int main(){
  int valor, soma;

  scanf("%d", &valor);
  soma = soma_divisores(valor);
  printf("%d\n", soma);
  
  return 0;
}
