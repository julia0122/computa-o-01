#include<stdio.h>
int main()
{

    int força, nivel;
float multiplicador, dano;

printf("Digite a força do personagem(1 a 100): ");
    scanf("%d", &força);

    printf("Digite o nivel da arma(1 a 50): ");
    scanf("%d", &força);

    printf("Digite o multiplicador de critico(1.0 a 2.0): ");
    scanf("%f", &multiplicador);

    dano= força * multiplicador;

if(dano>5000)
    {
        printf("Dano critico massivo\n ");
    }
    else if (dano>=1000)
    {
        printf("Dado critico!\n");
    }
    else
    {
        printf("valor do dano:.2f\n", dano);
    }

    return 0;
}
