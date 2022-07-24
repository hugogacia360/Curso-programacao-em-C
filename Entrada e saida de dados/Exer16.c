#include<stdio.h>
int main(){
	
	float polegadas;
	float conv;
	
	printf("Digite um comprimentos em polegadas\n");
	scanf("%f", &polegadas);
	conv = polegadas/2,54;
	printf("O valor em centimetros e %.2f\n", conv);
	
	system("pause");
}
