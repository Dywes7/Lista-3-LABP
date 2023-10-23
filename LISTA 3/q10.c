#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
#define MAX 10

int main() {

    int matriz[TAM][TAM];
    int num;
    int contador = 0;

    srand(time(NULL));
    
    for (int i = 0; i < TAM; i++) {

        for (int j = 0; j < TAM; j++) {

            matriz[i][j] = rand() % (MAX + 1);

        }

    }

    printf("Qual numero deseja consultar? ");
    scanf("%d", &num);

    for (int i = 0; i < TAM; i++) {

        for (int j = 0; j < TAM; j++) {

            if (num == matriz[i][j]) {

                contador++;

            }

        }

    }

     // IMPRIMIR MATRIZ
    for(int i = 0; i < TAM; i++) {

        for(int j = 0; j < TAM; j++) {

            printf("%d ", matriz[i][j]);
        
        }

        printf("\n");

    }

    printf("O numero %d aparece %d vezes na matriz gerada.\n", num, contador);

}