#include<stdio.h>
int main(){
	
	float graus;
	float rad;
	
	printf("Digite o angulo em graus\n");
	scanf("%f", &graus);
	rad = (graus * 3.14)/180;
	printf("O grau em radianos e %f", rad);
	
	return 0;
}
