#include <stdlib.h>
#include <stdio.h>

int main()
{
    char cadena [50];
    char caracter;
    printf("Introduce una cadena \n");
    gets(cadena);
    printf("Introduce un caracter\n");
    caracter = getchar();

    int i = 0 ;
    int pos = 0;

    while (cadena[i] != '\0' && pos == 0 )
    {
        if (cadena[i]== caracter)
        {
            pos = i;
        }
        i = i + 1; 
    }
    if (pos != -1)
        {
            printf("El caracter  %c se encuentra en la cadena   %s  en la posicion  %d\n",caracter,cadena,pos);
        }
        else
        { 
            printf("El caracter  %c  no se encuentra en la cadena   %s\n"  ,caracter, cadena);
        }

    return 0;
}
