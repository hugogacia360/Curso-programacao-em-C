#include<stdio.h>

int main(){

int i;
int a;
int n;

 printf("Digite sua idade\n");
 scanf("%i", &i);
 printf("\nDigite o ano atual\n");
 scanf("%i", &a);
 n = (a-i);
 printf("\nSeu ano de nascimento e %i\n", n);

system("pause");
return 0;

}
