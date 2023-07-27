#include <stdio.h>
#include <math.h>

int main(){
  int a, b, c;
  float x, y;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  x = (float)(-b + sqrt(b*b - 4*a*c))/2*a;
  y = (float)(-b - sqrt(b*b - 4*a*c))/2*a;

  if(sqrt(b*b - 4*a*c) < 0)
    printf("sem raizes\n");

  else{
    if(x == y)
      printf("raiz dupla\n");

    else
      printf("duas raizes distintas\n");
  }
    
  return 0;
}
