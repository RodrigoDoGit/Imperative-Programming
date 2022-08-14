#include <stdio.h>

void posicao(int a, int b, int c, int d){
  if(a == c && b == d)
    printf("coincidentes\n");

  else if(a < c && b == d)
    printf("esquerda\n");

  else if(a > c && b == d)
    printf("direita\n");

  else if(a == c && b < d)
    printf("abaixo\n");

  else if(a == c && b > d)
    printf("acima\n");

  else if(a < c && b > d)
    printf("esquerda acima\n");

  else if(a < c && b < d)
    printf("esquerda abaixo\n");

  else if(a > c && b > d)
    printf("direita acima\n");

  else if(a > c && b < d)
    printf("direita abaixo\n");
}

int main(){
  int x, y, w, z;

  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &w);
  scanf("%d", &z);
  posicao(x, y, w, z);
  
  return 0;
}
