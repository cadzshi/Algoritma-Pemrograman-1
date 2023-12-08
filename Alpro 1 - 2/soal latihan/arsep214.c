#include <stdio.h>

int main()
{
    int arr1[20];
    int arr2[20];
    int i, n1, n2;
    int sum1 = 0, sum2 = 0;

    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n1 / 2; i++)
    {
        sum1 += arr1[i];
    }
    for (i = n2 - 1; i >= n2 / 2; i--)
    {
        sum2 += arr2[i];
    }

    if (sum1 == sum2)
    {
        printf("valid\n");
    }
    else
    {
    printf("tidak valid\n");
    }
    
    
    return 0;
}