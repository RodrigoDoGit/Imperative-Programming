#include <stdio.h>
#include <math.h>

int fact(int n){
  int res = 1;

  while(n > 0){
    res *= n;
    n--;
  }

  return res; 
}

double cosseno(double x, int k){
  double sum = 0, y;

  for(int i=0; i<=k; i++){
    if(i % 2 == 0)
      y = 1;

    else
      y = -1;

    sum += (double)(y/fact(2*i)) * pow(x, 2*i);
  }

  return sum;
}

int main(){
  double val;
  int n;

  scanf("%lf", &val);
  scanf("%d", &n);

  printf("%lf\n", cosseno(val, n));
  printf("%lf\n", cos(val));

  return 0;
}
