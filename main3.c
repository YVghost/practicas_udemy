#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura;
    printf("Introduce la base del rectangulo:\n");
    scanf("%f",&base);
    printf("Introduce la altura del rectangulo:\n");
    scanf("%f",&altura);
    float area = base * altura;
    
    printf("El area del rectangulo de base %.2f y altura %.2f es de: %.2f",base,altura,area);
    return 0;
}