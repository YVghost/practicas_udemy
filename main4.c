#include <stdlib.h>
#include <stdio.h>

int main()
{
    float euros;
    printf("Ingresa los euros que quieres convertir a pesetas\n");
    scanf("%f",&euros);
    // un euro a pesetas equivalen a: 166.386
    printf("%.2f euros equivalen a %.2f pesetas",euros, euros * 166.386);
    return 0;
}