#include <stdio.h>

int main(){

    int numeros[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um valor: ");
            scanf("%d", &numeros[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d][%d] = %d\n", i,j, numeros[i][j]);
        }
        printf("\n");
    }
    return 0;
}