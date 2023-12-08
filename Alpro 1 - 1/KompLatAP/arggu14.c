#include <stdio.h>

int main()
{
    int n = 5, m = 5;
    int array[n], arr[m], i;

    for(i=0; i < n; i++)
    {
        scanf("%d", &array[n]);
    }
    for(i=0; i < m; i++)
    {
        scanf("%d", &arr[m]);
    }

    for(i=0; i < n; i++)
    {
        if(array[n] % 2 == 1)
        {
            printf("%d ", array[n]);
        }
        else
        {
            printf("%d ", arr[m]);
        }
    }
    /*for(i=0; i < m; i++)
    {
        if(arr[m] % 2 == 0)
        {
        printf("%d ", arr[m]);
        }
    }*/
    return 0;
}