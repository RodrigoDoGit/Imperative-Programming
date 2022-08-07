#include <stdio.h>
#include <ctype.h>

int algum_digito(char str[]){
  for(int i=0; str[i] != '\0'; i++)
    if(isdigit(str[i]))
      return 1;

  return 0;
}

int main(){
  char s[] = "osentidodavida";
  char t[] = "42";

  printf("%d\n", algum_digito(s));
  printf("%d\n", algum_digito(t));
  
  return 0;
}
