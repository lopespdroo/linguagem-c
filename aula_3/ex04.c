#include <stdio.h>

int main(){

    int numero1, numero2, operador, resultado;

    printf("\nEste programa simula uma calculadora de número inteiros.\nAqui está a lista para utilizar os operadores quando for solicitado:\n- 1. Soma\n- 2. Subtração\n- 3. Multiplicação\n- 4. Divisão\n\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite qual tipo de operador vai utilizar, segundo a tabela anterior: ");
    scanf("%d", &operador);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    switch (operador){
        case 1:
            resultado = numero1 + numero2;
            printf("Aqui está o resultado da sua soma: %d", resultado);
        break;
        case 2:
            resultado = (numero1-numero2);
            printf("Aqui está o resultado da sua subtração: %d", resultado);
        break;
        case 3:
            resultado = (numero1*numero2);
            printf("Aqui está o resultado da sua multiplicação: %d", resultado);
        break;
        case 4:
            resultado = (numero1/numero2);
            printf("Aqui está o resultado da sua divisão: %d", resultado);
        break;
        default:
            printf("Valor incorreto. Este número não corresponde a nenhum operador.");
    }

    return 0;
}