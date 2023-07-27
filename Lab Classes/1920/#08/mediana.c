#include <stdio.h>
#include <assert.h>

int max(int x, int y, int z){
  if(x >= y && x >= z)
    return x;

  else if(y >= x && y >= z)
    return y;
  
  return z;
}

int min(int x, int y, int z){
  if(x <= y && x <= z)
    return x;

  else if(y <= x && y <= z)
    return y;
  
  return z;
}

int median(int x, int y, int z){
  int res = (x+y+z) - max(x, y, z) - min(x, y, z);

  assert(res >= min(x, y, z) && res <= max(x, y, z));
  
  return res;
}

int main(){
  printf("%d\n", median(4, 1, 7));

  return 0;
}
