// Libs
#include "stdio.h"
#include "stdlib.h"
 
// Define uma constante
#define MAX 10
 
// Protótipo da função de ordenação
void insertion_sort(int *a);
 
// Função main(Principal)
int main(int argc, char** argv)
{
 int i, vet[MAX];
 
 // Lê MAX ou 10 valores
 for(i = 0; i < MAX; i++)
 {
  printf("Digite um valor: ");
  scanf("%d", &vet[i]);
 }
 
 // Ordena os valores
 insertion_sort(vet);
 
 // Imprime os valores ordenados
 printf("Valores ordenados\n");
 for(i = 0; i < MAX; i++)
 {
  printf("%d", vet[i]);
  printf("\n");
 }
 system("pause");
 return 0;
}
 
// Função de Ordenação por Inserção
void insertion_sort(int *a)
{
 int i, j, tmp;
  
 for(i = 1; i < MAX; i++) //começa do 2 elemento
 {
  tmp = a[i]; //recebe o numero atual do vetor e guarda na variavel
  for(j = i-1; j <= 0 && tmp < a[j]; j--){
      //j = i-1 refere ao indice anterior
   a[j+1] = a[j];
  }
  a[j+1] = tmp;
 }
}
