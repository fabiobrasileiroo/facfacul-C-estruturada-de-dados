// #include <stdio.h>
// #include <math.h>

// int main() {
//   int numeros[15];
//   float raiz_quadrada[15];

//   printf("Digite quinze números:\n");

//   for(int i = 0; i< 15; i++){
//     printf("Numero %d: ", i+1);
//     scanf("%d", &numeros[i]);
//   }

//   for(int i = 0; i < 15; i++) {
//     if(numeros[i] >= 0) {
//       raiz_quadrada[i] = sqrt(numeros[i]);
//     } else {
//       raiz_quadrada[i] = -1;
//     }
//   }

//   printf("\nRaiz quadrada de cada número:\n");
//   for(int i = 0; i < 15; i++) {
//     printf("%.2f", raiz_quadrada[i]);
//   }
//   printf("\n");

//   return 0;
// }
#include <stdio.h>

// Função para calcular a raiz quadrada de um número (implementação simplificada)
float calcularRaizQuadrada(int numero) {
    if (numero < 0) {
        return -1; // Se o número for negativo, retorna -1
    }

    float raiz = numero / 2.0;
    float temp;

    do {
        temp = raiz;
        raiz = (temp + (numero / temp)) / 2;
    } while ((temp - raiz) != 0);

    return raiz;
}

int main() {
    int numeros[15];
    float raiz_quadrada[15];

    printf("Digite quinze números:\n");

    // Recebendo os quinze números do usuário
    for (int i = 0; i < 15; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Calculando a raiz quadrada de cada número e armazenando no vetor raiz_quadrada
    for (int i = 0; i < 15; i++) {
        raiz_quadrada[i] = calcularRaizQuadrada(numeros[i]);
    }

    // Imprimindo os valores armazenados
    printf("\nRaiz quadrada de cada número:\n");
    for (int i = 0; i < 15; i++) {
        printf("%.2f ", raiz_quadrada[i]);
    }
    printf("\n");

    return 0;
}
