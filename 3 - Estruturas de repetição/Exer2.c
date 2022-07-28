#include<stdio.h>


 int main(){

 int i = 0;
    for (int i = 0; i < 100; i++)
        {
        printf(" O numero em for e %d\n", i);
        }
    while ( i<100) {
        printf("O numero em while e %d\n", i);
    i++;
    }
    do {
        printf("O numero em do while e %d\n", i);
        i++;
    } while (i<100);


 return 0;
 }
