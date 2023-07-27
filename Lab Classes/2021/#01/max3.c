#include <stdio.h>

int main(){
  int a, b, c, max;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if(a > b)
    max = a;

  if(b > a)
    max = b;

  if(c > max)
    max = c;

  printf("%d\n", max);

  return 0;
}
