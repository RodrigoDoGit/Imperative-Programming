#include <stdio.h>

void eliminar(char str[], char ch){
  int i = 0;

  while(str[i] != ch)
    i++;

  while(str[i] != '\0'){
    str[i] = str[i+1];
    i++;
  }
}

int main(){
  char s[] = "ABBA";

  eliminar(s, 'B');
  printf("%s\n", s);
  
  return 0;
}
