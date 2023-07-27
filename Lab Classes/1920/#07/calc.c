#include <stdio.h>

int num(char s){
  return s - '0';
}

int calc(char str[]){
  if(str[1] == '+')
    return num(str[0]) + num(str[2]);

  else if(str[1] == '-')
    return num(str[0]) - num(str[2]);

  else if(str[1] == '*')
    return num(str[0]) * num(str[2]);

  else if(str[1] == '/')
    return num(str[0]) / num(str[2]);

  else
    return num(str[0]) % num(str[2]);
}

int main(){
  printf("%d\n", calc("5-3"));
  printf("%d\n", calc("2*3"));

  return 0;
}
