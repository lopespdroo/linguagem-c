#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    int opcaoMenu;

    while (1) {

        printf("==== SISTEMA BANCÁRIO ====\n");
        printf("0 - Sair\n1 - Criar Conta\n2 - Exibir Contas\n3 - Depositar\n4 - Sacar\n5 - Buscar Conta\n");
        printf("==========================\n\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcaoMenu);

        if (opcaoMenu == 0){
            printf("Saindo do sistema...");
            break;
        }

        switch (opcaoMenu){
            case 1:
                printf("Opção Criar Conta selecionada.");
                break;
            case 2:
                printf("Opção Exibir Contas selecionada");
                break;
            case 3:
                printf("Opção Depositar selecionada");
                break;
            case 4:
                printf("Opção Sacar selecionada.");
                break;
            case 5:
                printf("Opção Buscar Conta selecionada.");
                break;
            default:
                printf("Opção inválida. Tente novamente.");
                break;
        }

        Sleep(3000);
        system("cls");
        
    }

    return 0;
}