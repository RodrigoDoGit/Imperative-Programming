#include <stdio.h>
#define FALSE 0
#define TRUE 1

int bissexto(int n){
  if((n % 400 == 0) || ((n % 4 == 0) || ((n % 100 == 0) && (n % 400 != 0))))
     return TRUE;
  
  return FALSE;
}

int main(){
  int ano, res;

  scanf("%d", &ano);
  res = bissexto(ano);
  printf("%d\n", res);

  return 0;
}
