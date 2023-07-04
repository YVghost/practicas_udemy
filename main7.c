#include <stdlib.h>
#include <stdio.h>

int main()
{
    int dia;
    printf("Introduce un numero en un rango del 1 -7 \n");
    scanf("%d",&dia);

    switch (dia)
    {
    case(1):
    printf("Feliz Lunes\n");
        break;
    case(2):
    printf("Feliz Martes\n");
        break;
    case(3):
    printf("Feliz Miercoles\n");
        break;
    case(4):
    printf("Feliz Jueves\n");
        break;
    case(5):
    printf("Feliz Viernes\n");
        break;
    case(6):
    printf("Feliz Sabado\n");
        break;
    case(7):
    printf("Feliz Domingo\n");
        break;
    default:
    printf("Introduzca un numero de un rango de 1 a 7");
        break;
    }

return 0;
}
