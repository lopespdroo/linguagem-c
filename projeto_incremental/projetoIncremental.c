#include <stdio.h>
#include <stdlib.h>


//funções que determinam o sistema operacional e executam a pausa e a limpeza de tela a partir disso
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

void pausar(int segundos){
    #ifdef _WIN32
        Sleep(segundos * 1000);
    #else
        sleep(segundos);
    #endif
}

void limparTela(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
//---------------------------------------------------------------------------------------------

int mostrarMenu();
void criarConta();
void exibirContas();
void depositar();
void sacar();
void buscarConta();

int main(){
    
    int opcao;

    do {

         opcao = mostrarMenu();

        if (opcao == 0){
            printf("Saindo do sistema...");
            break;
        }

        switch (opcao){
            case 1:
                criarConta();
                break;
            case 2:
                depositar();
                break;
            case 3:
                exibirContas();
                break;
            case 4:
                sacar();
                break;
            case 5:
                buscarConta();
                break;
            default:
                printf("Opção inválida. Tente novamente.");
                break;
        }

        pausar(3);
        limparTela();
        
    } while (1);

    return 0;
}

int mostrarMenu(){
    int opcaoMenu;

    printf("==== SISTEMA BANCÁRIO ====\n");
    printf("0 - Sair\n1 - Criar Conta\n2 - Exibir Contas\n3 - Depositar\n4 - Sacar\n5 - Buscar Conta\n");
    printf("==========================\n\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcaoMenu);

    return opcaoMenu;
}

void criarConta(){
    printf("Opção Criar Conta selecionada.\n");
}

void exibirContas(){
    printf("Opção Exibir Contas selecionada.\n");
}

void depositar(){
    printf("Opção Depositar selecionada.\n");
}

void sacar(){
    printf("Opção Sacar selecionada.\n");
}

void buscarConta(){
    printf("Opção Buscar Conta selecionada.\n");
}
