#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main(){

    struct Pessoa pessoa;

    printf("------- CADASTRO -------\n");
    printf("Digite seu nome: ");
    fgets(pessoa.nome, 50, stdin);

    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);

    printf("\n\n---- DADOS ----\nNome: %sIdade: %d", pessoa.nome, pessoa.idade);
    
    return 0;
}