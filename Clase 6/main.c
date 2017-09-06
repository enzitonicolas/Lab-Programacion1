#include <stdio.h>
#include <stdlib.h>
#define ESC 27
#define CANT 31
int main()
{
    char nombre[CANT];
    char letra;
    do
    {
        system("cls");
        printf("Ingrese su nombre y apellido:");
        fflush(stdin);
        scanf("%[^\n]s",nombre);

        printf("\nEl nombre y el apellido ingresado es : %s",nombre);

        printf("\n\nPresione cualquier tecla para continuar...ESC para salir");

        letra = getch();

    }
    while(letra != ESC);
    return 0;

}
