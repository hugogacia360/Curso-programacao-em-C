#include<stdio.h>

int value=0;
int number=0;
int total=0;

int main(void)
{
    while (value <10 )
    {
        printf("\nDigite um numero\n");
        scanf("%i", &number);
        total = total + number;
        value ++;
    }
        printf("\nA soma dos numeros e %i\n", total);

    getch();
    return 0;
}
