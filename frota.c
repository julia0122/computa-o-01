#include<stdio.h>
int main()
{
    float a, g, ra, rg, Na, Ng;

    printf("Digite o valor do preço do alcool, preço da gasolina, Km/l do alcool, Km/l da gasolina:");
    scanf("%f %f %f %f", &a, &g, &ra, &rg);
    Na = (ra/a);
    Ng = (rg/g);

    if (Ng>=Na)
    {
        printf("Rendimento de km/l da gasolina maior ou igual ao alcool %f %f", Na, Ng);
    }
    else
    {
        printf("Rendimento de km/l do alcool maior que a gasolina %f %f", Na, Ng);
    }
    return 0;
}
