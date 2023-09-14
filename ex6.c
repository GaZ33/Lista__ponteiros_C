#include <stdio.h>

void soma(int *a, int *b);

int main(void)
{
    int a, b;
    printf("Digite valor da variável a: ");
    scanf("%d", &a);
    printf("Digite valor da variável b: ");
    scanf("%d", &b);
    soma(&a, &b);
    printf("\nValor de A: %d", a);
    printf("\nValor de B: %d", b);
}

void soma(int *a, int *b)
{
    *a += *a;
    *b += *b;
}