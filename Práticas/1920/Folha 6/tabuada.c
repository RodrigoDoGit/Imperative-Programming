#include <stdio.h>
#include <stdlib.h>
#define QUESTS 10

int main(){
  int correct = 0, wrong = 0, x, y, ans;

  for(int i=1; i<=QUESTS; i++){
    x = 1 + rand() / (RAND_MAX/9 + 1);
    y = 1 + rand() / (RAND_MAX/9 + 1);

    printf("Quanto é %d x %d?\n", x, y);
    scanf("%d", &ans);

    if(ans == x*y){
      printf("Certo!\n");
      correct++;
    }

    else{
      printf("Errado! O resultado é %d.\n", x*y);
      wrong++;
    }
  }

  printf("Número de respostas certas: %d\n", correct);
  printf("Número de respostas erradas: %d\n", wrong);

  return 0;
}
