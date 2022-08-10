#include <stdio.h>
#include <assert.h>

int ordenado(int vec[], int size){
  for(int i=0; i<size; i++)
    if(!(vec[i] <= vec[i+1]))
      return 0;

  return 1;
}

int comprimento(int vec[], int size){
  for(int i=0; i<=size; i++)
    if(!(vec[i] <= vec[i+1]))
      return 0;

  return 1;
}

void inserir(int vec[], int n, int x){
  assert(ordenado(vec, n));
  
  int j = n-1;
  
  while(j>=0 && vec[j]>x){
    vec[j+1] = vec[j];
    j--;
  }

  vec[j+1] = x;

  assert(ordenado(vec, n) && comprimento(vec, n));
}

int main(){
  int v[100] = {0, 1, 42, 84, 97};

  inserir(v, 5, 4);

  for(int i=0; i<6; i++)
    printf("%d ", v[i]);

  printf("\n");
  
  return 0;
}
