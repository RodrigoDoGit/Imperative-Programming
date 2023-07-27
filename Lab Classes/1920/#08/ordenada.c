#include <stdio.h>

int ordenada(int vec[], int size){
  for(int i=0; i<=size-2; i++)
    if(!(vec[i] <= vec[i+1]))
      return 0;

  return 1;
}

int main(){
  int v[5] = {1, 3, 3, 5, 6};
  int t[5] = {1, 3, 2, 5, 6};

  printf("%d\n", ordenada(v, 5));
  printf("%d\n", ordenada(t, 5));
  
  return 0;
}
