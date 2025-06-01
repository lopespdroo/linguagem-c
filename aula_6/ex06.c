#include <stdio.h>

int buscarNumFrequente(int numeros[9]){
    int frequencia = 0;
    int maiorFrequencia = 0;
    int maiorValor;

    for (int i = 0; i < 10; i++){
        frequencia = 0;
        for (int j = 0; j < 10; j++){
            if (numeros[i] == numeros[j]){
                frequencia++;
            }

            if (frequencia > maiorFrequencia){
                maiorFrequencia = frequencia;
                maiorValor = numeros[i];
            }
        }
    }

    return maiorValor;
}
//7 5 9 6 7 8 2 3 2 10
int main(){

    int numeros[9];

    for (int i = 0; i < 10; i++){
        int numero;
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &numero);
        numeros[i] = numero;
    }

    int res = buscarNumFrequente(numeros);

    printf("O número que mais se repete é: %d", res);

    return 0;
}