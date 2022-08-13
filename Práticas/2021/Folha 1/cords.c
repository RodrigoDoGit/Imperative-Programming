#include <stdio.h>

int main(){
  int a, b, r, x, y, n;

  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &r);
    scanf("%d", &x);
    scanf("%d", &y);
    
    if(((x-a)*(x-a) + (y-b)*(y-b)) < r*r)
      printf("(%d,%d): no interior.\n", x, y);
    
    else if(((x-a)*(x-a) + (y-b)*(y-b)) == r*r)
      printf("(%d,%d): na fronteira.\n", x, y);
    
    else
      printf("(%d,%d): no exterior.\n", x, y);
  }
    
  return 0;
}
