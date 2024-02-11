// #include <stdio.h>

// int main() {
//   int vetor[100];
//   int valor;
//   int index = 0;

//   for(index = 0; index < 10; index++) {
//     scanf("%d",&valor);
//     if(vetor[index]>=1 && vetor[index]<=100) {
//     printf("%d\n",vetor[index]);
//     }
//     printf("%d,",vetor[index]);
//   }
//   // for(index = 0; index < 5; index++) {
//   // }

// }

#include <stdio.h>

int main() {
    int vetor[100];
    
    for (int i = 0; i < 100; i++) {
        vetor[i] = i + 1;
    }
    
    printf("Números de 1 a 100:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
