#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

typedef struct {
    int codigo;
    char produto[100];
    int quantidade;
    float precoUnitario;
    float valorTotal;
} Venda;

//Funções de compatibilidade do sistema operacional
void pausar(int segundos);
void apagar();


//Funções do banco de dados 
void carregarDados(Venda **vendas, int *totalVendas, int *codigoAtual, int *capacidade);
void salvarDados(Venda *vendas, int totalVendas);

//Funções utilitárias
int mostrarMenu();
int vendaExiste(Venda *vendas, int totalVendas, int codigo);
void carregando();
void calcularValorTotal(Venda *venda);

//Funções do sistema
void registrarVenda(Venda **vendas, int *totalVendas, int *codigoAtual, int *capacidade);
void exibirVendas(Venda *vendas, int totalVendas);
void buscarVenda(Venda *vendas, int totalVendas);
void atualizarVenda(Venda *vendas, int totalVendas);
void excluirVenda(Venda **vendas, int *totalVendas, int *capacidade);
void calcularTotalGeral(Venda *vendas, int totalVendas);

int main() {
    setlocale(LC_ALL, "portuguese");

    Venda *vendas = NULL;
    int codigoAtual, totalVendas = 0;
    int capacidade = 0;

    carregarDados(&vendas, &totalVendas, &codigoAtual, &capacidade);

    int opcao;

    do {
        opcao = mostrarMenu();
        getchar();

        apagar();

        switch (opcao) {
        case 0:
            salvarDados(vendas, totalVendas);
            printf("Salvando dados e saindo do sistema");
            carregando();
            break;
        case 1:
            registrarVenda(&vendas, &totalVendas, &codigoAtual, &capacidade);
            break;
        case 2:
            exibirVendas(vendas, totalVendas);
            break;
        case 3:
            buscarVenda(vendas, totalVendas);
            break;
        case 4:
            atualizarVenda(vendas, totalVendas);
            break;
        case 5:
            excluirVenda(&vendas, &totalVendas, &capacidade);
            break;
        case 6:
            calcularTotalGeral(vendas, totalVendas);
            break;
        default:
            printf("Opção inválida. Tente novamente.");
        }
        pausar(3);
        apagar();

    } while (opcao != 0);

    if (vendas != NULL) {
        free(vendas);
    }

    return 0;
}

//Funções de compatibilidade do sistema operacional
void pausar(int segundos){
    #ifdef _WIN32
        Sleep(segundos*1000);
    #else
        sleep(segundos);
    #endif
}

void apagar(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

//Funções do banco de dados 
void carregarDados(Venda **vendas, int *totalVendas, int *codigoAtual, int *capacidade) {
    FILE *arquivo = fopen("vendas.txt", "r");

    if (arquivo == NULL) {
        printf("Arquivo não encontrado. Iniciando com dados vazios.\n");
        *codigoAtual = 1001;
        *capacidade = 2; 
        *vendas = (Venda *)malloc(*capacidade * sizeof(Venda));
        if (*vendas == NULL) {
            printf("Erro ao alocar memória inicial.\n");
            exit(1);
        }
        return;
    }

    *capacidade = 2;
    *vendas = (Venda *)malloc(*capacidade * sizeof(Venda));
    if (*vendas == NULL) {
        printf("Erro ao alocar memória inicial.\n");
        exit(1);
    }

    Venda venda;
    while (fscanf(arquivo, "%d,%99[^,],%d,%f,%f\n", &venda.codigo, venda.produto, 
                  &venda.quantidade, &venda.precoUnitario, &venda.valorTotal) == 5) {
        
        if (*totalVendas >= *capacidade) {
            *capacidade *= 2;
            Venda *temp = (Venda *)realloc(*vendas, *capacidade * sizeof(Venda));
            if (temp == NULL) {
                printf("Erro ao realocar memória.\n");
                exit(1);
            }
            *vendas = temp;
        }

        (*vendas)[*totalVendas] = venda;
        (*totalVendas)++;
    }

    fclose(arquivo);

    if (*totalVendas > 0) {
        *codigoAtual = (*vendas)[*totalVendas - 1].codigo + 1;
    } else {
        *codigoAtual = 1001;
    }

    printf("Dados carregados com sucesso! Total de vendas: %d\n", *totalVendas);
    pausar(2);
}

void salvarDados(Venda *vendas, int totalVendas) {
    FILE *arquivo = fopen("vendas.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao salvar os dados!\n");
        return;
    }

    for (int i = 0; i < totalVendas; i++) {
        fprintf(arquivo, "%d,%s,%d,%.2f,%.2f\n", 
                vendas[i].codigo, vendas[i].produto, vendas[i].quantidade,
                vendas[i].precoUnitario, vendas[i].valorTotal);
    }

    fclose(arquivo);
    printf("Dados salvos com sucesso!\n");
}

