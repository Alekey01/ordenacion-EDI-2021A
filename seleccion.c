#include <stdio.h>
#include <conio.h>

#define N 5

typedef int arreglo[N];

void seleccion(arreglo a);
void swap(int *x, int *y);
void imprimeArreglo(arreglo a);

int main()
{
    arreglo numeros = {3,2,1,5,4};
    
    seleccion(numeros);
    printf("Arreglo ordenado por metodo de seleccion \n");
    imprimeArreglo(numeros);

    getch();

    return 0;
}

void seleccion(arreglo a)
{
    int min;

    for (int i = 0; i < N; i++)
    {
        min = i;
        for(int j = i + 1; j < N; j++ )
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        swap(&a[i], &a[min]);
    }  
}

void swap(int *x, int *y)
{
    int aux = *x;
    *x =*y;
    *y = aux;
}

void imprimeArreglo(arreglo a)
{
    for (int i = 0; i < N; i++)
    {
        printf(" %d ", a[i]);
    }
    
}