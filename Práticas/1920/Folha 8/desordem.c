#include <stdio.h>

int desordem(int vec[], int size){
  int sum = 0;

  for(int i=0; i<=size-2; i++)
    if(vec[i] > vec[i+1])
      sum++;

  return sum;
}

int main(){
  int v[6] = {3, 1, 2, 2, 4, 0};
  int t[6] = {6, 5, 4, 3, 2, 1};

  printf("%d\n", desordem(v, 6));
  printf("%d\n", desordem(t, 6));
  
  return 0;
}
