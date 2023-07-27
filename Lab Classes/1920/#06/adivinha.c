#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, try, tries = 0;

  num = 1 + rand() / (RAND_MAX/1000 + 1);
  scanf("%d", &try);

  while(try != num){
    tries++;

    if(try > num)
      printf("Demasiado alto! Tente novamente.\n");

    else if(try < num)
      printf("Demasiado baixo! Tente novamente\n");

    scanf("%d", &try);
  }

  printf("Acertou em %d tentativas!\n", tries);
  
  return 0;
}
