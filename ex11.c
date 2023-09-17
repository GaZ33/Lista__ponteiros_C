#include <stdio.h>

int main(void)
{
    int a[5], *ptraA;
    ptraA = a;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite valor de a na posicao %d: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (*(ptraA+i) % 2 == 0)
        {
            printf("\nA posicao %d contem um numero par: %d", i, *(ptraA+i));
        }
    }
}
