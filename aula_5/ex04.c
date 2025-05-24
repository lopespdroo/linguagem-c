include <stdio.h>

int ehBissexto(int ano){
    int valor;

    if ((ano%4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        valor = 1;
    }
    else {
        valor = 0;
    }

    return valor;
}

int main(){

    int ano, bissexto;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    bissexto = ehBissexto(ano);

    printf("%d", bissexto);

    if (bissexto == 0){
        printf("\n%d não é um ano bissexto.", ano);
    }
    else{
        printf("\n%d é um ano bissexto.", ano);
    }

    return 0;
}
