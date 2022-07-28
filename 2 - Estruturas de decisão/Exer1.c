#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num1;
	int num2;
	
	printf("Digite o primeiro numero\n");
	scanf("%i", &num1);
	printf("Digite o segundo numero\n");
	scanf("%i", &num2);
	
	if (num1>num2) {
		printf("O numero %i e o maior numero\n", num1);
	}
	if (num2>num1){
		printf("O %i e o maior numero\n", num2);
	}
	if(num1==num2){
		printf("Os numeros sao iguais\n");
	}

	getch();
	return 0;
}
