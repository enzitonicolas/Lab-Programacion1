#include <stdio.h>
#include <stdlib.h>
#define cant 3
int main()
{
    int i;
    int edad[cant];
    float salario[cant];
    int legajo[cant];
    for(i=0; i<cant; i++)
    {
        printf("Edad:");
        scanf("%d",&edad[i]);
        printf("Salario:");
        scanf("%f",&salario[i]);
        printf("Legajo:");
        scanf("%d",&legajo[i]);
    }
    for(i=0; i<cant; i++)
    {
        printf("La edad es: %d El salario es: %.2f El legajo es:%d\n ",edad[i],salario[i],legajo[i]);

    }
    return 0;
}
