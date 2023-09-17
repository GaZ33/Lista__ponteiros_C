#include <stdio.h>

int sorting(int *a);

int main(void)
{
    int a[3], check;
    for (int i = 0; i < 3; i++)
    {
        printf("Digite valor da variável: ");
        scanf("%d", &a[i]);
    }
    
    check = sorting(a);
    if (check == 1)
    {
        printf("Os 3 valores sao igual a 0");
    }
    else
    {
        printf("Os valores ordenados:");
        for (int i = 0; i < 3; i++)
        {
            printf(" %d, ", a[i]);
        }
        
    }
}

int sorting(int *a)
{
    for (int i = 0, zero = 0; i < 3; i++)
    {
        if (a[i] == 0)
        {
            zero++;
        }
        if (zero == 3)
        {
            return 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3 ; j++)
        {
            if (a[i] > a[j])
        {
            int troca = a[i];
            a[i] = a[j];
            a[j] = troca;
        }
        }
        
    }
    return 0;
}