#include<stdio.h>

int main(){
float base, altura, perimetro, perimetro_rodape, area;
const float largura_porta=0.8;

printf("base(em metros): ");
scanf("%f", &base);

printf("altura(em metros): ");
scanf("%f", &altura);

perimetro= 2*(base+altura);
perimetro_rodape = perimetro-largura_porta;
area= base*altura;

printf("\nPerimetro total: %.2f mentros\n", perimetro);
printf("quantidade necessaria de rodape (descontado a porta): %.2f metros\n", perimetro_rodape);
printf("area do quarto %.2f metros quadrados\n", area);

return 0;
}
