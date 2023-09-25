#include <stdio.h>

int main() {
    int numAlunos = 30;
    float notas1[numAlunos];
    float notas2[numAlunos];
    float notas3[numAlunos];
    float medias[numAlunos];
    float mediaGeral = 0;

    // Loop para ler as notas e calcular as médias ponderadas
    for (int i = 0; i < numAlunos; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        printf("Nota 1: ");
        scanf("%f", &notas1[i]);
        printf("Nota 2: ");
        scanf("%f", &notas2[i]);
        printf("Nota 3: ");
        scanf("%f", &notas3[i]);

        medias[i] = (notas1[i] * 2 + notas2[i] * 4 + notas3[i] * 3) / 10;
        mediaGeral += medias[i];

        // Verifica se o aluno foi aprovado ou reprovado
        if (medias[i] >= 7.0) {
            printf("Aluno %d: Média %.2f - Aprovado\n", i + 1, medias[i]);
        } else {
            printf("Aluno %d: Média %.2f - Reprovado\n", i + 1, medias[i]);
        }
    }

    // Calcula a média geral da turma
    mediaGeral /= numAlunos;
    printf("\nMédia Geral da Turma: %.2f\n", mediaGeral);

    return 0;
}