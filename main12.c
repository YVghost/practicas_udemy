#include <stdlib.h>
#include <stdio.h>

int main()
{
    // Programa saca el numero mayor y menor 
    int numeros [10] = {12,57,34,4,12,56,90,68,100,45};
    int maximo = numeros[0];
    int minimo = numeros[0];

    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] > maximo)
        {
            maximo = numeros[i];
        }
        if (numeros[i]< minimo)
        {
            minimo = numeros[i];
        }
    }

    printf("Valor maximo: %d  y valor minimo: %d \n",maximo,minimo);
    return 0;
}