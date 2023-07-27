#include <stdio.h>
#include <string.h>

int partition(char vec[], int l, int u){
  int i, m, temp;
  
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

void quicksort_rec(char vec[], int l, int u){
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

int anagramas(char str1[], char str2[]){
  if(strlen(str1) != strlen(str2))
    return 0;

  quicksort_rec(str1, 0, strlen(str1) - 1);
  quicksort_rec(str2, 0, strlen(str2) - 1);

  for(int i=0; i<strlen(str1); i++)
    if(str1[i] != str2[i])
      return 0;

  return 1;
}

int main(){
  char s[] = "deposit";
  char t[] = "topside";

  printf("%d\n", anagramas(s, t));
  
  return 0;
}
