#include <stdio.h>

struct Aluno {
    char nome[50];
    float nota;
};

int main(){

    
    int qtdAlunos;
    float media;

    printf("Quantos alunos você quer cadastrar?\n");
    scanf("%d", &qtdAlunos);

    qtdAlunos = qtdAlunos - 1;

    getchar();

    struct Aluno aluno[qtdAlunos];

    for (int i = 0; i <= qtdAlunos; i++){
        printf("%d° Aluno\n", i+1);

        printf("Nome: ");                       //lê o nome
        scanf("%49[^\n]", aluno[i].nome);
        printf("Nota: ");                       //lê a nota
        scanf("%f", &aluno[i].nota);

        media += aluno[i].nota;

        getchar();                              //limpa o buffer
    }

    for (int i = 0; i <= qtdAlunos; i++){
        printf("Dados do %d° aluno:\n", i+1);

        printf("Nome: %s\n", aluno[i].nome);
        printf("Nota: %.2f\n", aluno[i].nota);
    }

    printf("A média geral é %.2f", media);

    return 0;
}