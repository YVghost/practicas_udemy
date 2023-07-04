#include <stdlib.h>
#include <stdio.h>

int main ()
{
    // Programa multiplos de 3
    for (int i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
        printf("%d\n",i);
    }
    return 0;
}