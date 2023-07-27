#include <stdio.h>
#include <stdlib.h>

int main(){
  for(int i=1; i<=100; i++){
    int val = rand() / (RAND_MAX/10 + 1);
    printf("%dº número: %d\n", i, val);
  }

  return 0;
}
