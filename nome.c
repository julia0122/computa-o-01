#include <stdio.h>
#include <string.h>
#include <ctype.h>

void gerar_abreviatura(char *nome, char *abreviatura) {
    abreviatura[0] = '\0';
    char *token = strtok(nome, " ");

    while (token != NULL) {
        if (strlen(token) > 2) { 
            char inicial[3] = {toupper(token[0]), '.', '\0'};
            strcat(abreviatura, inicial);
            strcat(abreviatura, " ");
        } else {
            strcat(abreviatura, token);
            strcat(abreviatura, " ");
        }
        token = strtok(NULL, " ");
    }

    abreviatura[strlen(abreviatura) - 1] = '\0'; 
}

int main() {
    char nome[100], abreviatura[100];

    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    gerar_abreviatura(nome, abreviatura);
    printf("Abreviatura: %s\n", abreviatura);

    return 0;
}
