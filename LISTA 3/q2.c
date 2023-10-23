#include <stdio.h>
#include <string.h>
#define TAM 20

int main() {

    char palavra[TAM];
    char caractere;

    printf("Digite uma string: ");
    gets(palavra);

    printf("Qual caractere deseja buscar? ");
    scanf("%c", &caractere);

    int informante = 0;
    for (int i = 0; i < TAM; i++) {

        if (palavra[i] == caractere) {

            informante = 1;

        }

    }

    if(informante == 1) {

        printf("A string de entrada contem o caractere fornecido!\n");

    } else {

        printf("A string de entrada NÃO contem o caractere fornecido.\n");

    }


}