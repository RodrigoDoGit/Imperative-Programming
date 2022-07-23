#include <stdio.h>

int mdc(int a, int b){
  while (a != b) {
    if(a > b)
      a = a - b;

    else
      b = b - a;
  }
  
  return a; 
}

int main(){
  int num, denom, m;

  printf("Numerador: ");
  scanf("%d", &num);
  printf("Denominador: ");
  scanf("%d", &denom);
  m = mdc(num, denom);
  printf("A fração %d/%d é equivalente a %d/%d\n", num, denom, num/m, denom/m);
  
  return 0;
}
