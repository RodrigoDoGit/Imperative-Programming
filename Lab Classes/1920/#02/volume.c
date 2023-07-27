#include <stdio.h>

int main(){
  int raio;
  printf("Introduza o raio da esfera:\n");
  scanf("%d", &raio);
  int rcubo = raio*raio*raio;

  float volume = (4.0/3.0) * rcubo;

  printf("O volume da esfera é: %f\n", volume);
  
  return 0;
}
