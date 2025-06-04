#include <stdio.h>
#include <string.h>

void contar_vogais(const char *frase) {
    int contagem[5] = {0};
    char vogais[] = "aeiou";

    for (int i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];
        c = tolower(c);
        switch (c) {
            case 'a': contagem[0]++; break;
            case 'e': contagem[1]++; break;
            case 'i': contagem[2]++; break;
            case 'o': contagem[3]++; break;
            case 'u': contagem[4]++; break;
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%c : ", vogais[i]);
        for (int j = 0; j < contagem[i]; j++) {
            printf("*");
        }
        printf(" (%d)\n", contagem[i]);
    }
}

int main() {
    char frase[100];
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
    frase[strcspn(frase, "\n")] = '\0';

    contar_vogais(frase);
    
    return 0;
}
