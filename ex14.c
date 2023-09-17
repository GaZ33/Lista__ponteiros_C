#include <stdio.h>

void func(int b, int *ptra);

int main(void)
{
    int array[5], b;
    printf("Digite valor da variavel para preencher o array: ");
    scanf("%d", &b);

    func(b, &array);
    for (int i = 0; i < 5; i++)
    {
        printf("\nMostrando o array i(%d): %d", i , array[i]);
    }
    
}

void func(int b, int *ptra)
{
    for (int i = 0; i < 5; i++)
    {
        *(ptra+i) = b;
    }
}