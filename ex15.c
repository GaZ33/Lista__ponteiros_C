#include <stdio.h>

void printarray(int *a);

int main(void)
{
    int a[5] = {2, 6, 7 ,3, 21};

    printarray(&a);
}

void printarray(int *a)
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nPosicao %d: %d", i, *(a+i));
    }
}