#include <stdio.h>
#define NMAX 5

void repeteLinha(int mat[][NMAX], int m, int n, int i){
  for(int l=m-1; l>=1; l--)
    for(int j=0; j<n; j++)
      mat[l+1][j] = mat[l][j];
}

void repeteColuna(int mat[][NMAX], int m, int n, int j){
  for(int c=n-1; c>=j; c--)
    for(int i=0; i<m; i++)
      mat[i][c+1] = mat[i][c];
}

int main(){
  int v[][NMAX] = {{42, 1, 2, -15, 0}, {3, 19, 27, 86, 4}, {13, 20, 34, 57, 16}};

  repeteLinha(v, 2, 5, 1);
  repeteColuna(v, 2, 5, 2);

  for(int i=0; i<4; i++){
    for(int j=0; j<6; j++)
      printf("%d ", v[i][j]);

    printf("\n");
  }
  
  return 0;
}