//Funções utilitárias
int mostrarMenu() {
    int opcao;
    printf("\n===== SISTEMA DE VENDAS =====\n");
    printf("1 - Registrar Nova Venda\n");
    printf("2 - Exibir Todas as Vendas\n");
    printf("3 - Buscar Venda por Código\n");
    printf("4 - Atualizar Dados de Venda\n");
    printf("5 - Excluir Venda\n");
    printf("6 - Calcular Total Geral\n");
    printf("0 - Sair\n");
    printf("=============================\n\n");
    
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}

int vendaExiste(Venda *vendas, int totalVendas, int codigo) {
    if (totalVendas == 0) {
        printf("Nenhuma venda cadastrada!\n");
        return -2;
    }

    for (int i = 0; i < totalVendas; i++) {
        if (vendas[i].codigo == codigo) {
            return i;
        }
    }

    return -1;
}

void carregando() {
    pausar(1);
    printf(".");
    pausar(1);
    printf(".");
    pausar(1);
    printf(".\n");
}

void calcularValorTotal(Venda *venda) {
    venda->valorTotal = venda->quantidade * venda->precoUnitario;
}

//Funções do sistema
void registrarVenda(Venda **vendas, int *totalVendas, int *codigoAtual, int *capacidade) {
    if (*totalVendas >= *capacidade) {
        *capacidade *= 2;
        Venda *temp = (Venda *)realloc(*vendas, *capacidade * sizeof(Venda));
        if (temp == NULL) {
            printf("Erro na realocação de memória.\n");
            exit(1);
        }
        *vendas = temp;
        printf("Capacidade aumentada para %d vendas.\n", *capacidade);
    }

    int i = *totalVendas;
    printf("--- REGISTRO DE VENDA ---\n");
    
    printf("Digite o nome do produto: ");
    fgets((*vendas)[i].produto, 100, stdin);
    (*vendas)[i].produto[strcspn((*vendas)[i].produto, "\n")] = '\0';
    
    printf("Digite a quantidade: ");
    scanf("%d", &(*vendas)[i].quantidade);
    
    printf("Digite o preço unitário: R$ ");
    scanf("%f", &(*vendas)[i].precoUnitario);
    
    if ((*vendas)[i].quantidade <= 0) {
        printf("Quantidade deve ser maior que zero!\n");
        return;
    }
    
    if ((*vendas)[i].precoUnitario <= 0) {
        printf("Preço unitário deve ser maior que zero!\n");
        return;
    }
    
    (*vendas)[i].codigo = *codigoAtual;
    calcularValorTotal(&(*vendas)[i]);

    printf("\nVenda registrada com sucesso!\n");
    printf("--- DADOS DA VENDA ---\n");
    printf("Código: %d\n", (*vendas)[i].codigo);
    printf("Produto: %s\n", (*vendas)[i].produto);
    printf("Quantidade: %d\n", (*vendas)[i].quantidade);
    printf("Preço Unitário: R$ %.2f\n", (*vendas)[i].precoUnitario);
    printf("Valor Total: R$ %.2f\n", (*vendas)[i].valorTotal);

    (*codigoAtual)++;
    (*totalVendas)++;
}

void exibirVendas(Venda *vendas, int totalVendas) {
    if (totalVendas == 0) {
        printf("Nenhuma venda cadastrada!\n");
        return;
    }

    printf("--- TODAS AS VENDAS ---\n\n");
    for (int i = 0; i < totalVendas; i++) {
        printf("--- VENDA %d ---\n", i + 1);
        printf("Código: %d\n", vendas[i].codigo);
        printf("Produto: %s\n", vendas[i].produto);
        printf("Quantidade: %d\n", vendas[i].quantidade);
        printf("Preço Unitário: R$ %.2f\n", vendas[i].precoUnitario);
        printf("Valor Total: R$ %.2f\n\n", vendas[i].valorTotal);
    }
}

