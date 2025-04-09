#include<stdio.h>
int main()
{
    float n1, n2, n3, media;
    int frequencia;

    printf("Digite as tres notas:");
    scanf("%f %f %f", &n1, &n2, &n3);

    media= ((n1 +n2 +n3)/3.0);

    printf("Digite a frequencia entre 0 - 100:");
    scanf("%d%", &frequencia);

    if (media > 8 && frequencia >=75){
        printf("Aprovado com Distinção, pois teve media %.2f e frequencia %d%", media, frequencia);
}
    else if(media>= 6 && frequencia >=75){
        printf ("Aprovado Direto, pois teve media %.2f e frequencia %d%", media, frequencia);
}
    else if(media<6 && frequencia>=75){
        printf ("Vai para final, pois teve media %.2f e frequencia %d%", media, frequencia);
}
    else if(media>=4 && frequencia<75){
        printf ("Vai para final, pois teve media %.2f e frequencia %d%", media, frequencia);
}
    else if (media<4 && frequencia <50){
        printf("Reprovado direto, pois teve media %.2f e frequencia %d%", media, frequencia);
}

    return 0;
}
