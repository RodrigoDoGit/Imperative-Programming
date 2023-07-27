#include <stdio.h>

void ler_seq(int x[], int n){
  for(int i=0; i<=n-1; i++){
    scanf("%d", &x[i]);
  }
}

void escrever_seq(int x[], int n){
  printf("%d", x[0]);

  for(int i=1; i<n; i++)
    printf(" %d", x[i]);

  printf("\n");
}

void copiar(int y[], int x[], int n){
  for(int i=0; i<n; i++)
    y[i] = x[i];
}

int media_arred(int x[], int n){
  int sum = 0, media;

  for(int i=0; i<n; i++)
    sum += x[i];

  media = ((double) sum)/n + 0.5;
  
  return media;
}

int main(){
  int m, n, mmax = -1, media;
  int seq[1000], max[1000];

  scanf("%d", &m);
  scanf("%d", &n);

  for(int i=0; i<m; i++){
    ler_seq(seq, n);
    media = media_arred(seq, n);

    if(media > mmax){
      mmax = media;
      copiar(max, seq, n);
    }
  }

  escrever_seq(max, n);
  printf("Media = %d\n", mmax);
}
