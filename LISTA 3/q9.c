#include <stdio.h>
#include <stdlib.h>


int main() {

    int matriz[3][3];

    // INICIALIZAR MATRIZ
    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 3; j++) {

            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        
        }

    }

    // IMPRIMIR MATRIZ
    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 3; j++) {

            printf("%d ", matriz[i][j]);
        
        }

        printf("\n");

    }

    printf("\nELEMENTOS DA DIAGONAL PRINCIPAL: ");
    for (int i = 0; i < 3; i++) {

        for(int j = 0; j < 3; j++) {

            if (i == j) {

                printf("%d ", matriz[i][j]);

            }
            
        
        }

    }


}