#include <stdio.h>
#include <conio.h>

#define N 5

typedef int arreglo[N];

void burbuja(arreglo a);
void leeArreglo(arreglo a);
void imprimeArreglo(arreglo a);


int main()
{
    arreglo a;
    
    leeArreglo(a);
    burbuja(a);
    imprimeArreglo(a);

    getch();
    return 0;

}

void burbuja(arreglo a)
{
    int i, aux;

    for (i = 0; i < N; i++)
    {
        for (int j = 0; j < N ; j++)
        {
            if(a[j] > a[j+1])
            {
                aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }
}

void leeArreglo(arreglo a)
{
    int i;

    for (i = 0; i < N; i++)
    {
        printf("Arreglo [%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void imprimeArreglo(arreglo a)
{
    for (int i = 0; i < N; i++)
    {
        printf(" %d ", a[i]);
    }
    
}