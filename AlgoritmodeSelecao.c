#include "stdio.h"
#include "stdlib.h"

void selection_sort (int vetor[],int max) {
  int i, j, min, aux;
  
  for (i = 0; i < (max - 1); i++) {
    /* O minimo é o primeiro número não ordenado ainda */
    min = i;
    for (j = i+1; j < max; j++) {
      /* Caso tenha algum numero menor ele faz a troca do minimo*/
      if (vetor[j] < vetor[min]){
  			 min = j;
      }
    }
    /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
}
  /* Imprime o vetor ordenado */
  printf("Vetor ordenado:\n");
  for (i = 0; i < max; i++) {
    printf ("%d ",vetor[i]);
  }
  printf ("\n");
}

int main () {
  int max, i;
  /* Lê o máximo de algarismos do vetor*/
  printf("Digite o tamanho do vetor:\n");
  scanf ("%d",&max);
  
  int  vetor[max];
  /* Lê os algarismos do vetor */
  printf("Digite os valores para preencher o vetor:\n");
  for (i = 0; i < max; i++) {
    scanf ("%d",&vetor[i]);
  }
  
  selection_sort (vetor, max);
  
}