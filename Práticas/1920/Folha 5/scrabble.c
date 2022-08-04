#include <stdio.h>
#include <ctype.h>

int scrabble(int ch){
  if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' || ch == 'O' || ch == 'R' || ch == 'T' || ch == 'S' || ch == 'U')
    return 1;

  if(ch == 'D' || ch == 'G')
    return 2;

  if(ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
    return 3;

  if(ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
    return 4;

  if(ch == 'K')
    return 5;

  if(ch == 'J' || ch == 'X')
    return 8;

  if(ch == 'Q' || ch == 'Z')
    return 10;

  else
    return 0;
}

int main(){
  int ch, sum = 0;

  while((ch = getchar()) != EOF)
    sum += scrabble(toupper(ch));

  printf("%d\n", sum);
  
  return 0;
}
