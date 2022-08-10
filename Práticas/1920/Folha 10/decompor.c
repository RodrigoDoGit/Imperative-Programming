#include <stdio.h>

void decompor(int total_seg, int *horas, int *mins, int *segs){
  *horas = total_seg / 3600;
  total_seg %= 3600;
  *mins = total_seg / 60;
  total_seg %= 60;
  *segs = total_seg;
}

int main(){
  int h, m, s;

  decompor(4242, &h, &m, &s);
  printf("%d hora(s), %d minuto(s), %d segundo(s)\n", h, m, s); 
  
  return 0;
}
