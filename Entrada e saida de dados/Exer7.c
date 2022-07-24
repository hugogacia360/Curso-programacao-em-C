#include<stdio.h>
int main(){
	
	float F;
	float temp;
	
	printf("Digite uma temperatura em farenheit\n");
	scanf("%f", &F);
	temp = ((F-32) *(5)) / (9);
	printf("A temperatura em celsius e %f\n", temp);

	return 0;
}
