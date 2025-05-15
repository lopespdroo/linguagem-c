#include <stdio.h>

int main(){

    int n, soma = 0;

    printf("Número N: ");
    scanf("%d", &n);

    for (int contador = 1; contador <= n; contador++){
        if (contador % 2 ==0) {
            soma = soma + contador;
        }
    }

    printf("A soma dos números pares de 1 até %d é: %d", n, soma);

    return 0;
}
