
// //
// #include <stdio.h>
// #define TAMANHO 3

// int main() {
//   struct DadosAlunos {
//     float n1;
//     float n2;
//     float media;
//     int idade;
//   };
//   struct DadosAlunos aluno[TAMANHO]; 

//   for(size_t i = 0; i < TAMANHO; i++) {
//     printf("Digite a primeira nota do aluno %zu: ", i+1);
//     scanf("%f", &aluno[i].n1);
//     printf("Digite a segunda nota do aluno %zu: ", i+1);
//     scanf("%f", &aluno[i].n2);
//     printf("Digite a idade do aluno %zu: ", i+1);
//     scanf("%d", &aluno[i].idade);
//     aluno[i].media = (aluno[i].n1 + aluno[i].n2) / 2;
//   }

//   for(size_t i = 0; i < TAMANHO; i++) {
//     printf("A média do aluno %zu é: %.2f\n", i+1, aluno[i].media);
//     printf("A idade do aluno %zu é: %d\n", i+1, aluno[i].idade);
//   }
    
//   return 0;
// }
