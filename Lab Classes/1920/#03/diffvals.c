#include <stdio.h>

int main(){
  int val1, val2, val3;

  printf("Primeiro valor: ");
  scanf("%d", &val1);
  printf("Segundo valor: ");
  scanf("%d", &val2);
  printf("Terceiro valor: ");
  scanf("%d", &val3);

  if(val1 == val2 && val2 == val3)
    printf("Resposta: 1 valor distinto.\n");

  else if(val1 == val2 || val1 == val3 || val2 == val3)
    printf("Resposta: 2 valores distintos.\n");

  else
    printf("Resposta: 3 valores distintos.\n");

  return 0;
}
