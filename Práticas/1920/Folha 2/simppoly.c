#include <stdio.h>

int main(){
  float x, res;

  scanf("%f", &x);
  res = ((((3*x + 2)*x-5)*x-1)*x+7)*x-6;
  printf("%f\n", res);

  return 0;
}
