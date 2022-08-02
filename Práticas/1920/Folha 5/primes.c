#include <stdio.h>
#define FALSE 0
#define TRUE 1

int primo(int n){
  if(n <= 1)
    return FALSE;

  for(int d=2; d*d <= n; d++)
    if(n % d == 0)
      return FALSE;

  return TRUE;
}

int main(){
  int limit;

  printf("Limite superior? ");
  scanf("%d", &limit);

  for(int i=2; i<=limit; i++)
    if(primo(i))
      printf("%d ", i);

  printf("\n");

  return 0;
}
