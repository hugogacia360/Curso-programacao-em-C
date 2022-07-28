#include<stdio.h>
int main(){
	
	int num1;
	int num2;
	int num3;
	int soma;
	
	printf("Digite 1 numero inteiro\n");
	scanf ("%i" , &num1);
	printf("Digite 1 numero inteiro\n");
	scanf ("%i" , &num2);
	printf("Digite 1 numero inteiro\n");
	scanf ("%i" , &num3);
	
	soma = (num1 + num2 + num3);
	printf("A soma dos numeros inteiros e %i\n", soma);
	
	
	
	system("pause");
}
