#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, k = 0, r;
    float angka[100], b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &angka[i]);
    }
    for (int i = 0; i < n; i++)
    {
        a = angka[i];
        b = (angka[i] - a) * 100;
        // if (b % 10 != 10)
        // {
        //     b += 1;
        //  }
        r = round(b);
        if (a % 2 == 0 && r % 2 == 1)
        {
            k++;
        }
        //test
        //printf("debug a %d\n", a);
        //  printf("debug b %d\n", r);
        //for (int j = 0; j < 3; j++)
        // {
        // }
    }

    if (k >= 3)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    printf("\n");
    return 0;
}