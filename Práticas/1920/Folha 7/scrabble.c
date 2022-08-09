#include <stdio.h>

int points(char c){
  if(c == 'A' || c == 'E' || c == 'I' || c == 'L' || c == 'N' || c == 'O' || c == 'R' || c == 'T' || c == 'S' || c == 'U')
    return 1;

  else if(c == 'D' || c == 'G')
    return 2;

  else if(c == 'B' || c == 'C' || c == 'M' || c == 'P')
    return 3;

  else if(c == 'F' || c == 'H' || c == 'v' || c == 'W' || c == 'Y')
    return 4;

  else if(c == 'K')
    return 5;

  else if(c == 'J' || c == 'X')
    return 8;

  else
    return 10;
}

int scrabble(char str[]){
  int sum = 0;

  for(int i=0; str[i] != '\0'; i++)
    sum += points(str[i]);

  return sum;
}

int main(){
  printf("%d\n", scrabble("PITFALL"));
  
  return 0;
}
