#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {

    int vetor[3];
    double soma = 0.0;
    double produto = 1.0;

    srand(time(NULL));

    // Preenche o vetor com 3 números inteiros pseudoaleatórios no intervalo [0, 19]
    for (int i = 0; i < 3; i++) {

        vetor[i] = rand() % 20; // Gera números entre 0 e 19

    }

    // Calcula a média aritmética
    for (int i = 0; i < 3; i++) {

        soma += vetor[i];

    }

    double media_aritmetica = soma / 3;

    // Calcula a média geométrica
    for (int i = 0; i < 3; i++) {

        produto *= vetor[i];

    }

    double media_geometrica = pow(produto, 1.0 / 3.0);

    // Exibe os números do vetor
    printf("Vetor: [%d, %d, %d]\n", vetor[0], vetor[1], vetor[2]);

    // Exibe a média aritmética e geométrica
    printf("MEDIA ARITIMETICA: %.2f\n", media_aritmetica);
    printf("MEDIA GEOMETRICA: %.2f\n", media_geometrica);

    return 0;
}
