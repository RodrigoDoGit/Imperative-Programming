#include <stdio.h>

int main(){
  int count = 0, ch, blank = 1;

  while((ch = getchar()) != EOF){
    if(ch == ' ' || ch == '\t' || ch == '\n')
      blank = 1;

    if(ch != ' ' && ch != '\t' && ch != '\n'){
      if(blank == 1){
	count++;
	blank = 0;
      }
    }
  }

  printf("%d\n", count);

  return 0;
}
