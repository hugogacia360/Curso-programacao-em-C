#include<stdio.h>

int value=0;
int number=0;
float average=0;

int main(void)
{
    while (value <10 )
    {
        printf("\nDigite um numero\n");
        scanf("%i", &number);
        average = average + number;
        value ++;
    }
    average = average/10;
    printf("\nO valor da media entre eles e %.2f\n", average);

    getch();
    return 0;
}
