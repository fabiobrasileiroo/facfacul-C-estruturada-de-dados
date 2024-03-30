#include <stdio.h>

#define TAMANHO 5

typedef struct
{
  int num;
  int mesDeTrabalho;
} Emprego;
// imprir o 3 empregrados mais recentes
// nao pode ter dois empregados admitidos no mesmo mes
int main()
{
  Emprego empregados[TAMANHO];
  for (int i = 0; i < TAMANHO; i++)
  {
    printf("Digite o número do funcionario[%d]: ", i + 1);
    scanf("%d", &empregados[i].num);
    printf("Digite o número de meses de trababalho[%d]: ", i + 1);
    scanf("%d", &empregados[i].mesDeTrabalho);
  }

  for (int i = 0; i < TAMANHO - 1; i++)
  {
    for (int j = i + 1; j < TAMANHO; j++)
    {
      if (empregados[i].mesDeTrabalho > empregados[j].mesDeTrabalho)
      {
        Emprego temp = empregados[i];
        empregados[i] = empregados[j];
        empregados[j] = temp;
      }
    }
  }
  // printf("\nOs três empregados mais recentes são:\n");
  // for (int i = 0; i < 3 && i < TAMANHO; i++)
  // {
  //   printf("Número do funcionário: %d, Meses de trabalho: %d\n", empregados[i].num, empregados[i].mesDeTrabalho);
  // }
  int num_empregados_recentes = 0;
  for (int i = 0; i < TAMANHO && num_empregados_recentes < 3; i++) {
    // verificar se o empregado atual é o primeiro da lista ou seja 
    // i==0 ou seja o mes de trabalho do empregado atual é diferente do mês
    // de trabalho do empregado anterior
    if (i == 0 || empregados[i].mesDeTrabalho != empregados[i - 1].mesDeTrabalho) {
        printf("Número do funcionário: %d, Meses de trabalho: %d\n", empregados[i].num, empregados[i].mesDeTrabalho);
        num_empregados_recentes++;
    }
  }

  return 0;
}