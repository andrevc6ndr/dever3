#include <stdio.h>

int main() {
    double salario, mediaSalario = 0, maiorSalario = 0;
    int numFilhos, totalHabitantes = 0, totalSalarioAte100 = 0;
    double mediaFilhos = 0;

    do {
        printf("Informe o salário do habitante (ou um valor negativo para encerrar): ");
        scanf("%lf", &salario);

        if (salario >= 0) {
            printf("Informe o número de filhos: ");
            scanf("%d", &numFilhos);

            // Atualiza a média de salário
            mediaSalario += salario;

            // Atualiza a média de filhos
            mediaFilhos += numFilhos;

            // Verifica o maior salário
            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            // Verifica se o salário está até R$100,00
            if (salario <= 100.0) {
                totalSalarioAte100++;
            }

            totalHabitantes++;
        }
    } while (salario >= 0);

    if (totalHabitantes > 0) {
        // Calcula as médias
        mediaSalario /= totalHabitantes;
        mediaFilhos /= totalHabitantes;

        // Calcula o percentual de pessoas com salário até R$100,00
        double percentualSalarioAte100 = (double)totalSalarioAte100 / totalHabitantes * 100.0;

        // Exibe os resultados
        printf("a) Média do salário da população: %.2lf\n", mediaSalario);
        printf("b) Média do número de filhos: %.2lf\n", mediaFilhos);
        printf("c) Maior salário: %.2lf\n", maiorSalario);
        printf("d) Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentualSalarioAte100);
    } else {
        printf("Nenhum habitante informado.\n");
    }

    return 0;
}