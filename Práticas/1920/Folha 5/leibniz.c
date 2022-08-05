#include <stdio.h>
#include <math.h>

double aprox_pi(int n){
  double sum = 0, y;

  for(int i=0; i<=n; i++){
    if(i % 2 == 0)
      y = 1;

    else
      y = -1;

    sum += y/(2*i + 1);
  }

  return 4 * sum;
}

int main(){
  int n;

  scanf("%d", &n);
  printf("Aproximação do valor de PI com %d termos: %lf\n", n, aprox_pi(n));
  printf("Valor da constante: %lf\n", M_PI);
  
  return 0;
}
