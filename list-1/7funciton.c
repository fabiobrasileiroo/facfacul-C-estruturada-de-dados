#include <stdio.h>

int main()
{
  return questao(); 
}

int questao()
{
  int vet[50], cont = 0;
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      vet[cont] = i;
      cont++;
    }
  }
  for (int i = 0; i < cont; i++)
  {
    return printf("%d\n", vet[i]);
  }
}