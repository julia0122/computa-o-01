#include<stdio.h>
int main()
{
    int  numeroBase,inicio, fim, soma=0;

    printf("Digite um numero base: ");
    scanf("%d", &numeroBase);

    printf("Digite o valor inicial do intervalo:");
    scanf("%d", &inicio);

    printf("Digite o valor final do intervalo:");
    scanf("%d", &fim);

    if (inicio>fim)
    {
        printf("O valor inicial deve ser menor ou igual ao valor final.\n");
        return 1;
    }
    for (int i=inicio; i<=fim; i++)
    {
        if(i% numeroBase==0)
        {
            soma+=i;
        }
    {
}
