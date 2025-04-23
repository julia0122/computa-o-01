#include <stdio.h>
int main(){
 int numero, i;

 printf ("Digite um numero inteiro: ");
 scanf("%d", &numero);

 printf("Numeros pares maiores que 0 e menores ou iguais a %d: \n", numero);
 for(i=2; i<= numero; i+=2){
 printf("%d", i);
 }
printf("/n");
return 0;
}
