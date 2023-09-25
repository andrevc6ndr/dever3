#include <stdio.h>

int main() {
    float alturaChico = 1.50;  // Altura inicial de Chico em metros
    float alturaZe = 1.10;    // Altura inicial de Zé em metros
    int anos = 0;             // Inicializamos o contador de anos em zero

    // Enquanto a altura de Zé for menor ou igual à altura de Chico
    while (alturaZe <= alturaChico) {
        // Incrementa as alturas de Chico e Zé com seus respectivos crescimentos
        alturaChico += 0.02;   // Chico cresce 2 centímetros por ano (0.02 metros)
        alturaZe += 0.03;      // Zé cresce 3 centímetros por ano (0.03 metros)
        anos++;               // Incrementa o contador de anos
    }

    // Imprime o número de anos necessários
    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

    return 0;
}