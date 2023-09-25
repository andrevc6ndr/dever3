#include <stdio.h>
#include <string.h>

#define NUM_CIDADES 200

struct Cidade {
    int codigo;
    char estado[3];
    int veiculos;
    int acidentes;
};

int main() {
    struct Cidade cidades[NUM_CIDADES];
    int i;
    int maiorIndice = 0, menorIndice = -1;
    float mediaVeiculos = 0.0, mediaAcidentesRS = 0.0;
    int totalVeiculosRS = 0, totalAcidentesRS = 0;
    char cidadeMaiorIndice[50], cidadeMenorIndice[50];

    for (i = 0; i < NUM_CIDADES; i++) {
        printf("Informe o código da cidade: ");
        scanf("%d", &cidades[i].codigo);

        if (cidades[i].codigo == 0) {
            // Termina a entrada de dados
            break;
        }

        printf("Informe o estado da cidade: ");
        scanf("%s", cidades[i].estado);
        printf("Informe o número de veículos de passeio em 1992: ");
        scanf("%d", &cidades[i].veiculos);
        printf("Informe o número de acidentes de trânsito com vítimas em 1992: ");
        scanf("%d", &cidades[i].acidentes);

        // Atualiza a média de veículos
        mediaVeiculos += cidades[i].veiculos;

        // Verifica o maior e o menor índice de acidentes
        if (i == 0 || cidades[i].acidentes > cidades[maiorIndice].acidentes) {
            maiorIndice = i;
            strcpy(cidadeMaiorIndice, cidades[i].estado);
        }
        if (i == 0 || cidades[i].acidentes < cidades[menorIndice].acidentes) {
            menorIndice = i;
            strcpy(cidadeMenorIndice, cidades[i].estado);
        }

        // Verifica se a cidade é do Rio Grande do Sul e atualiza as médias
        if (strcmp(cidades[i].estado, "RS") == 0) {
            totalVeiculosRS += cidades[i].veiculos;
            totalAcidentesRS += cidades[i].acidentes;
        }
    }

    // Calcula as médias
    mediaVeiculos /= i;
    if (totalVeiculosRS > 0) {
        mediaAcidentesRS = (float)totalAcidentesRS / totalVeiculosRS;
    }

    // Exibe os resultados
    printf("a) Maior índice de acidentes: %d em %s\n", cidades[maiorIndice].acidentes, cidadeMaiorIndice);
    printf("   Menor índice de acidentes: %d em %s\n", cidades[menorIndice].acidentes, cidadeMenorIndice);
    printf("b) Média de veículos nas cidades brasileiras: %.2f\n", mediaVeiculos);
    printf("c) Média de acidentes com vítimas entre as cidades do Rio Grande do Sul: %.2f\n", mediaAcidentesRS);

    return 0;
}