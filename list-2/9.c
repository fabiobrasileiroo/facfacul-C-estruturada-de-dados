#include <stdio.h>
// Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos. Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.
int main() {
    // Declaração do vetor e da matriz
    int vetor[3];
    int matriz[3][3];
    int resultado[3] = {0}; // Inicializa o vetor de resultados com zeros

    // Leitura dos elementos do vetor
    printf("Digite os 3 elementos do vetor:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &vetor[i]);
    }

    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Multiplicação do vetor pelas colunas da matriz
    for (int l = 0; l < 3; l++) {
        for (int c = 0; c < 3; c++) {
            resultado[l] += vetor[c] * matriz[c][l];
        }
    }

    // Impressão do vetor de resultados
    printf("Resultado da multiplicação do vetor pelas colunas da matriz:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}

// // Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos. Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.
// #include <stdio.h>
// #define TAMANHO 3
// int main() {
//   int vetorMultiplicacao[TAMANHO];
//   int vetor[TAMANHO][TAMANHO];
//   for(size_t i = 0; i < TAMANHO; i++) {
//     scanf("%d",&vetorMultiplicacao[i]);
//   }

//   for(size_t l = 0; l < TAMANHO;l++) {
//     for (size_t c = 0; c < TAMANHO; c++){
//       scanf("%d",&vetor[l][c]);
//       vetor[l][c] = vetor[l][c] * vetorMultiplicacao[c];
//     }
//   }
//   for(size_t l = 0; l < TAMANHO;l++) {
//     for (size_t c = 0; c < TAMANHO; c++){
//       printf("%d ",vetor[l][c]);
//     }
//   }
//   return 0;
// }