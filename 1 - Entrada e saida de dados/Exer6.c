#include<stdio.h> //converter celsius para farenheit

int main (){
	
	float C;
	float temp;
	
	printf("Digite uma temperatura em celsius\n");
	scanf("%f", &C);
	temp = (C)*(1.8) + 32;
	
	printf("O resultado em farenheit e %f\n", temp);
	
	
	return 0;
}
