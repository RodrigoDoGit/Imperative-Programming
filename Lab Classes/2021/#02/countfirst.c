#include <stdio.h>

int main(){
  int x, f, count = 0;

  scanf("%d", &x);

  if(x == 0)
    printf("0\n");

  if(x != 0){
     f = x;
     count++;
  }

  while(x != 0){
    scanf("%d", &x);

    if(x == f)
      count++;
  }

  if(count > 0)
    printf("%d\n", count);

  return 0;
}
