#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Programa para generar una nota en donde se pone la tabla de multiplicar del numero
    int numero;
    printf("Introduzca un numero\n");
    scanf("%d",&numero);
    

    FILE *f;

    f = fopen("tabla.txt","w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(f, "%d\n",i*numero);
    }
    
    fclose(f);
    return 0;
}