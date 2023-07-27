#include <stdio.h>

int max(int x, int y, int z){
  if(x >= y && x >= z)
    return x;

  else if(y >= x && y >= z)
    return y;
  
  return z;
}

int min(int x, int y, int z){
  if(x <= y && x <= z)
    return x;

  else if(y <= x && y <= z)
    return y;
  
  return z;
}

int main(){
  int pvalor, svalor, tvalor, maximum, minimum, amp;

  printf("Primeiro valor: ");
  scanf("%d", &pvalor);
  printf("Segundo valor: ");
  scanf("%d", &svalor);
  printf("Terceiro valor: ");
  scanf("%d", &tvalor);
  
  minimum = min(pvalor, svalor, tvalor);
  maximum = max(pvalor, svalor, tvalor);
  amp = maximum - minimum;
  printf("Valor máximo: %d\n", maximum);
  printf("Valor mínimo: %d\n", minimum);
  printf("Amplitude: %d\n", amp);
}
