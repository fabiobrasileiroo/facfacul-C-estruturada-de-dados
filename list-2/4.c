// Faça um algoritmo que leia um vetor de 500 posições de números 
// inteiros e divida todos os seus elementos pelo maior valor do vetor. 
// Mostre o vetor após os cálculos.
#include <stdio.h>

#define TAMANHO 5

int main() {
    int array[TAMANHO];
    int arrayMaior;
    float resultado[TAMANHO];

    // Leitura dos valores e inicialização do arrayMaior com o primeiro elemento
    scanf("%d", &array[0]);
    arrayMaior = array[0];

    // Leitura dos valores restantes e encontra o maior valor
    for (int i = 1; i < TAMANHO; i++) {
        scanf("%d", &array[i]);
        if (array[i] > arrayMaior) {
            arrayMaior = array[i];
        }
    }

    // Divide cada elemento pelo maior valor e armazena no vetor 'resultado'
    for (int i = 0; i < TAMANHO; i++) {
        resultado[i] = (float)array[i] / arrayMaior;
    }

    // Mostra o vetor resultado após os cálculos
    for (int i = 0; i < TAMANHO; i++) {
        printf("%.2f ", resultado[i]);
    }

    return 0;
}
