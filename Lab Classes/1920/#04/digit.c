#include <stdio.h>

void digits(int n){
  if(n/2 != 0)
    digits(n/2);

  printf("%d", n%2);
}

int main(){
  int valor;

  scanf("%d", &valor);
  digits(valor);
  printf("\n");
  
  return 0;
}
