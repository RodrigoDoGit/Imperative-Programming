#include <stdio.h>

int troca(int vmoeda[], int dmoeda[], int n, int q){
  int tmp;

  for(int i=0; q > 0 && i < n; i++){
    tmp = q/vmoeda[i];

    if(dmoeda[i] < tmp)
      tmp = dmoeda[i];

    dmoeda[i] -= tmp;
    q = q - tmp * vmoeda[i];
  }

  return q;
}

int main(){
  int v[8] = {200, 100, 50, 20, 10, 5, 2, 1}, d[8], quantia;

  for(int i=0; i<8; i++)
    scanf("%d", &d[i]);

  scanf("%d", &quantia);
  printf("%d\n", troca(v, d, 8, quantia));

  return 0;
}
