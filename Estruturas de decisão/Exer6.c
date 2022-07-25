#include<stdio.h>

int main(){
	int num1;
	int num2;
	int dif;
	
	printf("Digite um numero inteiro\n");
	scanf("%i", &num1);
	printf("Digite um numero inteiro\n");
	scanf("%i",&num2);
	dif = (num1 - num2);
	
	if (num1 > num2){
		printf("O maior numero e %i e a diferenca entre eles e %i\n", num1, dif);
	}
	if (num2 > num1){	
	    printf("O maior numero e %i e a diferenca entre eles e %i\n", num2, dif);
    }
	else printf("os numeros sao iguais\n");
	
	system("pause");
	
}
