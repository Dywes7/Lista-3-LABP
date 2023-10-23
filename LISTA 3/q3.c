#include <stdio.h>
#define TAM 20

int main() {

    char palavra[TAM];
    int contador = 0;
    
    printf("Digite uma string: ");
    gets(palavra);

    while (palavra[contador] != '\0') {

        contador++;

    }

    printf("A quantidade de caracteres é: %d\n", contador);

}