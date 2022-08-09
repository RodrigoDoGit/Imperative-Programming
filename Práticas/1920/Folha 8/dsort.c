#include <stdio.h>

void sort_desc(int vec[], int n){
  int i, j;

  for(i = 1; i < n; i++){
    int x = vec[i];

    j = i-1;
    
    while(j>=0 && vec[j] < x){
      vec[j+1] = vec[j];
      j--;
    }

    vec[j+1] = x;
  }
}

int main(){
  int v[5] = {3, 2, 1, 3, 5};
  sort_desc(v, 5);

  for(int i=0; i<5; i++)
    printf("%d ", v[i]);

  printf("\n");
  
  return 0;
}
