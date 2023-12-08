#include<stdio.h>

int main()
{
    int a, b, c, d, e, f;
    int g = 0, h = 0, i = 0, sum;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);

    if(a % d == 0)
    {
        g = 1;
    }
    if(b % e == 0)
    {
        h = 1;
    }
    if(c % f == 0)
    {
        i = 1;
    }
    sum = g + h + i;
    if(sum == 2)
    {
        printf("valid\n");
    }else{
        printf("tidak valid\n");
    }

    return 0;
}
