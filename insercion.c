#include <stdio.h>
#include <conio.h>

#define N 5

typedef int arreglo[N];

void insercion(arreglo a);
void imprimeArreglo(arreglo a);

int main()
{
    arreglo numeros = {25, 32, 1 ,56, 5};
    
    insercion(numeros);

    printf("Arreglo ordenado por insercion\n");
    imprimeArreglo(numeros);

    getch();

    return 0;
}

void insercion(arreglo a)
{   
    int i, pos, aux;

    for( i = 1; i < N; i++)
    {
        pos = i;
        aux= a[i];

        while(pos > 0 && a[pos-1] > aux)
        {
            a[pos] = a [pos - 1];
            pos--;
        }   

        a[pos] = aux;
    }
}

void imprimeArreglo(arreglo a)
{
    for (int i = 0; i < N; i++)
    {
        printf(" %d ", a[i]);
    }
    
}