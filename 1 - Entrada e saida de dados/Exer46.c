#include<stdio.h>

int num;
int aux1;
int aux2;
int aux3;
int aux4;

int main(){
printf("Digite um numero entre 100 e 999\n");
scanf("%i", &num);
aux1 = (num%10);
aux2 = (num/100);
aux3 = (num/10);
aux4 = (aux3%10);

printf("%i", aux1);
printf("%i", aux4);
printf("%i\n", aux2);


system("pause");
return 0;

}
