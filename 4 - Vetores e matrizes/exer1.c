#include<stdio.h>

int main (void)
{
    int matriz [4][4], i, j;

    for (i=0; i<4; i++)
    {

    for(j=0; j<4; j++)
        {
        printf("\nDigite um elemento[%d][%d] = ",i,j);
        scanf("%d", &matriz[i][j]);
        }
    }

        //mostrando os valores maiores que 10

        for (i=0; i<4; i++)
    {

    for(j=0; j<4; j++)
        {
        if(matriz[i][j] > 10)
        {
            //maiores[i] = matriz[i][j];
            printf("\nO numero %d e maior que 10", matriz[i][j]);
        }
        }

    }
    return 0;
}

