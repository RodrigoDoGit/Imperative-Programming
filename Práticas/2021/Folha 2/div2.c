#include <stdio.h>

int main(){
  int x, d, i = 0, count = 0;

  scanf("%d", &x);
  d = x;
  
  while(x != 0){
    scanf("%d", &x);

    if(x % d == 0)
      count++;

    i++;
  }

  if(count == i)
    printf("Todos multiplos de %d\n", d);

  else
    printf("Nem todos multiplos de %d\n", d);

  return 0;
}
