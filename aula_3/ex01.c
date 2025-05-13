#include <stdio.h>

int main(){

    int anoNascimento, anoAtual, idade;

    printf("Digite o ano em que você nasceu: ");
    scanf("%d", &anoNascimento); //anonascimento
    printf("Em qual ano você está fazendo essa consulta (ano atual)? ");
    scanf("%d", &anoAtual); //anoatual

    idade = (anoAtual - anoNascimento);

    if (idade>=18) {
        printf("Perfeito, você pode tirar a sua CNH!");
    } else {
        printf("Infelizmente você ainda não tem a idade necessária para tirar sua CNH.");
    }

    return 0;
}