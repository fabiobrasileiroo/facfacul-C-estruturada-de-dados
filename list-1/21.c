// #include <stdio.h>

// typedef struct{
//   int numero;
//   float tempo;
// } Corredor;

// int main() {
//   const int NUM_CORREDORES = 3;
//   Corredor corredores[NUM_CORREDORES];
//   for(int i = 0;i< NUM_CORREDORES; i++) {
//     printf("Digite o numero corredor %d (entre 1 a 10):\n",i+ 1);
//     scanf("%d",&corredores[i].numero);
//     if(corredores[i].numero >=1 && corredores[i].numero <=10) {
//       printf("Digite o tempo do seu cavalo\n");
//       scanf("%f",&corredores[i].tempo);
//     } else {
//       printf("\nDigite um valor em 1 a 10 ...tente novamente");
//       i--;
//     }
//   }
//   for (int i = 0; i < NUM_CORREDORES -1;i++) { 
//     for(int j = 0; j < NUM_CORREDORES - i - 1; j++) {
//       if(corredores[j].tempo > corredores[j+1].tempo) {
//         Corredor temp = corredores[j];
//         corredores[j] = corredores[j+1];
//         corredores[j+1]= temp;
//       }
//     }
//   }
//   // for(int i = 0; i < tamanho;i++) {
//   //   for(int j = 0; j < tamanho; i++) {
//   //     if(corredor[i].tempo == )
//   //   }
//   // }
//   printf("\nQualificacao:\n");
//   for(int i = 0; i< NUM_CORREDORES; i++) {
//   printf("\n lugar: Corredor %d - Tempo: %.2f segundos\n",i+1, corredores[i].numero, corredores[i].tempo);
//   }
//   return 0;
// }
#include <stdio.h>

typedef struct {
    int numero;
    float tempo;
} Corredor;

typedef struct {
    int numero_corredor;
    float tempo;
} Classificacao;

int main() {
    const int NUM_CORREDORES = 3;
    Corredor corredores[NUM_CORREDORES];
    for(int i = 0; i < NUM_CORREDORES; i++) {
        printf("Digite o numero corredor %d (entre 1 a 10):\n", i + 1);
        scanf("%d", &corredores[i].numero);
        if(corredores[i].numero >= 1 && corredores[i].numero <= 10) {
            printf("Digite o tempo do seu cavalo\n");
            scanf("%f", &corredores[i].tempo);
        } else {
            printf("\nDigite um valor em 1 a 10 ...tente novamente");
            i--;
        }
    }

    // Ordenar os corredores com base no tempo
    // entra 2 vezes se for NUM_CORREDORES = 3
    // vai ate pernultimo numero para comparar
    for (int i = 0; i < NUM_CORREDORES - 1; i++) {
      // entra 1 vezes se for NUM_CORREDORES = 3
        for(int j = 0; j < NUM_CORREDORES - i - 1; j++) {
          // se o o numero atual  é maior que da frente
            if(corredores[j].tempo > corredores[j+1].tempo) {
                Corredor temp = corredores[j];
                corredores[j] = corredores[j+1];
                corredores[j+1]= temp;
            }
        }
    }

    // Criar a classificação
    Classificacao classificacao[NUM_CORREDORES];
    for(int i = 0; i < NUM_CORREDORES; i++) {
        classificacao[i].numero_corredor = corredores[i].numero;
        classificacao[i].tempo = corredores[i].tempo;
    }

    printf("\nQualificacao:\n");
    for(int i = 0; i < NUM_CORREDORES; i++) {
        printf("\nLugar %d: Corredor %d - Tempo: %.2f segundos\n", i + 1, classificacao[i].numero_corredor, classificacao[i].tempo);
    }
    return 0;
}
