#include <stdio.h>

void select_sort(int vec[], int n){
  int i, j;

  for(i = 0; i < n; i++){
    int imin = i; // índice inicial do mínimo

    for(j = i+1; j < n; j++){
      if(vec[j] > vec[imin]) imin = j;
    }

    // trocar o mínimo com vec[i]
    if(imin != i){
      int temp = vec[i];
      vec[i] = vec[imin];
      vec[imin] = temp;
    }
  }
}

int main(){
  int v[5] = {0, -3, 1, 42, 5};
  select_sort(v, 5);

  for(int i=0; i<5; i++)
    printf("%d ", v[i]);

  printf("\n");
  
  return 0;
}
