#include<stdio.h>
#include "sumar.h"

int main()
{
    int a, b;
    printf("Ingrese 1er número:");
    scanf("%d",&a);
    printf("Ingrese 2do número:");
    scanf("%d",&b);
    printf("%d", sumar(a,b));
    return 0;

}