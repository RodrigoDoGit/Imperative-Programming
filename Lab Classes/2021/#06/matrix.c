#include <stdio.h>
#define NMAX 50

void imprimeLinha(int mat[][NMAX], int k, int n){
  for(int i=0; i<n; i++)
    printf("%d ", mat[k][i]);

  printf("\n");
}

int maximo(int mat[][NMAX], int m, int n){
  int max = mat[0][0];

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++)
      if(mat[i][j] > max)
	max = mat[i][j];
  }

  return max;
}

int main(){
  int v[][NMAX] = {{42, 1, 33}, {7, 23, 31}, {65, 86, 42}};

  imprimeLinha(v, 0, 2);
  printf("%d\n", maximo(v, 3, 3));
  
  return 0;
}
