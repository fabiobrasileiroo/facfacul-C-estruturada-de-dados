#include <stdio.h>

int main()
{
  int vetor[100];
  for (int i = 2; i <= 100; i += 2)
  {
    vetor[i] = i;
  }
  for (int i = 2; i <= 100; i += 2)
  {
    printf("%d ", vetor[i]);
  }
  return 0;
}

