#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media;
    int i = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = ((nota1 + nota2 + nota3) / 3);

    if (nota1 > media){
        i++;
    }
    if (nota2 > media){
        i++;
    }
    if (nota3 > media){
        i++;
    }

    printf("A média das notas é: %.2f\nQuantas notas estão acima da média: %d", media, i);

    return 0;
}