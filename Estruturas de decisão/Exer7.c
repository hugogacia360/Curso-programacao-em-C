#include<stdio.h>

int main (){
	float num1;
	float num2;
	float dif;
	
	printf("Digite o primeiro numero\n");
	scanf("%f", &num1);
	printf("Digite o segundo numero\n");
	scanf("%f", &num2);
	dif = (num1 - num2);
	
	if (num1 > num2 ){
		printf("O maior numero e %.2f\n", num1);
    }
	if (num2 > num1 ){
	printf("O maior numero e %.2f\n", num2);
    }

	else 
	printf("Os numeros sao iguais\n");

    
	
	
	
	system("pause");
}
