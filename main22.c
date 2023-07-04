#include <stdio.h>
int main(int argc, char const *argv[])
{
    struct horaentrada{
        int hora;
        int minuto;
    };
    struct entrada{
        struct horaentrada hora1;
        int asistentes;
        float precio;
    };
    struct entrada e1;
    char continuar='s';
    while (continuar=='s')
    {
        printf("Ingrese la hora de entrada\n");
        scanf("%d", &e1.hora1.hora);
        printf("Ingrese el minuto de entrada\n");
        scanf("%d", &e1.hora1.minuto);
        printf("Ingrese el numero de asitentes\n");
        scanf("%d", &e1.asistentes);
        int total=0;
        for (int i = 0; i < e1.asistentes; i++)
        {
            int edad;
            printf("Ingrese la edad del asistente %d\n", (i+1));
            scanf("%d", &edad);
            if (edad<6)
            {
                total=total+0;
            }
            else if (edad>=6 && edad<=15)
            {
                total=total+5;
            }
            else if ((edad>=16 && edad<=26) || edad>65)
            {
                total=total+8;
            }
            else
            {
                total=total+10;
            }   
        }
        if (e1.asistentes>= 5)
        {
            e1.precio=total-total*0.1;
        }
        else
        {
            e1.precio=total;
        }
        printf("Hora de entrada: %d\n", e1.hora1.hora);
        printf("Minuto de entrada: %d\n", e1.hora1.minuto);
        printf("Precio de las entradas: %f\n", e1.precio);
        printf("Quiere continuar con otro grupo? (S/N)\n");
        scanf("%c", &continuar);    
    }
    
    return 0;
}