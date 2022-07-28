#include<stdio.h>
#include<math.h>
int main(){
	
	float num;
	float quadrado;
	
	printf("Digite um numero real\n");
	scanf("%f", &num);
	
	quadrado = pow(num,2);
	
	printf("O quadrado do numero digitado e %f\n", quadrado);
	
	system("pause");
}
