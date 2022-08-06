#include <stdio.h>
#include <ctype.h>

int main(){
  int ch, chars[26] = {0};

  while((ch = getchar()) != '\n'){
    ch = toupper(ch);
    ch = ch - 'A';
    chars[ch]++;
  }

  for(int i=0; i<26; i++)
    printf("%c: %d\t", i+65, chars[i]);

  putchar('\n');

  return 0;
}
