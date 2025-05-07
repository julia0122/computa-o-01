#include<stdio.h>
int arredondar(float valor){

    if (valor>=0){
        return (int) (valor + 0.5);
    }
    else{
        return (int)(valor - 0.5);
}
}
int main()
{
    float num;
    printf("Digite um numero:");
    scanf("%f", &num);

    printf("Numero arredondado de %.1f: %d\n", num, arredondar(num));

    return 0;
}
