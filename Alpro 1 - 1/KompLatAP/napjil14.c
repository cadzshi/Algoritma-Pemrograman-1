#include <stdio.h>

int main()
{
    int i, n, g1 = 0, g2 = 0;
    int ganjil[3] = {0};
    int genap[3] = {0};

    for (i = 0; i < 6; i++)
    {
        scanf("%d", &n);
    
        if (n % 2 == 0)
        {
            ganjil[g1] = n;
        }
        if (n % 2 == 1)
        {
            genap[g2] = n;
        }
    }

    if (g1 == 3 && g2 == 3)
    {
        for (i = 0;i < 3;i++)
        {
            printf("%d\n%d\n", genap[i], ganjil[i]);
        }
    }
    else
    {
        printf("tidak valid\n");
    }

    return 0;
}