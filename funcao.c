#include <stdio.h>

void determinaValores(int n) {
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            for (int c = 1; c <= n; c++) {
                if (a + b + c == n) {
                    printf("%d + %d + %d\n", a, b, c);
                }
            }
        }
    }
}

int main() {
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        determinaValores(n);
    } else {
        printf("O número deve ser positivo!\n");
    }

    return 0;
}
