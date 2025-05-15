#include <stdio.h>

int main() {
    int numero, positivos = 0, negativos = 0;

    printf("---DIGITE NÚMEROS INTEIROS\n---(0 para encerrar)\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 0) {
            positivos++;
        } else {
            negativos++;
        }
    }

    printf("\nQuantidade de números positivos: %d\n", positivos);
    printf("Quantidade de números negativos: %d\n", negativos);

    return 0;
}
