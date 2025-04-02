#include<stdio.h>
int main()
{
    float n1, n2, n3, media;

    printf("Digite as tres notas:");
    scanf("%f %f %f", &n1, &n2, &n3);

    media= ((n1 +n2 +n3)/3.0);
    if(media>8)

        printf("Aprovado com distinção. ");
    else if(media>= 6)

        printf("Aprovado direto. ");

    else if (media>= 4)

        printf("Vai para final. ");

    else if(media>4)
        printf("Reprovado direto. ");

    return 0;

}
