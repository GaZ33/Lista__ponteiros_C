#include <stdio.h>

int main(void)
{
    int a, b, *ptra, *ptrb;
    ptra = &a;
    ptrb = &b;
    if (ptra > ptrb)
    {
        printf("O ptra eh maior");
    }
    else
    {
        printf("O ptrb eh maior");
    }
    // Testando: 
    // printf("\na: %p", ptra);
    // printf("\nb: %p", ptrb);
}