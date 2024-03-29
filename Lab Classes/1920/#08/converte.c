#include <stdio.h>
#include <assert.h>

int decimal(char str[]){
  int value = 0;

  for(int i=0; str[i] != '\0'; i++){
    assert(str[i] >= '0' && str[i] <= '9');
    value = value * 10 + (str[i] - '0');
  }

  return value;
}

int main(){
  char s[] = "1234";

  printf("%d\n", decimal(s));
  
  return 0;
}
