#include <stdio.h>

int main(){

    int numeros[3][3];
    int soma = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &numeros[i][j]);

            soma = soma + numeros[i][j];

        }
    }

    printf("A soma de todos os valores da matriz é: %d", soma);

    return 0;  
}