#include <stdio.h>

int main(){
    
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade<0 || idade> 120){
        printf("Idade inválida.");
    }
    else if (idade >= 65) {
        printf("Você é um idoso.");
    }
    else if (idade >= 18) {
        printf("Você é um adulto.");
    }
    else if (idade >= 13) {
        printf("Você é um adolescente.");
    }
    else if (idade < 13) {
        printf("Você é uma criança.");
    }

    return 0;
}