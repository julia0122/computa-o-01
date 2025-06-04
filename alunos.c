#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCOL 10 
#define NROW 5  

void criaMatriz(char respostas[NROW][NCOL]) {
    char opcoes[] = {'a', 'b', 'c', 'd'};
    for (int i = 0; i < NROW; i++) {
        for (int j = 0; j < NCOL; j++) {
            respostas[i][j] = opcoes[rand() % 4]; 
        }
    }
}

void compara(char gabarito[NCOL], char respostas[NROW][NCOL], int pontua[NROW]) {
    for (int i = 0; i < NROW; i++) {
        pontua[i] = 0;
        for (int j = 0; j < NCOL; j++) {
            if (respostas[i][j] == gabarito[j]) {
                pontua[i]++;
            }
        }
    }
}

void exibirMatriz(char respostas[NROW][NCOL]) {
    for (int i = 0; i < NROW; i++) {
        printf("Aluno %d: ", i + 1);
        for (int j = 0; j < NCOL; j++) {
            printf("%c ", respostas[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));

    char gabarito[NCOL] = {'a', 'c', 'b', 'd', 'a', 'b', 'c', 'd', 'a', 'c'};
    char respostas[NROW][NCOL];
    int pontua[NROW];

    criaMatriz(respostas);
    printf("Respostas dos alunos:\n");
    exibirMatriz(respostas);

    compara(gabarito, respostas, pontua);

    printf("\nPontuação dos alunos:\n");
    for (int i = 0; i < NROW; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, pontua[i]);
    }

    return 0;
}
