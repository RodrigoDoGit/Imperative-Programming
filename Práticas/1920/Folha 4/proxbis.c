#include <stdio.h>
#define FALSE 0
#define TRUE 1

int bissexto(int n){
  if((n % 400 == 0) || ((n % 4 == 0) || ((n % 100 == 0) && (n % 400 != 0))))
     return TRUE;
  
  return FALSE;
}

int prox_bissexto(int n){
  if(bissexto(n) == 1)
    return n;

  int res = bissexto(n);
  
  while(res == 0){
    n++;
    res = bissexto(n);
  }

  return n;
}

int main(){
  int ano, prox;

  scanf("%d", &ano);
  prox = prox_bissexto(ano);
  printf("%d\n", prox);
  
  return 0;
}
