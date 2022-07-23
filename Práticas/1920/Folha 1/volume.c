#include <stdio.h>

int main(void){
   float l, w, h, v;   // dimensões e volume

   l = 1500;    // comprimento
   w = 1500;     // largura
   h = 1500;     // altura
   v = l*w*h; // cálculo do volume

   printf("LxWxH: %f*%f*%f (cm)\n", l, w, h);
   printf("Volume: %f (cm^3)\n", v);

   return 0;
}
