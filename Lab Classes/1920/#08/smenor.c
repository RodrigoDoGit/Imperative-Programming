#include <stdio.h>

int segundo_menor(int vec[], int size){
  int i, j;

  for(i = 0; i < 2; i++){
    int imin = i; // índice inicial do mínimo

    for(j = i+1; j < size; j++){
      if(vec[j] < vec[imin]) imin = j;
    }

    // trocar o mínimo com vec[i]
    if(imin != i){
      int temp = vec[i];
      vec[i] = vec[imin];
      vec[imin] = temp;
    }
  }

  return vec[1];
}

int main(){
  int v[5] = {3, 0, 42, 1, 5};

  printf("%d\n", segundo_menor(v, 5));
  
  return 0;
}
