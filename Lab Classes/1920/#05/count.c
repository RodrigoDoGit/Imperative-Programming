#include <stdio.h>

int main(){
  int count = 0, ch;

  while((ch = getchar()) != '\n')
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
      count++;

  printf("A frase contém %d letra(s)\n", count);

  return 0;
}
