#include<stdio.h>
void converte(int total_seg, int *hora, int *min, int *seg)
{
    *hora= total_seg/3600;
    *min= (total_seg%3600)/60;
    *seg= total_seg%60;
}
    int main (){
        int total_seg, hora, min, seg;
        printf("Digite a quantidade de segundos:");
               scanf("%d", &total_seg);
               converteHora(total_seg, &hora, &min, &seg);

               printf("tempo convertido:%02d:%02d:%02d\n", hora, min, seg);
               return 0;
}
