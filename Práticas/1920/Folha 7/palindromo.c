#include <stdio.h>

unsigned comprimento(char str[]){
  unsigned i = 0;

  while(str[i] != '\0')
    i++;

  return i;
}

int palindromo(char str[]){
  int i = 0, j = comprimento(str) - 1;
  
  while(i < j){
    if(str[i] != str[j])
      return 0;

    i++;
    j--;
  }

  return 1;
}

int main(){
  char s[] = "atoidiota";
  char t[] = "osentidodavida";

  printf("%d\n", palindromo(s));
  printf("%d\n", palindromo(t));
  
  return 0;
}
