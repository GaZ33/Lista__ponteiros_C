#include <stdio.h>

int checkfrase(char *a, char *b);

int main(void)
{
    char frase1[50], frase2[50];
    int check;
    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    printf("Digite a seguunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);
    check = checkfrase(frase1, frase2);
    if (check == 1)
    {
        printf("A frase 2 nao estah contida na frase 1");
    }
    else
    {
        printf("A frase 2 estah contida na frase 1");
    }
    return 0;
}

int checkfrase(char *a, char *b)
{
    int tamanho2 = 0;
    int count = 0;
    while (b[tamanho2] != '\0')
    {
        tamanho2++;
    }
    while (a[count] != '\0')
    {
        if (a[count] == b[0])
        {
            for (int i = 1; i < tamanho2; i++)
            {
                if (i == tamanho2-1)
                {
                    return 0;
                }
                if (a[count+i] != b[i])
                {
                    break;
                }
                
                
            }
            
        }
        count++;
        
    }
    return 1;
}