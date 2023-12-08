#include <stdio.h>

int main()
{
    int n, b, k;
    scanf("%d", &n);

    for(b = 0;b < 1;b++)
    {
        for(k = b;k < n;k++)
        {
            printf(" ");
        }
        for(k = b;k < n;k++)
        {
            printf("*");
        }
        for(k = b;k < n * 2 - 2;k++)
        {
            printf(" ");
        }
        for(k = b;k < n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (b = 0;b < n - 1;b++)
    {
        for(k = n - 3;k >= b;k--)
        {                                    
            printf(" ");
        }
        for (k = 0;k < b + 2;k++)
        {
            printf("*");
        }
        for (k = 0;k < n;k++)
        {
            printf("*");
        }
        for (k = 0;k < n * 2 - 2;k++)
        {
            printf(" ");
        }
        for(k = 0;k <= b;k++) 
        {
            printf(" ");
        }
        for (k = 0;k < n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (b = 0;b < n - 1;b++)
    {
        for (k = 0;k < n;k++)
        {
            printf(" ");
        }
        for(k = 0;k < b;k++)
        {
            printf(" ");
        }
        for (k = 0;k < n;k++)
        {
            printf("*");
        }
        for (k = b;k < n - 1;k++)
        {
            printf(" ");
        }
        for (k = n;k >= b + 3;k--)
        {
            printf(" ");
        }
        for (k = 0;k < n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(b = 0;b < 1;b++)
    {
        for (k = 0;k < n * 2 -1;k++)
        {
            printf(" ");
        }
        for (k = 0;k < n * 2 - 1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (b = 0;b < n;b++)
    {
        for (k = n;k > b;k--)
        {
            printf(" ");
        }
        for (k = 0;k < n;k++)
        {
            printf("*");
        }
        for (k = 0;k < b;k++)
        {
            printf(" ");
        }
        for (k = 0;k < n - 2;k++)
        {
            printf(" ");
        }
        for (k = 0;k < 1;k++)
        {
            printf(" ");
        }
        for (k = 0;k < n - 2;k++)
        {
            printf(" ");
        }
        for(k = 0;k < b;k++) 
        {
            printf(" ");
        }
        for (k = 0;k < n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}