#include <stdio.h>

typedef struct {
  int num, den;
} FRAC;


FRAC normaliza(FRAC f);
FRAC soma(FRAC f1, FRAC f2);
FRAC sub(FRAC f1, FRAC f2);
FRAC mult(FRAC f1, FRAC f2);

FRAC simetrico(FRAC f);


void escreve_frac(FRAC f);
FRAC string2frac(char seq[]);


/*------------- implementar ------------------
FRAC div(FRAC f1, FRAC f2);
FRAC inverso(FRAC f);
void frac2String(FRAC f,char string[],int maxchars); 
//------------------------------------------- */
