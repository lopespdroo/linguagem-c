#include <stdio.h>

void digitarNumero(int pares, int impares, int positivos, int negativos) {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero != 0){
        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    
        if (numero > 0) {
            positivos++;
        } else {
            negativos++;
        }

        digitarNumero(pares, impares, positivos, negativos);

    } else {
        printf("\nQuantidade de numeros pares: %d", pares);
        printf("\nQuantidade de numeros ímpares: %d", impares);
        printf("\nQuantidade de numeros positivos: %d", positivos);
        printf("\nQuantidade de numeros negativos: %d", negativos);
    }
}


int main(){

    digitarNumero(0, 0, 0, 0);

    return 0;
}