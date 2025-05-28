#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void preencher(int m[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            m[i][j] = rand() % 100;
}

void imprimir(int m[TAM][TAM]) {
    for (int i = 0; i < TAM; i++, printf("\n"))
        for (int j = 0; j < TAM; j++)
            printf("%4d", m[i][j]);
}

void operacao(int m1[TAM][TAM], int m2[TAM][TAM], int r[TAM][TAM], int op) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            r[i][j] = (op == 1) ? m1[i][j] + m2[i][j] : m2[i][j] - m1[i][j];
}

void multConst(int m[TAM][TAM], int r[TAM][TAM], int c) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            r[i][j] = m[i][j] * c;
}

int main() {
    int m1[TAM][TAM], m2[TAM][TAM], res[TAM][TAM], op, c, ok = 0;
    srand(time(NULL));
    do {
        printf("\n(0) Criar\n(1) Imprimir\n(2) Somar\n(3) Subtrair\n(4) Multiplicar constante\n(9) Sair\nOpcao: ");
        scanf("%d", &op);
        if (op == 0) { preencher(m1); preencher(m2); ok = 1; }
        else if (!ok && op != 9) { printf("Crie as matrizes primeiro (0).\n"); continue; }
        else if (op == 1) { printf("M1:\n"); imprimir(m1); printf("M2:\n"); imprimir(m2); }
        else if (op == 2 || op == 3) { operacao(m1, m2, res, op - 1); imprimir(res); }
        else if (op == 4) { printf("Constante: "); scanf("%d", &c); multConst(m1, res, c); imprimir(res); }
    } while (op != 9);
    return 0;
}
