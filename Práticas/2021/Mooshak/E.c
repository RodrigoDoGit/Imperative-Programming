#include <stdio.h>

int main(){
  int x, verde = 0, azul = 0, amarelo = 0;

  scanf("%d", &x);

  if(x >= 1 && x <= 10)
    azul++;

  else if(x >= 11 && x <= 23)
    verde++;

  else if(x >= 24 && x <= 40)
    amarelo++;

  while(x != -1){
    scanf("%d", &x);
    
    if(x >= 1 && x <= 10)
      azul++;
    
    else if(x >= 11 && x <= 23)
      verde++;
    
    else if(x >= 24 && x <= 40)
      amarelo++;
  }

  printf("azul = %d\n", azul);
  printf("amarelo = %d\n", amarelo);
  printf("verde = %d\n", verde);

  return 0;
}
