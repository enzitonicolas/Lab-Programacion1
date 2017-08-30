#include <stdio.h>
#include <stdlib.h>
#include "enzo.h"
int main()
{
    int num,result;
    printf("Ingresa un numero:");
    scanf("%d",&num);
    result=factorial(num);
    printf("El factorial de %d es:%d",num,result);
    return 0;
}
