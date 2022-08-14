#include <stdio.h>
#include <math.h>

float grau_rad(float x){
  return (x * M_PI)/180;
}

int main(){
  float val;

  scanf("%f", &val);
  printf("%f\n", grau_rad(val));

  return 0;
}
