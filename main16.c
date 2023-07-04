#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    struct jugador
    {
        char nombre[50];
        int edad;
        float altura;
    };
    
    struct jugador jugadores [5];
    
        for (int i = 0; i < 5; i++)
        {
            printf("Introduce el nombre del jugador %d\n",i+1);
            gets( jugadores[i].nombre);
            printf("Introduce la edad del jugador %d\n",i+1);
            scanf("%d",&jugadores[i].edad);
            printf("Introduce la altura del jugador %d\n",i+1);
            scanf("%f",&jugadores[i].altura);
            fflush(stdin);
        }

    int opcion = -1;
    while (opcion != 0 )
    {
            printf("Introduce la opcion que deseas realizar: \n1-listar jugador \n2- Buscar jugador\n3- Jugador mas alto \n0 - SALIR");
            scanf ("%d",opcion);
            fflush(stdin);
    

        if(opcion == 1 )
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Jugador de nombre %s y altura %.2f\n",jugadores[i].nombre,jugadores[i].altura);
            } 
        }
        if(opcion == 2 )
        {
            char nombrejugador[50];
            printf("Introduzca el nombre del jugador que deseas buscar\n");
            gets(nombrejugador);
            int encontrado = 0; 
            for (int i = 0; i < 5; i++)
            {
                if (strcmp(jugadores[i].nombre,nombrejugador)== 0 )
                {
                    encontrado = 1;
                    printf("La edad del jugador es %d y su altura es %.2f",jugadores[i].edad,jugadores[i].altura);
                }
            }
            if (encontrado == 0 )
                {
                    printf("Jugador no encontrado\n");
                }
            
        }

        if (opcion ==3)
        {
            float mayoraltu = jugadores[0].altura;
            char nombremayoal[50];
            int edadmayoal = jugadores[0].edad;

            strcpy(nombremayoal,jugadores[0].nombre);
            for (int i = 0; i < 5; i++)
            {
                if (jugadores[i].altura > mayoraltu)
                {
                    strcpy(nombremayoal,jugadores[i].nombre);
                    edadmayoal = jugadores[i].edad;
                    mayoraltu = jugadores[i].altura;
                }
            }
            printf("El nombre del jugador de mayor altura es %s y su edad es %d\n",nombremayoal,edadmayoal);

        }

    }

    return 0;
}