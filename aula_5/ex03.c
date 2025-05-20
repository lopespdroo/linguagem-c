#include <stdio.h>

void situacaoFinal(float media, int faltas){
    if (faltas>10){
        printf("REPROVADO");
    }
    else if(media>=9.5){
        printf("APROVADO COM LOUVOR");
    }
    else if(media>=7){
        printf("APROVADO");
    }
    else{
        printf("REPROVADO");
    }
}

int main(){

    float mediaAluno;
    int qtdFaltas;

    printf("Média: ");
    scanf("%f", &mediaAluno);

    printf("Faltas: ");
    scanf("%d", &qtdFaltas);

    situacaoFinal(mediaAluno, qtdFaltas);

    return 0;
}