#include <stdio.h>

void select_sort(int vec[], int n){
  int i, j;

  for(i = 0; i < n; i++){
    int imin = i; // índice inicial do mínimo

    for(j = i+1; j < n; j++){
      if(vec[j] < vec[imin]) imin = j;
    }

    // trocar o mínimo com vec[i]
    if(imin != i){
      int temp = vec[i];
      vec[i] = vec[imin];
      vec[imin] = temp;
    }
  }
}

void insert_sort(int vec[], int n){
  int i, j;

  for(i = 1; i < n; i++){
    int x = vec[i];

    j = i-1;

    while(j>=0 && vec[j] > x){
      vec[j+1] = vec[j];
      j--;
    }

    vec[j+1] = x;
  }
}

int main(){
  int n = 0, v[1000];

  do{
    scanf("%d", &v[n]);
    n++;
  }while(v[n-1] != 0);

  select_sort(v, n);
  insert_sort(v, n);

  for(int i=0; i<n; i++)
    printf("%d ", v[i]);

  printf("\n");
  
  return 0;
}
