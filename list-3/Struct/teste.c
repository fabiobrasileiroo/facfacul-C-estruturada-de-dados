#include <stdio.h>

// // Declaração da função soma antes de ser usada na função main
int soma(int a, int b);
// Definição da função soma


int main() {
    // Chamada correta da função soma
    int resultado = soma(2, 2);
    printf("Resultado: %d\n", resultado);
    return 0;
}
int soma(int a, int b) {
    int somaTudo = a + b;
    return somaTudo; // Retornando o valor calculado
}