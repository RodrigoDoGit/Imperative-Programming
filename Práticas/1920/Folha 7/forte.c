#include <stdio.h>
#include <ctype.h>
#include <string.h>

int forte(char str[]){
  if(strlen(str) < 6)
    return 0;

  int lower = 0, upper = 0, digits = 0;
  
  for(int i=0; str[i] != '\0'; i++){
    if(islower(str[i]))
      lower++;

    if(isupper(str[i]))
      upper++;

    if(isdigit(str[i]))
      digits++;
  }

  if(lower == 0 || upper == 0 || digits == 0)
    return 0;
  
  return 1;
}

int main(){
  char s[] = "Abr4cadabra";
  char t[] = "Apric0t";
  char w[] = "Ub40";
  char u[] = "POLICE";

  printf("%d\n", forte(s));
  printf("%d\n", forte(t));
  printf("%d\n", forte(w)); 
  printf("%d\n", forte(u));

  return 0;
}
