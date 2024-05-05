// #include <stdio.h>
// #define TAMANHO 500
// int main() {
//   struct Habitantes {
//     int idades;
//     char sexo;
//     float salarios;
//     int numFilhos
//   }
//   struct Habitantes familia[TAMANHO];
//   for(size_t i = 0; i< TAMANHO;i++) {

//   }

//   return 0;
// }
#include <stdio.h>

// Definição da estrutura para armazenar informações dos habitantes
struct Habitante {
    int idade;
    char sexo;
    float salario;
    int num_filhos;
};

// Função para armazenar as informações dos habitantes na estrutura de dados
void inserirHabitantes(struct Habitante habitantes[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite a idade do habitante %d: ", i + 1);
        scanf("%d", &habitantes[i].idade);
        
        printf("Digite o sexo do habitante %d (M/F): ", i + 1);
        scanf(" %c", &habitantes[i].sexo);
        
        printf("Digite o salário do habitante %d: ", i + 1);
        scanf("%f", &habitantes[i].salario);
        
        printf("Digite o número de filhos do habitante %d: ", i + 1);
        scanf("%d", &habitantes[i].num_filhos);
    }
}

// Função para calcular a média dos salários dos habitantes
float calcularMediaSalarios(struct Habitante habitantes[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += habitantes[i].salario;
    }
    return soma / tamanho;
}

int main() {
    // Definindo o número de habitantes
    int num_habitantes = 500;
    
    // Criando um array de habitantes
    struct Habitante habitantes[num_habitantes];
    
    // Chamando a função para inserir informações dos habitantes
    inserirHabitantes(habitantes, num_habitantes);
    
    // Chamando a função para calcular a média dos salários
    float media_salarios = calcularMediaSalarios(habitantes, num_habitantes);
    
    // Exibindo a média dos salários
    printf("A media dos salarios dos habitantes e: %.2f\n", media_salarios);
    
    return 0;
}
