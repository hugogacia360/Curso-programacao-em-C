#include<stdio.h>

int main()
{
    char nome[3][50];

    for (int i=0; i<3; i++)
    {
        printf("\nQual seu nome\n");
        fgets (nome[i],50,stdin);
    }
    for(int i=0; i<3; i++)
    {
        printf("\nOla %s\n", nome[i]);
    }
    return 0;
}
