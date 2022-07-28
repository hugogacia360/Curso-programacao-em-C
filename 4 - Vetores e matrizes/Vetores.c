#include<stdio.h>

int main ()
{
    char nome[50];
    printf("\nQual o seu nome\n");
    gets(nome);
    printf("\nOla ", nome);

    char letras[26];
    int contador = 0;

    for(int i=97; i <=122; i++)
    {
        letras[contador] = i;
        contador = contador + 1;
    }
    for (int i=0; i<26; i++)
    {
        printf("\n%d == %c", letras[i], letras[i]);
    }

}
