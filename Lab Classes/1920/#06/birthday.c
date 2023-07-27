#include <stdio.h>
#include <stdlib.h>
#define EXPS 1000
#define STDS 25

int repetidos(int vec[], unsigned size){
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++)
      if(vec[i] == vec[j])
	return 1;
  }

  return 0;
}

int experiment(int vec[], unsigned size){
  for(int i=0; i<size; i++)
    vec[i] = 1 + rand() / (RAND_MAX/365 + 1);

  return repetidos(vec, size);
}

int main(){
  int birthday[STDS];
  float exps, total;

  for(int i=1; i<=EXPS; i++){
    if(experiment(birthday, STDS))
       exps++;

    total++;
  }

  printf("%f\n", exps/total);
  
  return 0;
}
