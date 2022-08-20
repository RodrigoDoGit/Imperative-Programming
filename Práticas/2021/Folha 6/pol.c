#include <stdio.h>

void imprimePol(int v[][2], int n){
  int xmax = -1, ymax = -1, dx, dy, desl;

  for(int i=0; i<n; i++){
    if(v[i][0] > xmax)
      xmax = v[i][0];

    if(v[i][1] > ymax)
      ymax = v[i][1];
  }

  printf("\\documentclass{article}\n");
  printf("\\setlength{\\unitlength}{0,5cm}");
  printf("\\begin{document}\n");
  printf("\\begin{picture}(%d,%d)\n", xmax, ymax);

  for(int i=0; i<n; i++){
    dx = v[(i+1)%n][0] - v[i][0];
    dy = v[(i+1)%n][1] - v[i][1];

    if(dx == 0){
      desl = (dy > 0? dy : -dy);
      dy /= desl;
    }

    else{
      desl = (dx > 0? dx : -dx);
      dx /= desl;
    }

    printf("\\put(%d,%d){\\line(%d,%d){%d}}\n", v[i][0], v[i][1], dx, dy, desl);
  }

  printf("\\end{picture}\n");
  printf("\\end{document}\n");
}

void dilata(int v[][2], int n, int p, int q){
  for(int i=0; i<n; i++){
    if(v[i][0] >= p)
      v[i][0]++;

    if(v[i][1] >= q)
      v[i][1]++;
  }
}

int main(){
  int v[][2] = {{1, 1}, {0, 1}, {0, 5}, {3, 5}, {3, 0}, {1, 0}};
  //int w[][2] = {{0, 6}, {6, 6}, {6, 1}, {2, 1}, {2, 4}, {4, 4}, {4, 3}, {3, 3}, {2, 2}, {1, 5}, {1, 0}, {0, 0}};

  dilata(v, 6, 1, 2);
  imprimePol(v, 6);
  //printf("\n");
  //dilata(w, 12, 1, 2);
  //imprimePol(w, 12);
  
  return 0;
}
