#include<stdio.h>



int i=0;
int j=0;
float add1;
float add2;
float div1;
float div2;
float mult1;
float mult2;
float sub1;
float sub2;
float resultadd;
float resultdiv;
float resultmult;
float resultsub;

int main(){

while(i==0){

   printf("\n\t1 - Soma entre 2 numeros\n\t");
   printf("\n\t2 - Divisao entre 2 numeros\n");
   printf("\n\t3 - Produto entre 2 numeros\n");
   printf("\n\t4 - Subtracao entre 2 numeros\n\t");
   scanf("%i", &j);

   if (j==1){
    printf("\n\tDigite um numero\n\t");
    scanf("%f", &add1);
    printf("\n\tDigite um numero\n\t");
    scanf("%f", &add2);
    resultadd = (add1+add2);
    printf("\n\tA soma entre os numeros e %.2f\n\t", resultadd);
    getchar();
   system("clear");
   }

   if (j==2){
    printf("\n\tDigite um numero\n\t");
    scanf("%f", &div1);
    printf("\n\tDigite um numero\n\t");
    scanf("%f", &div2);
   if (div2 == 0){
    printf("\n\tDenominador nao pode ser zero\n\t");
    getchar();
   system("clear");
   }
    else {
    resultdiv = (div1/div2);
    printf("\n\tO resultado da divisao e %.2f\n\t", resultdiv);
    getchar();
   system("clear");
   }
   }

   if (j==3){
    printf("\n\tDigite um numero\n\t");
    scanf("%f", &mult1);
    printf("\n\tDigite um numero\n\t");
    scanf("%f", &mult2);
    resultmult = (mult1*mult2);
    printf("\n\tO resultado da multiplicacao e %.2f\n\t", resultmult);
    getchar();
   system("clear");
   }

   if (j==4){
    printf("\n\tDigite um numero\n\t");
    scanf("%f", &sub1);
    printf("\n\tDigite um numero\n\t");
    scanf("%f", &sub2);
    if (sub1 >= sub2){
    resultsub = (sub1 - sub2);
    printf("\n\tO resultado da divisao e %.2f\n\t", resultsub);
    getchar();
   system("clear");
    }
    else resultsub = (sub2 - sub1);
    printf("\n\tO resultado da divisao e %.2f\n\t", resultsub);
    getchar();
   system("clear");

   }
}

getchar();
return 0;

}








