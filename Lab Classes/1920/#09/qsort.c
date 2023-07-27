#include <stdio.h>

int max(int vec[], int x, int y, int z){
  if(vec[x] >= vec[y] && vec[x] >= vec[z])
    return x;

  else if(vec[y] >= vec[x] && vec[y] >= vec[z])
    return y;
  
  return z;
}

int min(int vec[], int x, int y, int z){
  if(vec[x] <= vec[y] && vec[x] <= vec[z])
    return x;

  else if(vec[y] <= vec[x] && vec[y] <= vec[z])
    return y;
  
  return z;
}

int median(int vec[], int x, int y, int z){
  return (x+y+z) - max(vec, x, y, z) - min(vec, x, y, z);
}

int partition(int vec[], int l, int u){
  int i, m, temp;

  int j = median(vec, l, u, (l+u)/2);

  temp = vec[l];
  vec[l] = vec[j];
  vec[j] = temp;
  
  m = l;   // m: indice do ponto médio

  for(i = l+1; i<=u; i++){
     if(vec[i] < vec[l]){ // fora de ordem
      m ++;
      temp = vec[i];  // trocar vec[i], vec[m]
      vec[i] = vec[m];
      vec[m] = temp;
     }
  }

  temp = vec[l]; // trocar vec[l], vec[m]
  vec[l] = vec[m];
  vec[m] = temp;

  return m;
}

void quicksort_rec(int vec[], int l, int u){
  int m;
  
  if(l >= u)
   return;   // caso base; termina logo

  // senão: caso recursivo
  m = partition(vec, l, u);

  // partir usando pivot
  quicksort_rec(vec, l, m-1);
  // ordenar vec[l..m-1]
  quicksort_rec(vec, m+1, u);

  // ordenar vec[m+1..u]
}

int main(){
  int v[5] = {-1, -9, 42, 0, -4};

  quicksort_rec(v, 0, 4);

  for(int i=0; i<5; i++)
    printf("%d ", v[i]);

  printf("\n");

  return 0;
}
