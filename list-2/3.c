#include <stdio.h>

int main() {
  const int TAMANHO = 50;
  int num;
  float numVetor[TAMANHO];
  int i=0;
  do {
  printf("Digite o codigo número 1 ou 2:");
  scanf("%d",&num);
  if(num == 0) {
    printf("Saiu da operaçao");
    // break;
  } 
  printf("Digite um número(float):");
  scanf("%f",&numVetor[i]);
  if(num == 1) {
    printf("Vetor na ordem direta:\n");
    for(int j =0; j < i+1;j++) {
    printf("%.2f ",numVetor[j]);
    }
    printf("\n");
    i++;
  } else if(num ==2 ) {
    printf("Vetor na ordem inversa:\n");
    for (int j = i ; j >= 0; j--) {
      printf("%.2f ", numVetor[j]);
    } 
    printf("\n");
    i++;
  } else {
    printf("Digite um número valido 1 ou 2");
  }
  } while(num != 0 && i < TAMANHO);
  return 0;
}