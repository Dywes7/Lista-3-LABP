#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main() {

    float vet[15];
    float menor_valor;
    float maior_valor;

    // INICIALIZA VETOR
    for(int i = 0; i < 15; i++) {

        vet[i] = (((float)rand()) / RAND_MAX) * MAX;

    }

    // PEGA MENOR VALOR
    menor_valor = vet[0];
    for(int i = 1; i < 15; i++) {

        if (vet[i] < menor_valor) {
            
            menor_valor = vet[i];

        }

    }

    // PEGA MAIOR VALOR
    maior_valor = vet[0];
    for(int i = 1; i < 15; i++) {

        if (vet[i] > maior_valor) {
            
            maior_valor = vet[i];

        }

    }

    // IMPRIMINDO VETOR
    for(int i = 0; i < 15; i++) {

       printf("vet[%d]: %f\n", i, vet[i]);

    }

    printf("SOMA DO MAIOR E MENOR VALOR: %f\n", maior_valor + menor_valor);

}