#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  // A mega-sena precisa de 6 numeros
  int qtd_numbs = 6;
  int nums_megasena[qtd_numbs];

  // Inicializar o cronômetro para obter os números aleatórios
  srand(time(NULL));
  // Verificar se o número foi repetido
  for (size_t i = 0; i < qtd_numbs; ++i)
  {
    // gerar os números de 1 até 60
    nums_megasena[i] = (rand() % 60 + 1);
    for (size_t j = 0; j < i; ++j)
    {
      if (nums_megasena[i] == nums_megasena[j])
      {
        --i;
        break;
      }
    }
  }

  for (size_t i = 0; i < qtd_numbs; ++i)
  {
    for (size_t j = i + 1; j < qtd_numbs; ++j)
    {
      if (nums_megasena[i] > nums_megasena[j])
      {
        int temp = nums_megasena[i];
        nums_megasena[i] = nums_megasena[j];
        nums_megasena[j] = temp;
      }
    }
  }
  // Imprimir os números
  for (size_t i = 0; i < qtd_numbs; i++)
  {
    if (nums_megasena[i] < 10)
    {
      printf("0%d ", nums_megasena[i]);
    }
    else
    { 
      printf("%d ", nums_megasena[i]);
    }
  }
  putchar('\n');
  return 0;
}