/*-----------------------------------------------------------------------*\
|    CC1003 Programas das aulas teóricas de 4 de Dezembro 2020            |
|                                                                         |
|       Para testar, remover os comentários da função main pretendida e   |
|       comentar a função main ativa                                      |
\*-----------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>      // usar strlen abaixo

#define MAXCHARS 100

// ---- Prototipos 
int ler_frase(char seq[]);
void copiar(char dest[],char origem[]);
int frequencia(int freq[]);
int conta_palavras();
int my_strcmp(char x[],char y[]); 
char my_toupper(char c);
int compara(char x[],char y[]);


//---------------------------------------------------
// ler sequência de caracteres até mudança de linha
//---------------------------------------------------
int ler_frase(char seq[]) {
  int i;
  for(i=0; i < MAXCHARS && (seq[i] = getchar()) != '\n'; i++);
  if (i == MAXCHARS)  {
    seq[i-1] = '\0';
    while (getchar() != '\n') ;
    return 1;
  }
  seq[i] = '\0';     // substitui '\n' pelo terminador
  return 0;
}

//-------------------------------------------------------------------
// copiar a cadeia de caracteres dada por origem para a dada por dest
//-------------------------------------------------------------------
void copiar(char dest[],char origem[]) {
  int i;
  for(i=0; (dest[i] = origem[i]) != '\0'; i++) ;
}


// Outra implementação 
/*
void copiar(char dest[],char origem[]) {
  int i= -1;
  do {
    i++;
    dest[i] = origem[i];
  } while (origem[i] != '\0');
}
*/


//-------------------------------------------------------------------
// Contar a frequência de letras numa sequência lida do standard input
// sem distinguir minúsculas de maiúsculas.  Executar
//    ./a.out  < ficheiro
// ou indicar a sequência e no fim Control-D 
//---------------------------------------------------------------------
int frequencia(int freq[]) {
  int x, letras = 0, c, i;  

  for(i=0;i<26;i++)  freq[i] = 0;

  while ( (c=getchar()) != EOF) {
    if  (c >= 'A' && c <= 'Z') {
      letras++;
      freq[c-'A']++;
    }  else if (c >= 'a' && c <= 'z') {
      letras++;
      freq[c-'a']++;
    }
  }
  return letras;
}

//------------------------------------------------------------
// contar palavras numa sequência lida do standard input, sendo
// palavra qualquer sequência maximal de letras ou dígitos
// Executar   ./a.out  <  ficheiro
// ou introduzir a sequência e no fim Control-D
//------------------------------------------------------------

int conta_palavras(){

  int contador = 0, c, palavra = 0;


  while ( (c=getchar()) != EOF) {
    if ( (c >='0' && c <= '9') || (c >='A' && c <= 'Z') || (c >='a' && c <= 'z') )
      palavra = 1;
    else {
      if (palavra == 1) {contador++; palavra = 0;}
    }
  }
  
  contador += palavra;    // if (palavra == 1) contador++;
  return contador;
}

//-------------------------------------------------------------------
//  comparar duas cadeias de caracteres segundo a ordem lexicográfica
//  induzida pelos valores definidos pelos códigos ASCII
//--------------------------------------------------------------------
int my_strcmp(char x[],char y[]) {
  int i;

  for(i=0; x[i] == y[i] && x[i] != '\0'; i++);  
  
  if (x[i] == y[i]) return 0;

  if (x[i] < y[i]) return -1;

  return 1;
}

//-------------------------------------------------------------------
//  converter um caracter para maiúscula se for uma mínúscula
//--------------------------------------------------------------------
/*  Exemplos
Como 'b'  =  'a' + 1  e 'd' = 'a' + 3  então:
     'b' - 'a' + 'A'   =  'a' + 1 -'a' + 'A' = 'A' + 1 = 'B'
     'd' - 'a' + 'A' = 'a' + 3 - 'a' + 'A'  = 'A' + 3 = 'D'
*/
char my_toupper(char c) {
  if (c >='a'  && c <= 'z') 
    return  c-'a'+'A';
  return c;
}


/*
// Outra implementação
int compara(char x[],char y[]) {
  int i;

  for(i=0; my_toupper(x[i]) == my_toupper(y[i]) && x[i] != '\0'; i++);

  if (x[i] == '\0') {
    if (y[i] == '\0')
      return 0;
    return -1;
  } else {
    if (y[i] == '\0') return 1;
    if (my_toupper(x[i]) < my_toupper(y[i])) return -1;
    return 1;
  }
}
*/

//-----------------------------------------------------------------------
// comparar lexicograficamente duas sequências de letras sem distinguir
// minúsculas de maiúsculas
//-----------------------------------------------------------------------
int compara(char x[],char y[]) {
  int i;

  for(i=0; my_toupper(x[i]) == my_toupper(y[i]) && x[i] != '\0'; i++);

  if (x[i] == y[i]) return 0;

  if (my_toupper(x[i]) < my_toupper(y[i])) 
    return -1;
  return 1;

}


//--------------------------------------------------------------------  
// inverter a cadeia de caracteres dada por str
//      (não foi dada na aula de 4/12/2020)
//--------------------------------------------------------------------
void reverse(char str[]) {
  int k, i, aux;

  for(k=0; str[k] != '\0'; k++);

  k--;    // posicao anterior

  for(i=0; i < k; i++, k--) {
    aux = str[i];
    str[i] = str[k];
    str[k] = aux;
  }
}



//----------------------------------------------------------------------
//    Testar ler_frase
//     usa a função  strlen  de string.h
//----------------------------------------------------------------------

/*
int main() {
  
  char x[MAXCHARS];

  
  for(int i=0; i < 4; i++)  {
    if(ler_frase(x) == 0) 
      printf("A frase dada foi:\n%s\nTem %lu caracteres\n",x,strlen(x));
  }

  return 0;
}
*/


//----------------------------------------------------------------------
//    Testar frequencia
//       ./a.out    <  ficheirodetexto
//    ou  dar a sequência a partir do teclado e no fim Control-D
//----------------------------------------------------------------------

/*
int main() {

  int cont[26], letras, i;

  letras = frequencia(cont);

  for(i=0;i<26;i++)
    printf("%c: %d\n",'A'+i, cont[i]);

  printf("O ficheiro tinha %d letras\n",letras);

  return 0;
}
*/

//----------------------------------------------------------------------
//    Testar conta_palavras
//       ./a.out    <  ficheirodetexto
//    ou  dar a sequência a partir do teclado e no fim Control-D
//----------------------------------------------------------------------

/*
int main() {
  
  printf("O texto tem %d palavras\n",conta_palavras());

  return 0;
}

*/

//----------------------------------------------------------------------
//    Testar compara
//       ./a.out    <  ficheirodetexto
//    ou  dar a sequência a partir do teclado e no fim Control-D
//----------------------------------------------------------------------

//  Assumimos que as palavras lidas são sequências de letras apenas

int main() {
  char x[MAXCHARS], y[MAXCHARS];

  printf("Indique uma palavra: ");
  scanf("%s", x);
  printf("Indique outra palavra: ");
  scanf("%s", y);
  printf("As duas palavras ordenadas por ordem alfabetica:\n");
  if (compara(x,y) <= 0) 
    printf("%s\n%s\n",x,y);
  else 
    printf("%s\n%s\n",y,x);

  return 0;
}

