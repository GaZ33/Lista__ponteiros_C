#include <stdio.h>

void troca(int *a, int *b);

int main(void)
{
    int a, b;
    printf("Digite valor da variável a: ");
    scanf("%d", &a);
    printf("Digite valor da variável b: ");
    scanf("%d", &b);
    troca(&a, &b);
    printf("\nValor de A: %d", a);
    printf("\nValor de B: %d", b);
}

void troca(int *a, int *b)
{
    if (*b > *a)
    {
        int c = *b;
        *b = *a;
        *a = c;
    }
    
}