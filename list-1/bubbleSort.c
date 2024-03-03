#include <stdio.h>
int main()
{
  // A variavel v é a passagem do vetor
  // A Variavel N é o tamanho do ARRAY
  void bubbleSort(int *v, int N)
  {
    // AUX é a varaivel que vai ser usada para auxiliar nas trocas de posição dos vetores se necessarias
    // FIM vai receber o tamanho do vetor para utilizar no FOR
    // CONTINUA tem o intuito de fazer o
    int i, continua, aux, fim = N;
    do
    {
      // Inicia a variavel continua com 0
      continua = 0;
      // O FOR interagem percorrendo vetor da posicção 0 até sua ultima posição
      for (i = 0; i < fim - 1, i++)
      {
        // O IF compara valores de dois em dois, começando da posição 0 até sua ultima posição do vetor, caso os valores
        // comparados seja o que se espera dentro da condição do IF, então começa a mudança de posição(ORDENAÇÂO) dos valores
        // sempre buscando levar o maior valor da sequencia para a ultima posicao do vetor
        if (v[i] > v[i + 1])
        {
          // A variavel AUX vai receber o primeiro valor da comparação e armazenalo
          aux = v[i];
          // A variavel v[i] vai receber o valor da variavel v[i+1], substituindo o seu antigo valor, e assim trocando de posicao que antes era v[i+1]
          // agora passa a ser v[i]
          v[i] = v[i + 1];
          // A variavel v[i+1] vai receber o valor que foi armazenado em AUX e assim trocando de posição o valor comparado
          // Assim o valor comparado que estava na posição v[i] passa a ser agora v[i+1]
          v[i + 1] = aux;
          // Continua vai receber a posição que esta sendo comparada;
          continua = i;
        }
      }
      // A variavel fim é aquela que contem o valor do vetor, e ela vai sendo decrementada cada vez que o laço for terminar
      fim--;
      // Aqui fica a comparação do repita até, enquanto a variavel continua é diferente de 0
      // ele vai continuar comparando dentro do for para ordenar até que nenhum elemento da sequencia precise ser alterado de posição
    } while (continua != 0);
  }
}
