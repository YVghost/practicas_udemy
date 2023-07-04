#include <stdio.h>
#include <stdlib.h>


void multiplicavector(int *vector,int Nelem, int numero);


int main()
{
    int vector [10] = {1,2,3,4,5,6,7,8,9,10};
    multiplicavector(&vector[0],10,3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",vector[i]);
    }
    
    return 0;
}


void multiplicavector(int *vector,int Nelem, int numero)
{
    for (int i = 0; i < Nelem; i++)
    {
        *(vector+i)=*(vector+i) *numero;
    }
    
}
