#include<stdio.h>
#include<stdlib.h>

int idade;

int main(){
 printf("\n Digite a idade do nadador\n");
 scanf("%i", &idade);
 if ((idade>4) && (idade<=7))
    {
        printf("\nInfantil A\n");
    }
  if((idade>7) && (idade <=10))
    {
        printf("\nInfantil B");
    }
  if((idade>10) && (idade<=13))
  {
      printf("\nJuvenil A");
  }
  if((idade>13) && (idade<=17))
  {
      printf("\nJuvenil B");
  }
  if (idade > 18)
  {
      printf("\n Senior");
  }
  else printf("\nNenhum dos anterioes");


getchar();
return 0;
}
