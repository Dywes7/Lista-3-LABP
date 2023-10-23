#include <stdio.h>
#include <string.h>

#define TAM 30

int main() {

    char palavra[TAM];

    printf("Digite uma string: ");
    gets(palavra);

    printf("PALAVRA INVERTIDA: ");
    for (int i = strlen(palavra) - 1; i >= 0 ; i--) {

        printf("%c", palavra[i]);

    }


}