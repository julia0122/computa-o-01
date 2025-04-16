#include <stdio.h>
int main()
{
    int valor, i=0, numeros=0;
    float media;

    valor= 0;

    while (valor!= -1000)
    {
        printf("Digite um numero, se quiser parar digite -1000:");
        scanf ("%d", &valor);
        numeros = numeros + valor;
        if (valor %2 == 0)
        {
            i++;
        }
    }
    media= (numeros / i);

    printf("%d numeros sao positivos\n ", i);
    printf("Digite a media %0.1f", media);

    return 0;
}
