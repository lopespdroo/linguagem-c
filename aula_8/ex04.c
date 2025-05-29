#include <stdio.h>

int main(){

    int numeros[3][3];
    int searchNumber, encontrado = 0;

    printf("Digite o número a ser procurado: \n");
    scanf("%d", &searchNumber);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &numeros[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (searchNumber == numeros[i][j]){
                printf("O número %d foi encontrado nas posições:\nLinha[%d][%d]\n", searchNumber,i,j);
                encontrado = 1;
            }
        }
    }

    if (encontrado == 0) {
        printf("O número %d não foi encontrado.", searchNumber);
    }

    return 0;
}