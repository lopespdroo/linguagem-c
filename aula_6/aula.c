#include <stdio.h>

void recursiva() {
    printf("Ola.\n");
    recursiva();
}

void contagem(int contador) {
    if (contador > 100){
        printf("Fim da contagem.");
    }
    else {
        printf("%d\n", contador);
        contagem(contador + 1);
    }
}

void imprimir(int contador) {
    if (contador == 5){
        printf("%d ", contador);
    }
    else{
        printf("%d ", contador);
        imprimir(contador + 1);
        printf("%d ", contador);
    }

}

int fatorial (int numero) {
    if (numero == 0 || numero == 1){
        return 1;
    }
    return numero * fatorial(numero -1);
}

int main(){

    //recursiva();
    //contagem(0);
    //imprimir(0);

    int resultado = fatorial(5);
    printf("%d", resultado);

    return 0;
}