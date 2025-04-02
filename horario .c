#include<stdio.h>
int main()
{

    int hora, min, seg;
    float aux = 5.5;

    printf("Digite hora, minuto e segugundo:");
    scanf("%d %d %d", &hora, &min, &seg);

    if(hora>1 && min>15){
        float s = ((hora*3600.0) + (min*60.0) + seg);
        printf("Quantidade de segundos: %f/n",s);
    }

    else{
        float m= ((hora*60) + min + (seg/(60.0)));
                  printf("Quantidade de minutos: %0.2f/n",m);
    }
                  printf ("Horario: %02d: %02d: %02d\n", hora, min, seg);
                  printf("Float com duas casas: %0.2f", aux);
                  return 0;
    }
