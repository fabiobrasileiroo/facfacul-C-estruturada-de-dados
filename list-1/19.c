#include <stdio.h>
// 100 mercadorias diferente de 1 a 100 inteiro
// mercadoria tem preco e venda

// calcular o faturamento mensal do armazem
// 
#define NUM_MERCADORIAS 5 

int main() {
  float precos[NUM_MERCADORIAS];
  for(int i = 0; i < NUM_MERCADORIAS; i++) {
    printf("Mercadoria %d: R$",i+1);
    scanf("%f",&precos[i]);
  }
  float faturamento_total = 0.0;

  printf("Informe as quantidades vendidas para cada mercadoria:\n");
  for(int i = 0; i< NUM_MERCADORIAS; i++) {
    int quantidade;
    printf("Quantidades vendida para a mercadoria %d ", i + 1);
    scanf("%d",&quantidade);
    if(quantidade > 0) {
      faturamento_total += quantidade * precos[i];
    }
  }
  printf("O faturamento mensal do armazém é: R$%.2f\n",faturamento_total);
  return 0;

}