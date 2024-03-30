#include <stdio.h>
// homegenia o mesmo tipo de dado
// heterogia ou composta dois tipos de dados

int main()
{
  const int TAMANHO = 6;
  float matriz[TAMANHO][TAMANHO];
  float multiplicar;
  float vetor36[36];
  int index = 0;
  printf("Digite o valor para ser multiplicado");
  scanf("%f",&multiplicar);
  for(int l=0;l<TAMANHO;l++) {
    for(int c =0; c < TAMANHO;c++) {
      scanf("%f %f",&matriz[l][c]);
      vetor36[index] += matriz[l][c] * multiplicar;
    }
  } 
  for(int i = 0; i < 36;i++) {
    printf("%2.f",vetor36[i]);
  }
  return 0;
}