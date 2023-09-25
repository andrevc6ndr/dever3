int main() {
    float A, B, C;

    // Solicita ao usuário que insira os valores de A, B e C
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    // Verifica se os valores podem formar um triângulo
    if (A + B > C && A + C > B && B + C > A) {
        // Verifica se é um triângulo equilátero
        if (A == B && B == C) {
            printf("É um triângulo equilátero.\n");
        }
        // Verifica se é um triângulo isósceles
        else if (A == B || A == C || B == C) {
            printf("É um triângulo isósceles.\n");
        }
        // Caso contrário, é um triângulo escaleno
        else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("Não é possível formar um triângulo com esses valores.\n");
    }

    return 0;
}