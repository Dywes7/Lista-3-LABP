#include <stdio.h>
#include <string.h>
#define TAM 40

void usa_strcat(char p1[], char p2[]) {

    strcat(p1, p2);

    printf("STINGS CONCATENADAS: %s\n", p1);

    printf("\n");
}

void nao_usa_strcat(char p1[], char p2[]) {

    int i, j;

    for (i = 0; p1[i] != '\0'; i++) {
    }

    for (j = 0; p2[i] != '\0'; i++) {

        p1[i + j] = p2[i];
        

    }

   p1[i + j] = '\0';

    printf("NOVA STRING: %s\n", p1);


}

int main() {

    char palavra1[TAM];
    char palavra2[TAM];
    
    printf("Digite a string 1: ");
    gets(palavra1);

    printf("Digite a string 2: ");
    gets(palavra2);

    usa_strcat(palavra1, palavra2);
    nao_usa_strcat(palavra1, palavra2);

}

