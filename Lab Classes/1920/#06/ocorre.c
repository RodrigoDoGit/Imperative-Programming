#include <stdio.h>

int ocorre(int vec[], int size, int val){
  for(int i=0; i<size; i++)
    if(vec[i] == val)
      return 1;

  return 0;
}

int main(){
  int a[5] = {3,5,7,9,11};

  printf("%d\n", ocorre(a, 5, 1));
  printf("%d\n", ocorre(a, 5, 11));
  
  return 0;
}
