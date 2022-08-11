#include <stdio.h>

int main(){
  int a, b, c;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  
  if(a > 0 && b > 0 && c > 0 && a < b+c && b < a+c && c < a+b){
    if(a == b && a == c)
      printf("(%d,%d,%d) define triangulo equilatero\n", a, b, c);

    else{
      if(a == b || a == c || b == c)
	printf("(%d,%d,%d) define triangulo isosceles\n", a, b, c);

      else
	printf("(%d,%d,%d) define triangulo escaleno\n", a, b, c);
    }
  }

  else
    printf("(%d,%d,%d) nao define triangulo\n", a, b, c);

  return 0;
}
