#include <stdio.h>
#include <string.h>
#include <ctype.h>

void gerar_senha(const char *nome, const char *bairro, char *senha) {
    senha[0] = '\0'; // Inicializa a senha como string vazia
    char vogais[] = "aeiouAEIOU";

    for (int i = 0; nome[i] != '\0'; i++) {
        if (strchr(vogais, nome[i])) {
            strncat(senha, &nome[i], 1);
        }
    }

    for (int i = 0; bairro[i] != '\0'; i++) {
        if (strchr(vogais, bairro[i])) {
            strncat(senha, &bairro[i], 1);
        }
    }
}

int main() {
    char nome[100], bairro[100], senha[200];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; 

    printf("Digite seu bairro: ");
    fgets(bairro, sizeof(bairro), stdin);
    bairro[strcspn(bairro, "\n")] = '\0';

    gerar_senha(nome, bairro, senha);
    printf("Senha gerada: %s\n", senha);

    return 0;
}
