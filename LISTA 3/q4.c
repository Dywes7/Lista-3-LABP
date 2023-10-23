#include <stdio.h>
#include <string.h>
#define TAM 40

void usa_strcmp(char p1[], char p2[]) {

    if (!(strcmp(p1, p2))) {

        printf("SAO IGUAIS!\n");

    } else {

         printf("NAO SAO IGUAIS.\n");

    }

    printf("\n");

}

void nao_usa_strcmp(char p1[], char p2[]) {

    int igual = 1;

    for (int i = 0; p1[i] != '\0' || p2[i] != '\0'; i++) {

        if (p1[i] != p2[i]) {

            igual = 0;
            break;
        }

    }

    if (igual) {

        printf("AS STRINGS SAO IGUAIS!\n");

    } else {

        printf("AS STRINGS NAO SAO IGUAIS.\n");

    }

    printf("\n");

}

int main() {

    char palavra1[TAM];
    char palavra2[TAM];
    
    printf("Digite a string 1: ");
    gets(palavra1);

    printf("Digite a string 2: ");
    gets(palavra2);

    usa_strcmp(palavra1, palavra2);
    nao_usa_strcmp(palavra1, palavra2);


}

