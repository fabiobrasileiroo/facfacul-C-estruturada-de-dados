// Desenvolver um programa que efetue a leitura de dez elementos de uma matriz A tipo vetor. Construir uma matriz B de mesmo tipo, acompanhando a seguinte lei de informação. Se o valor do índice for ímpar, o valor deverá ser multiplicado por 6; sendo par, deverá ser somado com 6. Ao final, mostrar os conteúdos das duas matrizes.
#include <stdio.h>
#define TAMANHO 10
int main() {
  int matrizA[TAMANHO];
  int matrizB[TAMANHO];
  for(size_t l = 0;l<TAMANHO;l++) {
    scanf("%d",&matrizA[l]);
    matrizB[l] = matrizA[l] % 2 == 0 ? matrizA[l] * 6 : matrizA[l] + 6;
  }

  printf("Matriz A:\n");
  for(size_t l = 0; l < TAMANHO;l++) {
    printf("[%d] -Matriz A: %d",l,matrizA[l]);
    if(l <= TAMANHO -1) {
      printf(", ");
    }
  }

  printf("Matriz B:\n");
  for(size_t l = 0; l < TAMANHO;l++) {
    printf("[%d] -Matriz B: %d",l,matrizB[l]);
    if(l <= TAMANHO -1) {
      printf(", ");
    }
  }


  return 0;
}










