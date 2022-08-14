#include <stdio.h>

int abs(int x){
  if(x < 0)
    return -x;

  return x;
}

int main(){
  int v;

  scanf("%d", &v);
  printf("%d\n", abs(v));

  return 0;
}
