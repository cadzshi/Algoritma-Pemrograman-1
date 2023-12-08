#include <stdio.h>
#include <math.h>

int main()
{
    int n, biner, dec, num, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        dec = 0;
        scanf("%d", &biner);
        int j = 0;
        while (biner != 0)
        {
            num = biner % 10;
            dec += num * powf(2, j);
            biner /= 10;
            j++;
        }
        sum += dec;
    }
    printf("%d\n", sum);
    
    return 0;
}