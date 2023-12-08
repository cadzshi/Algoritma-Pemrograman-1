#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);

    int i, j, spasi = 0;
    int ganjil = 0, genap = 0;

    int panjang = strlen(str);
    if (panjang % 2 == 0)
    {
        genap = 1;
    }
    else
    {
        ganjil = 1;
    }

    for (i = 0; i < panjang / 2; i++)
    {
        for (j = 0; j < panjang / 2; i++)
        {
            printf("-");
        }
        printf("\n");
    }
    
    return 0;
}