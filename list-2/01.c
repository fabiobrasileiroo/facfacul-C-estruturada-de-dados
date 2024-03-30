#include <stdio.h>
int main() {
  //Escreva um algoritmo que leia um vetor de 80 elementos inteiros. Encontre e mostre o menor elemento e sua posição no vetor.
  const int NUM_MAX = 5;
  int vetor[NUM_MAX];
  int menor = 9999;
  // int maior = -9999;
  int index = 0;
  for(int i = 0; i < NUM_MAX; i++) {
    scanf("%d",&vetor[i]);
    if(vetor[i] < menor)  {
      menor = vetor[i];
      index = i;
    }
  }
  printf("Index: %d\nValor: %d",index,menor);
  return 0;
}