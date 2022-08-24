#include <stdio.h>

int main(){
  int ano, mes, dia, A, B, C, D, E, DJ;

  scanf("%d", &ano);
  scanf("%d", &mes);
  scanf("%d", &dia);

  if(mes < 3){
    ano -= 1;
    mes += 12;
  }

  A = ano/100;
  B = A/4;
  
  if((dia > 15 && mes == 10 && ano == 1582) || (mes >= 11 && ano == 1582) || (ano >= 1583))
    C = 2 - A + B;

  else if((dia <= 4 && mes == 10 && ano == 1582) || (mes <= 10 && ano <= 1582) || (ano <= 1581))
    C = 0;

  D = (int)(365.25 * (ano + 4716));
  E = (int)(30.6001 * (mes + 1));
  DJ = D + E + dia + C - 1524;
  printf("%d\n", DJ);

  return 0;
}
