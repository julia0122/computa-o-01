#include<stdio.h>
#include<math.h>
int main()
{
    float altura, largura, area, tinta;

    printf ("Digite a altura em metros: ");
    scanf("%f", &altura);
    printf ("Digite a largura em metros: ");
    scanf("%f", &largura);

    area= altura * largura;

    tinta= area/2;
    tinta= ceil(tinta);

    printf("A area total da parede é: %.0f metros quadrados.\n", area);
    printf("A quantidade de tinta é: %.0f litros.\n", tinta);

    return 0;
}
