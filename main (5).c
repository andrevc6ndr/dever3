#include <stdio.h>

int main() {
    int codigoVoto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosBranco = 0;

    do {
        printf("Digite o código do voto (1, 2, 3, 4 para candidatos, 5 para voto nulo, 6 para voto em branco, 0 para encerrar): ");
        scanf("%d", &codigoVoto);

        switch (codigoVoto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosBranco++;
                break;
            case 0:
                // Encerra a entrada de votos
                break;
            default:
                printf("Código de voto inválido. Voto não contabilizado.\n");
        }
    } while (codigoVoto != 0);

    // Exibe os resultados
    printf("Total de votos para o Candidato 1: %d\n", candidato1);
    printf("Total de votos para o Candidato 2: %d\n", candidato2);
    printf("Total de votos para o Candidato 3: %d\n", candidato3);
    printf("Total de votos para o Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosBranco);

    return 0;
}