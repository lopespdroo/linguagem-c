#include <stdio.h>

int main(){

    int numeros[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &numeros[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        int soma = 0;
        for (int j = 0; j < 3; j++){
            soma += numeros[i][j];
        }
        printf("Soma da linha %d: %d\n", i, soma);
    }

    for (int j = 0; j < 3; j++){
        int soma = 0;
        for (int i = 0; i < 3; i++){
            soma += numeros[i][j];
        }
        printf("Soma da linha %d: %d\n", j, soma);
    }

    return 0;
}