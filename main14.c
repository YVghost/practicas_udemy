#include <stdlib.h>
#include <stdio.h>

int main()
{
    // Cadena de caracteres
    char cadena[50],cadena2 [50],cadena3 [50],cadena4[50];
    printf("Introduce la primera cadena\n");
    gets(cadena);
    printf("Introduce la segunda cadena\n");
    gets(cadena2);
    printf("Introduce la tercera cadena\n");
    gets(cadena3);
    printf("Introduce la cuarta cadena\n");
    gets(cadena4);
    
    printf("%s---%s---%s---%s",cadena,cadena2,cadena3,cadena4);

    return 0;
}