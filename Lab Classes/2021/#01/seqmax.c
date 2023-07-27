#include <stdio.h>

int main(){
  int x, max;

  scanf("%d", &x);
  max = x;
  
  while(x != 0){
    scanf("%d", &x);

    if(x > max)
      max = x;
  }

  printf("%d\n", max);
  
  return 0;
}
