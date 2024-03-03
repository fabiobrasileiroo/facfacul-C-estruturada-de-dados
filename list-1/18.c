#include <stdio.h>

int main()
{
  const int diasTamanho = 121;
  float temperaturas[diasTamanho];
  float menor_temperatura = 40;
  float maior_temperatura = 15;
  float soma_temperaturas = 0;
  int cont_temperaturas_inferiores_media = 0;
  for (int i = 0; i < diasTamanho; i++)
  {
    printf("Digite a temperatura do dia %d: ", i + 1);
    scanf("%f", &temperaturas[i]);
    if (temperaturas[i] < menor_temperatura)
    {
      menor_temperatura = temperaturas[i];
    }
    if (temperaturas[i] > maior_temperatura)
    {
      maior_temperatura = temperaturas[i];
    }

    soma_temperaturas += temperaturas[i];
  }
  float media_temperaturas = soma_temperaturas / diasTamanho;

  for (int i = 0; i < diasTamanho; i++)
  {
    if (temperaturas[i] < media_temperaturas)
    {
      cont_temperaturas_inferiores_media++;
    }
  }
  printf("Menor temperatura ocorrido: %.2f\n", menor_temperatura);
  printf("Maior temperatura ocorrido: %.2f\n", maior_temperatura);
  printf("Temperatura média: %.2f\n", media_temperaturas);
  printf("Número de dias com temperatura inferior á  média: %d\n",cont_temperaturas_inferiores_media );
  return 0;
}