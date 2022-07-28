#include<stdio.h>
#include<math.h>

int main(){
	
	int num1;
	int potencia;
	float raiz;
	
	printf("Digite um numero\n");
	scanf("%i", &num1);
	
	if(num1 >= 0){
		potencia = pow (num1, 2);
		raiz = sqrt(num1);
		printf("O numero elevado ao quadradro e %i \n", potencia);
		printf("A raiz quadrada do numero e %f\n", sqrt);
	}
	else printf("O numero e negativo\n");
	
	system("pause");
}
