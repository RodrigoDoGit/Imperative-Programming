#include <stdio.h>

void mdc(int a, int b){
  int i=1;
  printf("mdc(%d,%d) = ", a, b);

  while(a != b){
    if(a > b){
      i++;
      a -= b;
      printf("mdc(%d,%d)", a, b);
    }

    else{
      i++;
      b -= a;
      printf("mdc(%d,%d)", a, b);
    }

    printf(" = ");
  }

  printf("%d\n%d iterações\n", a, i);
}

int main(){
  int a, b;

  scanf("%d", &a);
  scanf("%d", &b);
  mdc(a, b);
  
  return 0;
}
