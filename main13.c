#include <stdlib.h>
#include <stdio.h>

int main()
{
    int informacion[3][4] ={{1,120,140,200},{2,130,160,230},{90,400,210,300}};
    int sumatemb = 0 , sumatempmed = 0 , sumatempal = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j == 1)
            {
                sumatemb = sumatemb + informacion [i][j];
            }
            if (j == 2)
            {
                sumatempmed = sumatempmed + informacion [i][j];
            }
            if (j == 3)
            {
                sumatempal = sumatempal + informacion[i][j];
            }
        }
        
    }

    float promediobajo = sumatemb / 3;
    float promediomedio = sumatempmed / 3;
    float promedioalto = sumatempal / 3;

    printf("Promedio de temperatura baja: %.2f \n  Promedio de tamperatura media: %.2f\n Promedio de temperatura alta: %.2f\n",promediobajo,promediomedio,promedioalto);
    return 0;
}