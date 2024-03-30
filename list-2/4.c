#include <stdio.h>
// Faça um algoritmo que leia um vetor de 500 posições de números 
// inteiros e divida todos os seus elementos pelo maior valor do vetor. 
// Mostre o vetor após os cálculos.
#define TAMANHO 50
int main() {
  int array[TAMANHO]; 
  int arrayCont=0;
  int arrayMaior= -999;
  for(size_t i = 0;i < TAMANHO;i++) {
    scanf("%d",&array[i]);
    arrayCont += array[i];
    if(array > arrayMaior) {
      arrayMaior = array[i];
    }
  }
  printf("%d",arrayCont/arrayMaior);
  return 0;
}