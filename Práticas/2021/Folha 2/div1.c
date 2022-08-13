#include <stdio.h>

int main(){
  int d, x, count = 0, count1 = 0;

  scanf("%d", &x);
  d = x;

  while(x != 0){
    scanf("%d", &x);

    if(x % d == 0)
      count++;

    if(x % d != 0)
      count1++;
  }

  if((count == 0 && count1 > 0) || (count > 0 && count1 > 0) || (count == 0 && count1 == 0))
    printf("Nem todos multiplos de %d\n", d);

  if(count > 0 && count1 == 0)
    printf("Todos multiplos de %d\n", d);

  return 0;
}
