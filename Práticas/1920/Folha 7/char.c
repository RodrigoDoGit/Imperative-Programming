#include <stdio.h>
#include <ctype.h>

int todos_letras(char str[]){
  for(int i=0; str[i] != '\0'; i++)
    if(!(isalpha(str[i])))
      return 0;

  return 1;
}

int main(){
  char s[] = "osentidodavida";
  char t[] = "42";

  printf("%d\n", todos_letras(s));
  printf("%d\n", todos_letras(t));
  
  return 0;
}
