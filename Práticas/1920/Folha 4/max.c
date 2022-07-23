#include <stdio.h>

int main(){
  int valor, max;
  scanf("%d", &valor);
  max = valor;

  while(valor != 0){
    scanf("%d", &valor);

    if(valor > max)
      max = valor;
  }

  printf("%d\n", max);
  
  return 0;
}
