#include <stdio.h>
int main()
{
    int numero, valor;
    numero = 0;
    valor = 0;

    for(; valor >= 0; )
    {
        printf("Digite um numero:");
        scanf("%d", &valor);
        if(valor > numero)
        {
            numero = valor;
        }
    }
printf("O maior valor foi: %d/n", numero);
    return 0;
}
