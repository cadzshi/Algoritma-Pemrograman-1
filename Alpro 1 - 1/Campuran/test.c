#include <stdio.h>
#include <string.h>

// No. 1
/*
int main()
{
    int n, i, j, k;
    int space = 0;

    scanf("%i", &n);

    char arr1[n][20];
    char arr2[n][20];

    for (i = 0; i < n; i++)
    {
        scanf("%s", arr1[i]);
        for (j = 0; j < strlen(arr1[i]); j++)
        {
            if (arr1[i][j] >= 'A' && arr1[i][j] <= 'Z')
            {
                arr1[i][j] += 32;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        scanf("%s", arr2[i]);
        for (j = 0; j < strlen(arr2[i]); j++)
        {
            if (arr2[i][j] >= 'A' && arr2[i][j] <= 'Z')
            {
                arr2[i][j] += 32;
            }
        }
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%s\n", arr1[i]);
        space += strlen(arr1[i]) - 1;

        for (j = 0; j < strlen(arr2[i]); j++)
        {
            for (k = 0; k < space; k++)
            {
                printf(" ");
            }
            printf("%c", arr2[i][j]);
            if (j != strlen(arr2[i]) - 1) printf("\n");
        }
        space++;
    }

    return 0;
}
*/

// No. 2
/*
int main()
{
    int n, i, j;
    int sum = 0;

    scanf("%i", &n);

    char arr[n][20];

    for (i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
        for (j = 0; j < strlen(arr[i]); j++)
        {
            sum += arr[i][j];
        }
    }

    printf("%i\n", sum);

    if (sum % 2 == 0)
    {
        for (i = 0; i < n; i++)
        {
            for (j = strlen(arr[i]) - 1; j >= 0; j--)
            {
                printf("%c", arr[i][j]);
            }
            if (i != n - 1) printf(" ");
        }
        printf("\n");
    }
    else
    {
        for (i = n - 1; i >= 0; i--)
        {
            printf("%s", arr[i]);
            if (i != 0) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
*/

// No. 3
/*
int main()
{
    int n, i, j;

    scanf("%i", &n);

    char arr[n][20];

    for (i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%s", arr[i]);
        }
        else if (i != n - 1)
        {
            for (j = 0; j < strlen(arr[i]); j++)
            {
                printf(" ");
            }
        }
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            printf("%s", arr[i]);
        }
        else if (i != n - 1)
        {
            for (j = 0; j < strlen(arr[i]); j++)
            {
                printf(" ");
            }
        }
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = strlen(arr[i]) - 1; j >= 0; j--)
            {
                printf("%c", arr[i][j]);
            }
        }
        else if (i != n - 1)
        {
            for (j = 0; j < strlen(arr[i]); j++)
            {
                printf(" ");
            }
        }
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            for (j = strlen(arr[i]) - 1; j >= 0; j--)
            {
                printf("%c", arr[i][j]);
            }
        }
        else if (i != n - 1)
        {
            for (j = 0; j < strlen(arr[i]); j++)
            {
                printf(" ");
            }
        }
    }
    printf("\n");
    
    return 0;
}
*/