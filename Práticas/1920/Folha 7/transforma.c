#include <stdio.h>
#include <ctype.h>

void capitalizar(char str[]){
  for(int i=0; str[i] != '\0'; i++)
    if(isalpha(str[i]))
      str[i] = toupper(str[i]);
}

int main(){
  char s[] = "42, the answer to life, the universe, and everything";

  capitalizar(s);
  printf("%s\n", s);

  return 0;
}
