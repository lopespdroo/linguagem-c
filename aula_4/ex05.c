#include <stdio.h>

int main(){

    int senhaInformada, senha = 1234;

    do{

        printf("\nDigite a senha(tem quatro dígitos): ");
        scanf("%d", &senhaInformada);

        if (senhaInformada==senha){
            printf("Acesso liberado.\n");
            break;
        }
        else if(senhaInformada!=senha){
            printf("Senha incorreta. Tente novamente.\n");
        }

    }while (1);

    return 0;
}