void buscarVenda(Venda *vendas, int totalVendas) {
    int codigo;
    printf("\nDigite o código da venda: ");
    scanf("%d", &codigo);

    int i = vendaExiste(vendas, totalVendas, codigo);

    printf("Buscando venda");
    carregando();

    if (i == -1) {
        printf("Venda não encontrada.\n");
        return;
    }
    if (i >= 0) {
        printf("\n--- DADOS DA VENDA ---\n");
        printf("Código: %d\n", vendas[i].codigo);
        printf("Produto: %s\n", vendas[i].produto);
        printf("Quantidade: %d\n", vendas[i].quantidade);
        printf("Preço Unitário: R$ %.2f\n", vendas[i].precoUnitario);
        printf("Valor Total: R$ %.2f\n", vendas[i].valorTotal);
    }
}

void atualizarVenda(Venda *vendas, int totalVendas) {
    int codigo;
    printf("Informe o código da venda: ");
    scanf("%d", &codigo);

    int indice = vendaExiste(vendas, totalVendas, codigo);

    printf("Buscando venda");
    carregando();

    if (indice == -1) {
        printf("\nVenda não encontrada!\n");
        return;
    }
    if (indice >= 0) {
        getchar(); 

        printf("\n--- DADOS ATUAIS ---\n");
        printf("Produto: %s\n", vendas[indice].produto);
        printf("Quantidade: %d\n", vendas[indice].quantidade);
        printf("Preço Unitário: R$ %.2f\n", vendas[indice].precoUnitario);
        
        printf("\n--- ATUALIZAÇÃO ---\n");
        printf("Novo produto: ");
        fgets(vendas[indice].produto, 100, stdin);
        vendas[indice].produto[strcspn(vendas[indice].produto, "\n")] = '\0';
        
        printf("Nova quantidade: ");
        scanf("%d", &vendas[indice].quantidade);
        
        printf("Novo preço unitário: R$ ");
        scanf("%f", &vendas[indice].precoUnitario);
        
        if (vendas[indice].quantidade <= 0) {
            printf("Quantidade deve ser maior que zero!\n");
            return;
        }
        
        if (vendas[indice].precoUnitario <= 0) {
            printf("Preço unitário deve ser maior que zero!\n");
            return;
        }
        
        calcularValorTotal(&vendas[indice]);
        
        printf("\n--- DADOS ATUALIZADOS ---\n");
        printf("Código: %d\n", vendas[indice].codigo);
        printf("Produto: %s\n", vendas[indice].produto);
        printf("Quantidade: %d\n", vendas[indice].quantidade);
        printf("Preço Unitário: R$ %.2f\n", vendas[indice].precoUnitario);
        printf("Valor Total: R$ %.2f\n", vendas[indice].valorTotal);
    }
}

void excluirVenda(Venda **vendas, int *totalVendas, int *capacidade) {
    int codigo;
    printf("\nInforme o código da venda: ");
    scanf("%d", &codigo);

    int indice = vendaExiste(*vendas, *totalVendas, codigo);

    if (indice == -1) {
        printf("Venda não encontrada.\n");
        return;
    }
    if (indice >= 0) {
        printf("Excluindo venda");
        carregando();
        
        for (int i = indice; i < (*totalVendas) - 1; i++) {
            (*vendas)[i] = (*vendas)[i + 1];
        }

        (*totalVendas)--;

        if (*totalVendas > 0) {
            Venda *temp = (Venda *)realloc(*vendas, (*totalVendas) * sizeof(Venda));
            if (temp != NULL) {
                *vendas = temp;
            }
        }

        printf("Venda excluída com sucesso!\n");
    }
}

void calcularTotalGeral(Venda *vendas, int totalVendas) {
    if (totalVendas == 0) {
        printf("Nenhuma venda cadastrada!\n");
        return;
    }

    float totalGeral = 0.0;
    int quantidadeTotal = 0;

    printf("--- RESUMO GERAL ---\n");
    for (int i = 0; i < totalVendas; i++) {
        totalGeral += vendas[i].valorTotal;
        quantidadeTotal += vendas[i].quantidade;
    }

    printf("Total de vendas cadastradas: %d\n", totalVendas);
    printf("Quantidade total de produtos vendidos: %d\n", quantidadeTotal);
    printf("VALOR TOTAL GERAL: R$ %.2f\n", totalGeral);
    printf("Valor médio por venda: R$ %.2f\n", totalGeral / totalVendas);
}
