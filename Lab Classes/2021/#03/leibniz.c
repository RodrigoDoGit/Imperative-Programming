#include <stdio.h>

double leibniz(int k){
  double sum = 0, y;

  for(int i=0; i<=k; i++){
    if(i % 2 == 0)
      y = 1;

    else
      y = -1;

    sum += y/(2*i + 1);
  }

  return 4 * sum;
}

int main(){
  int x;

  scanf("%d", &x);
  printf("%lf\n", leibniz(x));

  return 0;
}
