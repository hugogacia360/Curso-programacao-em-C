#include<stdio.h>
#include<stdlib.h>

#define NOTA_MAX 10
#define NOTA_MIN 0
#define NOTA_NUM 2

int main(void){

    float nota1;
    float nota2;
    float media;

 printf("Digite a primeira nota\n");
 scanf("%f", &nota1);
 printf("Digite a segunda nota\n");
 scanf("%f", &nota2);
 media = (nota1 + nota2)/NOTA_NUM;

  if (media < NOTA_MIN || media > NOTA_MAX) {
    printf("Nota invalida\n");
  }
  else printf("A sua media e %.2f\n", media);

system("pause");
return 0;
}
