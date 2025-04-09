#include<stdio.h>
#include<math.h>
int main()
{
    int i=0, N;

    printf("Digite a divisão com resto dois:");
    scanf("%d", &N);

    while(i<=100){
        if (i%N== 2){
        printf("%d/n",i);
        i++;
        }
        else{
        i++;
        }

    }

    return 0;
}
