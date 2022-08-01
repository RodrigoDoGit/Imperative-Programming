#include <stdio.h>

int main(){
  int num, d = 2;

  printf("Número inteiro: ");
  scanf("%d", &num);
  printf("%d : ", num);

  while(num != 0){
    if(num % d != 0)
      d++;

    else{
      num /= d;
      printf("%d ", d);

      if(num == 1)
	break;
    }
  }

  printf("\n");

  return 0;
}
