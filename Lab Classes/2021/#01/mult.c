#include <stdio.h>

int main(){
  int n, x, count = 0;

  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d", &x);

    if((x % 2 == 0 && x % 3 != 0) || (x % 2 != 0 && x % 3 == 0))
      count++;
  }

  printf("Numero de multiplos ou de 2 ou de 3 = %d\n", count);

  return 0;
}
