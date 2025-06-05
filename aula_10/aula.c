#include <stdio.h>
#include <string.h>

struct  aluno
{
    char nome[50];
    int idade;
    float nota;
};

int main(){

    /*struct aluno aluno;

    aluno.idade = 17;
    aluno.nota = 7.5;
    strcpy(aluno.nome, "Ana");

    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f\n\n", aluno.nota);

    struct aluno aluno2 = {"Pedro", 17, 8.1};

    printf("Nome: %s\n", aluno2.nome);
    printf("Idade: %d\n", aluno2.idade);
    printf("Nota: %.2f\n\n", aluno2.nota);

    struct aluno aluno3;

    printf("Nome: ");
    scanf("%49[^\n]", aluno3.nome);
    printf("Idade: ");
    scanf("%d", aluno3.nome);
    printf("Nota: ");
    scanf("%f", aluno3.nota);*/

    struct aluno alunos[3];

    for (int i = 0; i < 3; i++){
        printf("Nome: ");
        scanf("%49[^\n]", alunos[i].nome);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);

    }

    return 0;
}