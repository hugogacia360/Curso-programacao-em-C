#include<stdio.h>
int main(){
	
	int km;
	int ms;
	
	printf("Digite a velocidade em Km/H\n");
	scanf("%i", &km);
	ms = (km/3.6);
	printf("A velocidade e %i m/s\n", ms);
	
	
	return 0;
}
