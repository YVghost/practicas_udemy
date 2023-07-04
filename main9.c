#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, contadorap = 0, contadorsus = 0 ;
    float nota;
    printf ("Ingrese el numero de alumnos \n");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++)
    {
        printf("Introduce la nota del alumno %d\n",i);
        scanf("%f",&nota);
        
        if (nota >= 5)
        {
            contadorap ++;
        }
        else
        {
            contadorsus++;
        }
    }

    printf("El numero de alumnos aprobados es de: %d y el numero de alumnos que no aprobaron es de: %d",contadorap,contadorsus);
    return 0;
}