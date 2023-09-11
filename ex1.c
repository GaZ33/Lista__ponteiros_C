#include <stdio.h>

int main(void)
{
    int a, *ptra;
    float b, *ptrb;
    char c, *ptrc;

    
    ptra = &a;
    ptrb = &b;
    ptrc = &c;

    a = 1;
    b = 5.555;
    c = 'a';
    printf("\nValor do int: %d", a);
    printf("\nValor do float: %0.3f", b);
    printf("\nValor do char: %c", c);

    printf("\n======== Trocando os valores ========");
    *ptra = 5;
    *ptrb = 2.222;
    *ptrc = 'f';
    printf("\nValor do int: %d", a);
    printf("\nValor do float: %0.3f", b);
    printf("\nValor do char: %c", c);
    return 0;
}