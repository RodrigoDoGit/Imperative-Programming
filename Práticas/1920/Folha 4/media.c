#include <stdio.h>

int main(){
  float valor, media, soma = 0, count = 0;
  scanf("%f", &valor);

  do{
    scanf("%f", &valor);

    if(valor != 0){
      soma += valor;
      count++;
    }
  }while(valor != 0);

  media = soma/count;
  printf("%f\n", media);
  
  return 0;
}
