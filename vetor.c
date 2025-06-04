#include <stdio.h>

void imprimir_direta(int vetor[], int tamanho) {
    printf("Ordem direta: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void imprimir_inversa(int vetor[], int tamanho) {
    printf("Ordem inversa: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    imprimir_direta(vetor, tamanho);
    imprimir_inversa(vetor, tamanho);

    return 0;
}
