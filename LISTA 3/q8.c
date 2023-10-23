#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int *vet) {

    for (int k = 0; k < 100; k++) {

        for (int j = 0; j < 100 - 1; j++) {

            if (*(vet + j) > *(vet + j + 1)) {

                *(vet + j) = *(vet + j) ^ *(vet + j + 1);
                *(vet + j + 1) = *(vet + j) ^ *(vet + j + 1);
                *(vet + j) = *(vet + j) ^ *(vet + j + 1);

            }

        }

    }

}

void trocar(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;

}

void ordenarPorSelecao(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {

        int minIndex = i;

        for (int j = i + 1; j < tamanho; j++) {

            if (vetor[j] < vetor[minIndex]) {

                minIndex = j;

            }

        }

        if (minIndex != i) {

            trocar(&vetor[i], &vetor[minIndex]);

        }

    }

}

void imprime_vetor(int vetor[]) {

    for (int i = 0; i < 100; i++) {

        printf("Vetor[%d]: %d\n", i, vetor[i]);

    }

    printf("\n\n");

}


int main() {

    int vetor[100];
    int inicio, fim;

    printf("Intervalo inicial do numero pseudoaleatorio: ");
    scanf("%d", &inicio);

    printf("Intervalo inicial do numero pseudoaleatorio: ");
    scanf("%d", &fim);

    srand(time(NULL));
    for (int i = 0; i < 100; i++) {

        vetor[i] = inicio + rand() % (fim - inicio + 1);

    }

    ordenarPorSelecao(vetor, 100);

    imprime_vetor(vetor);

    bubble_sort(vetor);

    imprime_vetor(vetor);


}