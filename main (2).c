#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C;
    float maior, menor, medio; // Variáveis para armazenar os lados do triângulo
    float anguloA, anguloB, anguloC; // Variáveis para armazenar os ângulos

    // Solicita ao usuário que insira os valores de A, B e C
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    // Encontra o maior, o menor e o lado do meio
    if (A >= B && A >= C) {
        maior = A;
        menor = B <= C ? B : C;
        medio = B >= C ? B : C;
    } else if (B >= A && B >= C) {
        maior = B;
        menor = A <= C ? A : C;
        medio = A >= C ? A : C;
    } else {
        maior = C;
        menor = A <= B ? A : B;
        medio = A >= B ? A : B;
    }

    // Verifica se é possível formar um triângulo
    if (maior < menor + medio) {
        // Calcula os ângulos usando a Lei dos Cossenos
        anguloA = acos((B * B + C * C - A * A) / (2 * B * C)) * 180.0 / M_PI;
        anguloB = acos((A * A + C * C - B * B) / (2 * A * C)) * 180.0 / M_PI;
        anguloC = 180.0 - anguloA - anguloB;

        // Classifica o triângulo com base nos ângulos
        if (anguloA == 90 || anguloB == 90 || anguloC == 90) {
            printf("Triângulo Retângulo\n");
        } else if (anguloA > 90 || anguloB > 90 || anguloC > 90) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Não é possível formar um triângulo com esses valores.\n");
    }

    return 0;
}