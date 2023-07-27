#include <stdio.h>

int main(){
  int x, f, s, count = 0;

  scanf("%d", &x);
  f = x;
  scanf("%d", &x);
  s = x;

  if(f != 0 && s != 0){
    count++;
    
    if(f == s)
      count++;
  }

  if(f == 0 || s == 0)
    printf("Nao aplicavel\n");

  while(x != 0){
    scanf("%d", &x);

    if(x == s)
      count++;
  }

  if(count > 0)
    printf("Ocorrencias = %d\n", count);

  return 0;
}
