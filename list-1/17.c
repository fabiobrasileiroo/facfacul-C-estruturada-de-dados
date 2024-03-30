#include <stdio.h>

int main() {
  const int tamanho = 5;
  int valores[tamanho];
  int contPar = 0;
  int contImpar = 0;
  int maiorNumPar = -9999;
  int menorNumImpar = 9999;
  int somaPar = 0;
  int somaImpar = 0;
  for(int i = 0;i < tamanho; i++) {
    printf("Digite um número[%d]:",i);
    scanf("%d",&valores[i]);
    if(valores[i] %2 == 0) {
      contPar++;
      somaPar += valores[i];
      if(valores[i]> maiorNumPar) {
        maiorNumPar = valores[i];
      }
    } else if(valores[i] % 2 != 0) {
      contImpar++;
      somaImpar+= valores[i];
      if(valores[i]< menorNumImpar) {
        menorNumImpar = valores[i];
      }
    }
  }

  int mediaPar = (contPar!= 0) ? somaPar/contPar: 0;
  int mediaImpar =(contImpar !=0) ? somaImpar/contImpar: 0;

  printf("\nMedia de Impares: %d\n", mediaImpar);
  printf("Media de Pares: %d\n", mediaPar);

  printf("Valores pares maiores que a média de Par:\n");
  for(int i = 0; i < tamanho; i++) {
    if(valores[i] % 2 == 0 && valores[i]> mediaPar) {
      printf("%d\n", valores[i]);
    } 
  } 
  printf("Valores impares menores que a media de Impar:\n");
  for(int i = 0; i< tamanho; i++) {
    if(valores[i] % 2 != 0 && valores[i] < mediaImpar) {
      printf("%d\n", valores[i]);
    }
  }

  printf("Maior número par: %d\n",maiorNumPar);
  printf("Menor número impar: %d\n",menorNumImpar);

  return 0;
}