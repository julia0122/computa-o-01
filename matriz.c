#include<stdio.h>
#include<time.h>

#define DIM01 5
#define DIM02 5

int main()
{
    int m[DIM01][DIM02];
    int i,j;

    srand (time(NULL));
    for(i=0; i<DIM01; i++)
        for(j=0; j<DIM02; j++)
    printf("Matriz:\n");

    for (int i = 0; i<DIM01; i++)
    {
        for (int j = 0; j<DIM02; j++)
        {
        printf("%2d", m[i][j]);
        }
        printf("\n");
    }

    printf("Matriz Transposta:\n");
    for (i = 0; i<DIM01; i++)
    {
        for (j = 0; j<DIM02; j++)
        {
            printf("%d ", m[j][i]);
        }
        printf("\n");
    }

    return 0;
}
