#include <stdio.h>

int main(){
  int plado, slado, tlado;

  printf("Primeiro lado: ");
  scanf("%d", &plado);
  printf("Segundo lado: ");
  scanf("%d", &slado);
  printf("Terceiro lado: ");
  scanf("%d", &tlado);

  if(plado == slado && plado == tlado)
    printf("Triângulo equilátero.\n");
  
  else{
    if(plado == slado || plado == tlado || slado == tlado)
      printf("Triângulo isósceles.\n");
    
    else
      printf("Triângulo escaleno.\n");
  }
  
  return 0;
}
