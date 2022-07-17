#include <stdio.h>

#include "frac.h"


//===========  auxiliares =================
//determinar o Maximo Divisor Comum de a e b pelo algoritmo de Euclides
int mdc(int a, int b);

// procura o proximo carater em seq diferente de ' ' a patir da posicao i
// e retorna a sua posicao
int passa_espacos(char seq[], int i);

// valor absoluto de x
int absval(int x);
//================================================================



FRAC normaliza(FRAC f){   
  int d;
  if (f.den != 1) {
    d = mdc(absval(f.num), f.den);
    f.num = f.num/d;
    f.den = f.den/d;
  }
  return f;
}

FRAC soma(FRAC f1, FRAC f2) {
  FRAC res;
  res.den = (f1.den * f2.den) / mdc(f1.den,f2.den);
  res.num = (res.den/f1.den * f1.num + res.den/f2.den * f2.num);
  return normaliza(res);
}

FRAC simetrico(FRAC f) {
  f.num = -f.num;
  return f;
}

FRAC subtr(FRAC f1, FRAC f2) {
  return soma(f1,simetrico(f2));
}

FRAC mult(FRAC f1, FRAC f2) {
  FRAC res;
  res.num = f1.num * f2.num;
  res.den = f1.den * f2.den;
  return normaliza(res);
}

void escreve_frac(FRAC f) {
  // f pode não estar normalizada
  if (f.den == 1 || f.num == 0) 
    printf("%d",f.num);
  else printf("%d/%d",f.num,f.den);
}


// Deve ler string2frac  como  "string to frac"
FRAC string2frac(char seq[]) {
  /* 
     formatos -NUM, NUM, NUM/NUM ou -NUM/NUM
     onde NUM seria uma sequencia de dígitos
     pode ter espaços antes ou depois dos operadores
     Admite-se que:  "   - 65     /  8"    deveria ser
     aceite como se estivesse "-65/8"
  */

  FRAC f;
  int sinal, i;
  i = passa_espacos(seq,0);
  if (seq[i] == '-') {
    sinal = -1; i = passa_espacos(seq,i+1);
  } else 
    sinal = 1;
  // espera-se que seq[i] seja digito
  f.num = 0;
  while (seq[i] >= '0'  && seq[i] <= '9') {
    f.num = f.num*10 + seq[i]-'0'; 
    i++;
  }
  f.num = sinal*f.num;

  i = passa_espacos(seq,i);
  if (seq[i] == '/') {
    i = passa_espacos(seq,i+1);
    f.den = 0;
    while (seq[i] >= '0' && seq[i] <= '9') {
      f.den = f.den*10 + seq[i]-'0'; 
      i++;
    }
  } else f.den = 1;

  return f;
}
  
/*------------- implementar ------------------

FRAC div(FRAC f1, FRAC f2);
FRAC inverso(FRAC f);

void frac2string(FRAC f,char string[],int maxchars);

//--------------------------------------------- */




int mdc(int a, int b) { // versao iterativa do algoritmo de Euclides
  // assume a ou b nao nulo
  int r = b;
  while (r != 0) {
    r = a%b;
    a = b;
    b = r;
  }
  return a;
}


int passa_espacos(char seq[], int i) {
  while (seq[i] == ' ') i++;
  return i;
}


int absval(int x){
  return (x >= 0?  x : -x);
}




//---------------  exemplos de uso ---------------------
/*

 Colocar num ficheiro, por exemplo, prog.c o código seguinte 
 e compilar usando    gcc prog.c  frac.c

*/


/*

#include <stdio.h>

#include "frac.h"


int main() {
  FRAC f1={-7,6}, f2 = {1,3}, res;

  res = soma(f1,f2);

  printf("A soma de "); 
  escreve_frac(f1);
  printf(" com "); 
  escreve_frac(f2);
  printf(" = "); 
  escreve_frac(res);
  putchar('\n');

  char s1[10] = "17/8", s2[10] = "-45/  16";
  f1 = string2frac(s1);
  f2 = string2frac(s2);
  printf("A soma de ");
  escreve_frac(f1);
  printf(" com "); 
  escreve_frac(f2); 
  printf(" = "); 
  escreve_frac(soma(f1,f2));
  putchar('\n');

  f1.num = -45;  
  f1.den = 10;
  f2.num = 7;
  f2.den = 1;
  printf("A soma de -45/10 com 7 = ");
  escreve_frac(soma(f1,f2));
  putchar('\n');
  return 0;
}

 
*/
