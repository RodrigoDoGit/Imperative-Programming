#include <stdio.h>

int filtrar_positivos(int vec[], int size){
  int k = 0;

  for(int i=0; i<size; i++)
    if(vec[i] > 0)
       vec[k++] = vec[i];

  return k;
  
}

int main(){
  int v[5] = {-1, 42, 5, 0, -86};

  int size = filtrar_positivos(v, 5);
  printf("%d\n", size);

  for(int i=0; i<size; i++)
    printf("%d ", v[i]);

  printf("\n");
  
  return 0;
}
