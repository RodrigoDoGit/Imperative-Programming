#include <stdio.h>

#define MAXCHARS 100

typedef struct a {
  int numero, ano, mes, dia;
  char nome[MAXCHARS], morada[MAXCHARS];
} AMIGO;


void procurar_mes(AMIGO amigos[], int n, int mesp);
// para imprimir o nome e o dia do aniversario dos amigos
// que fazem anos no mes dado em mesp


void procurar_mes(AMIGO amigos[], int n, int mesp) {
  for(int i=0;i<n; i++)
    if (amigos[i].mes == mesp)
      printf("%s --- dia %d\n",amigos[i].nome, amigos[i].dia);
}


int main() {
  AMIGO dados[100] = {
     {917758877, 2002, 1, 12, "Manuel", "Porto"}, 
     {917758880, 2002, 2, 10, "Maria", "Porto"},
     {917751101, 2005, 2, 14, "Sara", "Braga"},
     {934522000, 1998, 4, 24, "Gabriel", "Aveiro"},
     {934440001, 2007, 10, 1, "Jose", "Porto"},
     {934441000, 2010, 1, 11, "Rita", "Lisboa"}
  };

  procura_mes(dados, 6, 1);   // Janeiro

  return 0;
}






// Tipo definido   struct a
//  AMIGO  pode ser usado como designação para  struct a

/* 
// Definição alternativa

struct a {
  int numero, ano, mes, dia;
  char nome[MAXCHARS], morada[MAXCHARS];
};

typedef struct a AMIGO;

*/






/*
// usar typedef para dar outros nomes a tipos básicos

typedef int INTEIRO;

typedef char CARACTER;

CARATER c;

INTEIRO a, b;
*/

