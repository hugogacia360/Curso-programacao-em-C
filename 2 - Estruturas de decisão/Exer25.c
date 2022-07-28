#include<stdio.h>
#include<math.h>

int main(){

int a;
int b;
int c;
float delta;
float x1;

printf("Exemplo da equacao de 2 grau\n");
printf("ax^2 + bx + c\n");
printf("\nDigite o valor de a\n");
scanf("%i", &a);
printf("Digite o valor de b\n");
scanf("%i", &b);
printf("Digite o valor de c\n");
scanf("%i",&c);

delta = (pow(b , 2)) - (4*a*c);

    if (delta >= 0){
    x1 = (-b) + (sqrt(delta))/(2*a);
    printf("%f\n", delta);
    printf("%f\n", x1);
    }
else printf("\nO delta e negativo\n");

getchar();
return 0;

}
