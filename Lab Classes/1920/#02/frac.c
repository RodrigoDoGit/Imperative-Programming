#include <stdio.h>

int main(){
  int num, denom, snum, sdenom;

  printf("Primeiro numerador? ");
  scanf("%d", &num);
  printf("Primeiro denominador? ");
  scanf("%d", &denom);
  printf("Segundo numerador? ");
  scanf("%d", &snum);
  printf("Segundo denominador? ");
  scanf("%d", &sdenom);

  if(denom == sdenom){
    if((num+snum) % denom == 0)
      printf("%d/%d + %d/%d = %d\n", num, denom, snum, sdenom, (num+snum)/denom);
      else
	printf("%d/%d + %d/%d = %d/%d\n", num, denom, snum, sdenom, num+snum, denom);
  }

  else{
    if((num*sdenom+snum*denom) % (denom*sdenom) == 0)
      printf("%d/%d + %d/%d = %d\n", num, denom, snum, sdenom, (num*sdenom+snum*denom)/(denom*sdenom));

    else
      printf("%d/%d + %d/%d = %d/%d\n", num, denom, snum, sdenom, num*sdenom+snum*denom, denom*sdenom);
  }
  
  return 0;
}
