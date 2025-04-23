#include<stdio.h>
int main()
{
    float distancia, minutos, segundos;
    int tempo_total_segundos, ritmo_segundos, ritmo_minutos, ritmo_segundos_finais;

    printf("Digite a distancia percorrida em km: ");
    scanf("%d", &distancia);

    printf("Digite o tempo gasto em minutos: ");
    scanf("%d", &minutos);

    printf("Digite o tempo gasto em segundos:");
    sacnf("%d", segundos);

    tempo_total_segundos = minutos * 60 + segundos;

    ritmo_segundos= tempo_total_segundos / distancia;

    ritmo_minutos= ritmo_segundos / 60;
    ritmo_segundos_finais = ritmos_segundos % 60;

    printf("Ritmo: %d minutos e %d segundps por quilometro\n", ritmo_minutos, ritmo_segundos_finais);

    return 0;
}
