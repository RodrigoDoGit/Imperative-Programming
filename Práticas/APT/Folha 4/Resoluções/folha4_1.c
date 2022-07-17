// Resolução do exercicio 1 da Folha 4

#include <stdio.h>

void escrever_seq(int x[],int n);
int media_arred(int x[],int n);
void ler_seq(int x[],int n);
void copiar(int y[],int x[],int n);


void copiar(int y[],int x[],int n){
  for(int i=0; i < n ; i++)
    y[i] = x[i];

}

void ler_seq(int x[],int n){
  for(int i=0; i < n ; i++)
    scanf("%d",&x[i]);
}


void escrever_seq(int x[],int n) {
  printf("%d",x[0]);
  for(int i=1; i < n ; i++)
    printf(" %d",x[i]);
  putchar('\n');     // printf("\n");
}

int media_arred(int x[],int n){
  int soma = 0, i, media;
  for(i=0; i< n; i++)
    soma += x[i];

  media   =  ( (double) soma ) / n + 0.5;
  return media;
}

/*
int media_arred(int x[],int n){
  int soma = 0, i;
  for(i=0; i< n; i++)
    soma += x[i];

  //if (soma % n == 0 || 2*(soma % n) < n) return soma/n;
  if (2*(soma % n) < n) return soma/n;
  return soma/n  +  1;
}
*/

#define NMAX 1000

int main() {
  int atual[NMAX], seqmax[NMAX]; 
  int media,  mediamax = -1, n, m;

  scanf("%d %d", &m, &n);

  // int atual[n], seqmax[n];
  for (int i=0; i < m; i++) {
    ler_seq(atual,n);
    media = media_arred(atual,n);
    if (media > mediamax) {
      mediamax = media;
      copiar(seqmax,atual,n);
    }
  }

  escrever_seq(seqmax,n);
  printf("Media = %d\n",mediamax);

  return 0;
}
