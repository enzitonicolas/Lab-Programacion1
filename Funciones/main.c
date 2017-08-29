#include <stdio.h>
#include <stdlib.h>
int superficie (int,int);
int main()
{
    int op1;
    int op2;
    int result;
    printf("Ingrese un num:");
    if (op1=!0)
    {
        printf("ingrese un num:");
    }
    scanf("%d",&op1);
    printf("ingrese otro num:");
    if(op2!=0)
    {
        printf("ingrese un num:");
    }
    scanf("%d",&op2);
    result=superficie(op1,op2);
    printf("la superficie es %d",result);
    return 0;
}
int superficie(int op1, int op2)
{
    int result;
    result=op1*op2;
    return result;
}
