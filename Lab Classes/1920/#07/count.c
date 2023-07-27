#include <stdio.h>

int contar_maiores(int vec[], int size, int val){
  int count = 0;

  for(int i=0; i<size; i++)
    if(vec[i] > val)
      count++;

  return count;
}

int main(){
  int v[5] = {42, 86, 1, 23, 4};

  printf("%d\n", contar_maiores(v, 5, 42));
  
  return 0;
}
