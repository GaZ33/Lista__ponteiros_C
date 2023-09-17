#include <stdio.h>

int main(void)
{
    int a[5] = {2, 20, 50, 7, 1};
    int *ptra;
    ptra = a;
    for (int i = 0; i < 5; i++)
    {
        printf("\nValor de a na posicao %d: %d", i+1, *(ptra+i));
    }
}
