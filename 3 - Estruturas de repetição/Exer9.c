#include<stdio.h>

int i;
int odd;

int main(void)
{

    printf("\nDigite um numero inteiro\n");
    scanf("%i", &i);

    while (i==i)
    {
        if( i%2 == 1)
        {
            printf("\nO numero %i e impar\n", i);
        }
    }


    getch();
    return 0;
}
