#include <stdio.h>

int main(void)
{
    int a, b, *ptra, *ptrb;
    ptra = &a;
    ptrb = &b;
    printf("Digite valor da variável a: ");
    scanf("%d", &a);
    printf("Digite valor da variável b: ");
    scanf("%d", &b);
    
    if (*ptra > *ptrb)
    {
        printf("O valor de a eh maior");
    }
    else{
        printf("O valor de b eh maior");
    }
}