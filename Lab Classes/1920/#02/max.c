#include <stdio.h>

int main(void){
  int a, b, c, maior;
  scanf("%d %d %d", &a, &b, &c); // ler 3 valores

  if(a >= b && a >= c)
    maior = a;

  else if(b >= a && b >= c)
    maior = b;

  else if(c >= a && c >= b)
    maior = c;

  printf("%d\n", maior); // imprimir o resultado
}
