#include <stdio.h>

int main() {
  float alturaDeAtleta[10];
  float soma = 0;
  for(int i = 1; i<=10;i++) {
    scanf("%f",&alturaDeAtleta[i]);
    soma += alturaDeAtleta[i];
  }
  float alturaMedia = soma/10;
  printf("Media: %2.f\n",alturaMedia);
  for(int i = 1; i<=10;i++) {
    if(alturaDeAtleta[i]>alturaMedia ){
      printf("Aluno %d - %2.f\n",i,alturaDeAtleta[i]);
    }
  }
  return 0;
}