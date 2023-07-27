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

int median(int x, int y, int z){
  return (x+y+z) - max(x, y, z) - min(x, y, z);
}

int main(){
  int pvalor, svalor, tvalor, mediana;

  printf("Primeiro valor: ");
  scanf("%d", &pvalor);
  printf("Segundo valor: ");
  scanf("%d", &svalor);
  printf("Terceiro valor: ");
  scanf("%d", &tvalor);
  mediana = median(pvalor, svalor, tvalor);
  printf("Mediana: %d\n", mediana);

  return 0;
}
