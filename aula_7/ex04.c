#include <stdio.h>

int main(){

    float notas[9];
    float soma = 0, media, notasMaior;
    int  qtdNotasMaior = 0;

    for (int i = 0; i < 10; i++){
        float nota;
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        notas[i] = nota;

        soma = soma + nota;
    }

    media = (soma/10);
    printf("Média das notas: %.1f\n", media);

    for (int i = 0; i < 10; i++){
        if (notas[i] > media){
            qtdNotasMaior++;
        }
    }

    printf("\nQuantidade de notas acima da média: %d\n", qtdNotasMaior);
    printf("Notas acima da média:\n");
    for (int i = 0; i < 10; i++){
        if (notas[i] > media){
           printf("- %.1f\n", notas[i]);
        }   
    }

    return 0;
}