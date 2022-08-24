#include <stdio.h>

int main(){
  int cham, andar1, andar2;

  scanf("%d", &cham);
  scanf("%d", &andar1);
  scanf("%d", &andar2);

  int dist1 = andar1 - cham;
  int dist2 = andar2 - cham;

  if(dist1 < 0)
    dist1 = -dist1;

  if(dist2 < 0)
    dist2 = -dist2;
  
  if(andar1 == 999 && andar2 == 999)
    printf("0\n");

  else if(andar1 == 999 && andar2 != 999)
    printf("2\n");

  else if(andar1 != 999 && andar2 == 999)
    printf("1\n");

  if(dist1 < dist2 && andar2 != 999)
    printf("1\n");

  else if(dist2 < dist1 && andar1 != 999)
    printf("2\n");

  if(dist1 == dist2){
    if(andar1 > andar2)
      printf("1\n");

    else if(andar2 > andar1)
      printf("2\n");
  }
    
  if(andar1 == andar2 && andar1 != 999 && andar2 != 999)
    printf("1\n");
  
  return 0;
}
