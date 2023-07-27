#include <stdio.h>

int main(){
  int x, maior, menor;

  scanf("%d", &x);
  maior = x;
  menor = x;

  while(x != 0){
    scanf("%d", &x);

    if(x < menor && x != 0)
      menor = x;

    if(x > maior && x != 0)
      maior = x;
  }

  if(maior == menor)
    printf("Maior = Menor = %d\n", maior);

  else
    printf("Maior = %d e Menor = %d\n", maior, menor);

  return 0;
}
