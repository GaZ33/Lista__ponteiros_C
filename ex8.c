#include <stdio.h>

int main(void)
{
    float a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("\nEndereco da posicao %d: %p", i, &a[i]);
    }
}