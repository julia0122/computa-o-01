#include <stdio.h>

void gerarTrianguloPascal(int N) {
    int matriz[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                matriz[i][j] = 1;
            }
             else {
                matriz[i][j] = matriz[i-1][j-1] + matriz[i-1][j];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] != 0) {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Digite o número de linhas do Triângulo de Pascal: ");
    scanf("%d", &N);

    gerarTrianguloPascal(N);

    return 0;
}

