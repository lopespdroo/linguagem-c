#include <stdio.h>

int main(){

    int numeros[3][3];
    int maior = 0, menor;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &numeros[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (numeros[i][j] > maior){
                maior = numeros[i][j];
            }
        }
    }

    menor = maior;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (numeros[i][j] < menor){
                menor = numeros[i][j];
            }
        }
    }

    printf("O menor valor da matriz é: %d", menor);
    printf("O maior valor da matriz é: %d", maior);

    return 0;
}