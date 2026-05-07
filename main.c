#include<stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicacion.h"
#include "dividir.h"

int main()
{
    int a, b;
    printf("Ingrese 1er número:");
    scanf("%d",&a);
    printf("Ingrese 2do número:");
    scanf("%d",&b);
    printf("El resultado de la suma es: %d\n", sumar(a,b));
    printf("El resultado de la resta es:%d\n", restar(a,b));
    printf("El resultado de la multiplicacion es:%d\n", multiplicacion(a,b));
    printf("El resultado de la division es:%d\n", dividir(a,b));
    return 0;

}