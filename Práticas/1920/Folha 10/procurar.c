#include <stdio.h>

char *procurar(char *str, char ch){
  while(*str != '\0'){
    if(*str == ch)
      return str;

    str++;
  }

  return NULL;
}

int main(){
  char *s = "Osentidodavida";

  printf("%p\n", procurar(s, 'i'));
  
  return 0;
}
