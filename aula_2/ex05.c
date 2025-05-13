#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    numero%2 == 1 ? printf("O número informado é ímpar.") : printf("O número informado é par.");

    return 0;
}