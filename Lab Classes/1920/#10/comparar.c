#include <stdio.h>

int comparar(char *str1, char *str2){
  while(*str1 != '\0' && *str1 == *str2){
    str1++;
    str2++;
  }

  return (*str1 == *str2);
}

int main(){
  char *s = "teste";
  char *t = "teste";

  printf("%d\n", comparar(s, t));
  
  return 0;
}
