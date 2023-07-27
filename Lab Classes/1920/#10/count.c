#include <stdio.h>

int contar_espacos(char *str){
  int espacos = 0;

  while(*str != '\0'){
    if(*str == ' ')
      espacos++;

    str++;
  }

  return espacos;
}

int main(){
  char *s = "Frase de teste";

  printf("%d\n", contar_espacos(s));
  
  return 0;
}
