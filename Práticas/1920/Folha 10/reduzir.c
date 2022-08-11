#include <stdio.h>

int mdc(int a, int b){
  int r;

  while(b != 0){
    r = a%b;
    a = b;
    b = r;
  }

  return a;
}

void reduzir(int *pnum, int *pdenom){
  int m = mdc(*pnum, *pdenom);

  *pnum /= m;
  *pdenom /= m;
}

int main(){
  int num = 3, denom = 9;

  printf("%d/%d = ", num, denom);
  reduzir(&num, &denom);
  printf("%d/%d\n", num, denom);

  return 0;
}
