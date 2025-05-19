#include <stdio.h>

int main(){

    float pH;
    printf("--- AVALIADOR DE PH DE SUBSTÂNCIAS ---\nDigite '-1' para sair.\n");

    while(1){

        printf("Informe o pH da substância a ser avaliada: ");
        scanf("%f", &pH);

        if (pH == -1){
            break;
        }

        if (pH == 7){
            printf("substância Neutra\n");
        }
        else if (pH > 7){
            printf("subsstância Básica\n");
        }
        else {
            printf("substância Ácida\n");
        }
    }

    return 0;
}