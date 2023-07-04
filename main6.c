#include <stdlib.h>
#include <stdio.h>

int main ()
{
    float preciob, kilometros , consumo , preciof;
    printf("Introduce el precio base del vehiculo\n");
    scanf("%f",&preciob);
    printf("Introduce los kilometros\n");
    scanf("%f",&kilometros);
    printf("Introduce el consumo\n");
    scanf("%f",&consumo);

    if(kilometros < 20000 && consumo <= 5)
    {
        preciof = preciob * 1.2;
    }
    else if(kilometros > 20000 && consumo <= 5) 
    {
        preciof = preciob * 1.1;
    }
    else if(consumo > 5)
    {
        preciof = preciob * 1.05;
    }

    printf("El precio final del vehiculo es de: %.2f \n",preciof);
    
return 0;
}