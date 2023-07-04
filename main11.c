#include <stdlib.h>
#include <stdio.h>

int main ()
{
    float pesos[5];
    float suma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Introduce un peso para alamcenarlo\n");
        scanf("%f",&pesos[i]);
        suma = suma + pesos[i];
    }


    float promedio = suma / 5;
    int contadormay = 0;
    int contadormen = 0;

    for (int i = 0; i < 5; i++)
    {
        if(pesos [i] >= promedio)
        {
            contadormay ++;
        }
        else
        {
            contadormen ++;
        }
    }
    
    printf("Numero de pesos mayores o iguales es de: %d  y numeros de pesos menores es de: %d\n",contadormay,contadormen);
    return 0;
}