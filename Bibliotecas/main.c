#include <stdio.h>
#include <stdlib.h>
#include "enzo.h"
int main()
{
    int num1,num2,result;
    printf("Ingrese un numero:");
    scanf("%d",&num1);
    printf("Ingrese otro numero:");
    scanf("%d",&num2);
    result=sumar(num1,num2);
    printf("El resultado de la suma es:%d",result);
    result=restar(num1,num2);
    printf("\nEl resultado de la resta es:%d",result);
    result=multip(num1,num2);
    printf("\nEl resultado de la multiplicacion es:%d",result);
    result=dividir(num1,num2);
    printf("\nEl resultado de la division es:%d",result);
return 0;
}
