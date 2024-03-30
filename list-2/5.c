#include <stdio.h>

#define TAMANHO 6

int main() {
    float matriz[TAMANHO][TAMANHO];
    float multiplicar;
    float vetor36[TAMANHO * TAMANHO] = {0}; // Inicializa todos os elementos do vetor com zero
    int index = 0;

    printf("Digite o valor para ser multiplicado: ");
    scanf("%f", &multiplicar);

    for (int l = 0; l < TAMANHO; l++) {
        for (int c = 0; c < TAMANHO; c++) {
            scanf("%f", &matriz[l][c]);
            vetor36[index] += matriz[l][c] * multiplicar;
            index++;
        }
    }

    for (int i = 0; i < TAMANHO * TAMANHO; i++) {
        printf("%.2f ", vetor36[i]);
    }

    return 0;
}
