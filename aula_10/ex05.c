#include <stdio.h>
#include <string.h>

typedef struct Endereco {
    char rua[30];
    int numero;
    char cidade[20];
} Endereco;

typedef struct Funcionario {
    char nome[50];
    char cargo[20];
    Endereco endereco;
} Funcionario;


int main(){

    int qtdCadastro = 2;
    Funcionario funcionario[qtdCadastro]; //cria a struct funcionario como array de tamanho informado na variável acima
    Endereco endereco; //cria a struct endereco

    printf("--- CADASTRO ---\n");
    for (int i = 0; i < qtdCadastro; i++){

        printf("%d° Funcionário\n", i+1);
        printf("Nome: ");
        fgets(funcionario[i].nome, 50, stdin);
        funcionario[i].nome[strcspn(funcionario[i].nome, "\n")] = '\0';

        printf("Cargo: ");
        fgets(funcionario[i].cargo, 20, stdin);
        funcionario[i].nome[strcspn(funcionario[i].nome, "\n")] = '\0';

        printf("Rua: ");
        fgets(funcionario[i].endereco.rua, 30, stdin);
        funcionario[i].endereco.rua[strcspn(funcionario[i].endereco.rua, "\n")] = '\0';

        printf("Número: ");
        scanf("%d", &funcionario[i].endereco.numero);

        getchar(); //limpa o buffer

        printf("Cidade: ");
        fgets(funcionario[i].endereco.cidade, 20, stdin);
        funcionario[i].endereco.cidade[strcspn(funcionario[i].endereco.cidade, "\n")] = '\0';

        getchar(); //limpa o buffer
    }

    printf("------------ DADOS FUNCIONÁRIOS ------------");
    for (int i = 0; i < qtdCadastro; i++){
        printf("\nFuncionário: %s\n", funcionario[i].nome);
        printf("Cargo: %s", funcionario[i].cargo);
        printf("Endereço: %s, %d - %s\n", funcionario[i].endereco.rua, funcionario[i].endereco.numero, funcionario[i].endereco.cidade);
    }

    return 0;
}