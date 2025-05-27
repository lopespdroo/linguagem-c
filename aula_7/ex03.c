#include <stdio.h>

int main(){

    int numeros[10], maior = 0, menor;

    for (int i = 0; i < 10; i++){
        int numero;
        print("Digite o valor: ");
        scanf("%d", &numero);
        numeros[i] = numero;
    }

    for (int i = 0; i < 10; i++){
        if (numeros[i] > maior){
            maior = numeros[i];
        }
    }

    menor =  maior;

    for (int i = 0; i < 10; i++){
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
        
    printf("O menor valor é %d", menor);
    printf("O maior valor é %d", maior);

    return 0;   
}