#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PALAVRAS 20
#define MAX_TAMANHO 100

void dividir_palavras(char *frase, char palavras[MAX_PALAVRAS][MAX_TAMANHO], int *quantidade) {
    char *token = strtok(frase, " ");
    *quantidade = 0;

    while (token != NULL && *quantidade < MAX_PALAVRAS) {
        strcpy(palavras[*quantidade], token);
        (*quantidade)++;
        token = strtok(NULL, " ");
    }
}

void intercalar_palavras(char palavras1[MAX_PALAVRAS][MAX_TAMANHO], int q1, 
                         char palavras2[MAX_PALAVRAS][MAX_TAMANHO], int q2, 
                         char resultado[MAX_TAMANHO * MAX_PALAVRAS]) {
    resultado[0] = '\0';
    int i = 0, j = 0;

    while (i < q1 || j < q2) {
        if (i < q1) {
            strcat(resultado, palavras1[i]);
            strcat(resultado, " ");
            i++;
        }
        if (j < q2) {
            strcat(resultado, palavras2[j]);
            strcat(resultado, " ");
            j++;
        }
    }
    resultado[strlen(resultado) - 1] = '\0';
}

int main() {
    char frase1[MAX_TAMANHO], frase2[MAX_TAMANHO];
    char palavras1[MAX_PALAVRAS][MAX_TAMANHO], palavras2[MAX_PALAVRAS][MAX_TAMANHO];
    char resultado[MAX_TAMANHO * MAX_PALAVRAS];
    int q1, q2;

    printf("Digite a primeira frase: ");
    fgets(frase1, MAX_TAMANHO, stdin);
    frase1[strcspn(frase1, "\n")] = '\0';

    printf("Digite a segunda frase: ");
    fgets(frase2, MAX_TAMANHO, stdin);
    frase2[strcspn(frase2, "\n")] = '\0';

    dividir_palavras(frase1, palavras1, &q1);
    dividir_palavras(frase2, palavras2, &q2);
    intercalar_palavras(palavras1, q1, palavras2, q2, resultado);

    printf("Frase intercalada: %s\n", resultado);

    return 0;
}
