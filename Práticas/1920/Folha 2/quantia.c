#include <stdio.h>

int main(){
  int quantia;

  printf("Quantia em EUR? ");
  scanf("%d", &quantia);

  int vinte, dez, cinco, um, resto, resto1, resto2;

  vinte = quantia / 20;
  resto = quantia - 20 * vinte;
  dez = resto / 10;
  resto1 = resto - 10 * dez;
  cinco = resto1 / 5;
  resto2 = resto1 - 5 * cinco;
  um = resto2;

  printf("notas EUR 20: %d\n", vinte);
  printf("notas EUR 10: %d\n", dez);
  printf("notas EUR 5: %d\n", cinco);
  printf("moedas EUR 1: %d\n", um);
  
  return 0;
}
