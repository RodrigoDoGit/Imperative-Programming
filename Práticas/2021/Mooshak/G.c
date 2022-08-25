#include <stdio.h>

int main(){
  int n, x, first, second, sum = 0, count = 0;

  scanf("%d", &n);
  scanf("%d", &first);
  scanf("%d", &second);

  for(int i=2; i<n; i++){
    scanf("%d", &x);

    if((x != first && x != second) && (x % second == 0 || x > first)){
      sum += x;
      count++;
    } 
  }

  if(count == 0)
    printf("Resposta G - nenhum valor satisfaz\n");

  else
    printf("Resposta G - soma: %d\n", sum);
  
  return 0;
}
