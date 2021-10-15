#include <stdio.h>
#include <conio.h>

#define N 5

typedef int arreglo[N];

void quicksort(arreglo a, int inicio, int fin);
int divideArreglo(arreglo a, int inicio, int fin);
void swap(int *x, int *y);
void imprimeArreglo(arreglo a);

int main()
{
    arreglo numeros = {5,9,6,8,7};
   
    quicksort(numeros, 0, N-1);
    
    printf("Arreglo ordenado por metodo de QuickSort \n");

    imprimeArreglo(numeros);

    getch();
    return 0;
}

void quicksort(arreglo a, int inicio, int fin)
{
    int pivote;

    if(inicio < fin)
    {
        pivote = divideArreglo(a, inicio, fin);
        quicksort(a, inicio, pivote - 1);
        quicksort(a, pivote + 1, fin);
    }
    
}

int divideArreglo(arreglo a, int inicio, int fin)
{
    int izq, der, pivote;

    pivote = a[inicio];
    izq = inicio;
    der = fin;
    
    do
    {
        while(a[izq] <= pivote && izq < fin)
        {
            izq++;
        }

        while(a[der] > pivote)
        {
            der--;
        }

        if(izq < der)
        {
            swap(&a[izq], &a[der]);
        }

    } while (izq < der);
    
    a[inicio] = a[der];
    a[der] = pivote;

    return der;
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