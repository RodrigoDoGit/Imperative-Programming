#include <stdio.h>

void range(int vec[], unsigned size, int inicio, int incr){
  vec[0] = inicio;

  for(int i=1; i<=size; i++)
    vec[i] = inicio + i * incr;
}

int main(){
  int a[5];
  
  range(a, 5, 3, 2);

  for(int i=0; i<5; i++)
    printf("%d ", a[i]);

  printf("\n");
  
  return 0;
}
