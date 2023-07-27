//  CC1003 - DCC -
//  insertion sort;  selection sort;  quicksort;
//   binary search
//========================================================

#include <stdio.h>


void selectionSort(int v[],int n);
int posmax(int v[],int k,int n);

void insertionSort(int v[],int n);
void quickSort(int v[],int p,int q);
int partir(int v[],int p, int q);

int binarySearch(int x, int v[], int n);


//======================================================
int posmax(int v[],int k,int n){
  // 0<= k <= n-1
  int pmax = k;
  for(int i=k+1; i< n; i++)
    if (v[i] > v[pmax])
      pmax = i;
  return pmax;
}

void selectionSort(int v[],int n){
  int j, aux;
  for(int k=0; k < n-1; k++) {
    j = posmax(v,k,n);
    if (j != k) {
      aux = v[j];
      v[j] = v[k];
      v[k] = aux;
    }
  }
}


//======================================================
void insertionSort(int v[],int n) {
  int x, j;

  for(int k=1; k < n; k++) {

    x = v[k];

    for(j = k-1; j >= 0 && v[j] < x; j--)
      v[j+1] = v[j];

    v[j+1] = x;
  }
}

//======================================================
void quicksort(int v[],int p, int q) {
  if (p < q) {
    int px = partir(v,p,q);
    quicksort(v,p,px-1);
    quicksort(v,px+1,q);
  }
}

//---  implementação simples para partir
int partir(int v[],int p, int q) {
  // p < q
  int menoresIg[q-p], maiores[q-p];

  // escolhe pivot aleatoriamente (e troca com v[p])
  ipivot = p + rand()%(q-p+1);
  if (ipivot != p) {
    aux = v[p];
    v[p] = v[ipivot];
    v[ipivot] = aux;
  }
  //-------------------------------

  int x = v[p], imenor=0, imaior=0, k, px;

  // separar
  for(k = p+1; k <= q; k++)
    if (v[k] <= x)  {
      menoresIg[imenor] = v[k];
      imenor++;
    } else {
      maiores[imaior] = v[k];
      imaior++;
    }
  // copiar para v
  for(k = p; imaior > 0; k++)  {
    imaior--;
    v[k] = maiores[imaior];
  }
  px = k;  v[k] = x;
  for(k++; imenor > 0; k++)  {
    imenor--;
    v[k] = menoresIg[imenor];
  }
  return px;
}


//======================================================
int binarySearch(int x, int v[],int n) {
  // supor que v está por ordem decrescente

  int a = 0, b = n-1, m;

  while (a <= b) {
    m = (a+b)/2;
    if (v[m] == x) return m;
    if (v[m] < x)  b= m-1;
    else a = m+1;
  }
  return -1;
}


//================================================================

void lerVec(int v[],int n) {
  for(int i=0; i < n; i++)
    scanf("%d",&v[i]);
}

void escrVec(int v[],int n) {
  printf("%d",v[i]);
  for(int i=1; i < n; i++)
    printf(" %d",v[i]);
  putchar('\n');
}


int main() {
  int x[] = {7, 8, 56, 45, 32, 54, 76, 56, 43, 2, 3, 4}, n=12
  selectionSort(x,12);
  escrVec(x,12);
  printf("max = %d\n",x[0]);
  printf("min = %d\n",x[n-1]);
  printf("mediana = %d\n", x[n/2]);

  int valor, p;
  scanf("%d",&valor);
  p = binarySearch(valor,x,n);
  if (p == -1) printf("%d nao se encontra no vector\n",valor);
  else printf("%d encontrado na posicao %d\n",valor,p);

  scanf("%d",&n);
  lerVec(x,n);
  insertionSort(x,n);
  escrVec(x,n);

  scanf("%d",&n);
  lerVec(x,n);
  quicksort(x,0,n-1);
  escrVec(x,n);

  return 0;
}



