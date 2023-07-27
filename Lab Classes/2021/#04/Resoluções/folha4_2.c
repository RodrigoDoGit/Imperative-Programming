//   Resolução do exercicio 2 da folha 4

#include <stdio.h>

int troca(int vmoeda[],int dmoeda[],int n,int q);

int troca(int vmoeda[],int dmoeda[],int n,int q){
  int aux, i;

  for(i=0; q > 0 && i< n; i++)   {

    aux = q/vmoeda[i];     // quantas moedas do tipo i podia dar se tivesse

    if (dmoeda[i] < aux)    // não tem número suficiente?
      aux = dmoeda[i];     //    então dá todas as que tem 

    dmoeda[i]  -= aux;    // quantas moedas do tipo i sobram (não era pedido !!!)

    q = q - aux * vmoeda[i];    // o que sobra se deu aux moedas de valor vmoeda[i]
 }

  return q;    // o que sobrou  (se sobrar...)
}



int main() {
  int v[8] = {200,100,50,20,10,5,2,1}, d[8], quantia;

  for (int i=0; i< 8; i++)
    scanf("%d", &d[i]); 

  scanf("%d",&quantia);
  printf("%d\n", troca(v,d,8,quantia));

  /*
  printf("\nComo ficou a caixa\n");
  for (int i=0; i< 8; i++)
    printf("%d ", d[i]); 
  printf("\n");
  */
  return  0;
}

