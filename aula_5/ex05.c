#include <stdio.h>

int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

int dividir(int a, int b){
    if (b == 0){
        printf("Impossível retornar o valor da divisão com quociente 0.");
    }
    else{
        return a / b;
    }
}

int main(){

    int numero1, numero2, operacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d",&numero2);

    printf("\nEscolha a operação: ");
    printf("\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n\n");
    printf("Opção: ");
    scanf("%d", &operacao);

    switch (operacao){
        case 1:
            printf("O resultado da soma é: %d.", somar(numero1, numero2));
            break;
        case 2:
            printf("O resultado da subtração é: %d.", subtrair(numero1, numero2));
            break;
        case 3:
            printf("O resultado da multiplicação é: %d.", multiplicar(numero1, numero2));
            break;
        case 4:
            printf("O resultado da divisão é: %d.", multiplicar(numero1, numero2));
            break;
        default:
            printf("Caractere inesperado. Não foi selecionada nenhuma opção.");
            break;
    }
    
    return 0;
}
