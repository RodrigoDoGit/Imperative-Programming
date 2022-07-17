

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NAIPES 4
#define VALORES 13

void imprime_valor(int valor);
void imprime_naipe(int naipe);
void imprime_carta(int naipe, int valor);



void imprime_naipe(int naipe)
{
  switch(naipe) {
  case 0: printf("PAUS"); 
    break;
  case 1: printf("ESPADAS");
    break;
  case 2: printf("COPAS");
    break;
  case 3: printf("OUROS");
    break;
  default: printf("naipe inválido");  // erro
  }
}


void imprime_carta(int naipe, int valor)
{
  imprime_valor(valor);
  printf(" de ");
  imprime_naipe(naipe);
  printf("\n");
}


void imprime_valor(int valor)
{
  switch(valor) {
  case 0:  printf("A");
    break;
  case 1:  printf("J");
    break;
  case 11: printf("Q");
    break;
  case 12: printf("K");
    break;
  default: printf("%d", valor);
    // valores 2, 3 .. 10
  }
}



int main(void) {
  int cartas[NAIPES][VALORES] = { 0 };
  int num; // número de cartas a sortear

  srand((unsigned)time(NULL));
  // inicializar a "semente" de aleatórios

  printf("Quantas cartas? ");
  scanf("%d", &num);
  
  while(num > 0) {
    int valor, naipe;
    naipe = rand() % NAIPES;
    valor = rand() % VALORES;
    // verificar se a carta ainda não saiu

    if(cartas[naipe][valor] == 0)  {
      imprime_carta(naipe, valor);
      // marcar a carta
      cartas[naipe][valor] = 1;
      num--;  // menos uma carta a sortear
    }
  }

  return 0;
}

