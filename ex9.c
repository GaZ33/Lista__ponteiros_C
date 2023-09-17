#include <stdio.h>

int main(void)
{
    float a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nPosicao i(%d) j(%d): %p", i, j, &a[i][j]);
        }
        
    }
    
}
