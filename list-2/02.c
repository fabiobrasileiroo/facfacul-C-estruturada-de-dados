#include <stdio.h>

// Escreva um algoritmo que leia um vetor inteiro de 30 posições e crie um segundo vetor, substituindo os valores 0 por 1. Mostre os 2 vetores. 
#define NUM 3
int main() {
  
  int vetor1[NUM];
  int vetor2[NUM];
  for(int i = 0;i < NUM;i++) {
    scanf("%d",&vetor1[i]);
  }
  for(int i = 0; i < NUM;i++) {
    if(vetor1[i] == 0) {
      vetor1[i] = 1;
    } else {
      vetor2[i] = vetor1[i];
    }
  }
  for(int i = 0; i< NUM;i++) {
    printf("vetor antigo:%d\nvetor novo:%d",vetor1[i],vetor2[i]);
  }
  return 0;
}