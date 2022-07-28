#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int opc;
    float soma1, soma2, sub1, sub2, mult1, mult2, div1, div2, result;

    while(opc != 5)
    {

        printf("Digite 1 para adicao\n");
        printf("Digite 2 para subtracao\n");
        printf("Digite 3 para multiplacacao\n");
        printf("tDigite 4 para divisao\n");
        printf("Digite 5 para sair\n");
        scanf("%d", &opc);


        if(opc ==1 )
        {
            printf("Digite dois numeros para somar\n");
            scanf("%f %f", &soma1, &soma2);
            result = soma1 + soma2;
            printf("Resultado : %f", result);
            getch();
            system("cls");

        }
        else if(opc ==2 )
        {
          printf("Digite dois numeros para subtrair\n");
            scanf("%f %f", &sub1, &sub2);
            result = sub1 - sub2;
            printf("Resultado : %f", result);
            getch();
            system("cls");
        }
        else if (opc ==3 )
        {
            printf("Digite dois numeros para multiplicar");
            scanf("%f %f", &mult1, &mult2);
            result = mult1 * mult2;
            printf("Resultado : %f", result);
            getch();
            system("cls");
        }
        else if (opc ==4 )
        {
            printf("Digite dois numeros para dividir");
            scanf("%f %f", &div1, &div2);
            result = div1 / div2;
            printf("Resultado : %f", result);
            getch();
            system("cls");
        }
        else printf("saindo");
    }

    return 0;
    }

