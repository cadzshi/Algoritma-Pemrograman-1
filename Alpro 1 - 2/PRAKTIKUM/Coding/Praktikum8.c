#include <stdio.h>
#include <string.h>

/*
//soal 1
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
    }
    for (i = 0; i < n; i++)
    {
        scanf("%s", arr2[i]);
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
            if (j != strlen(arr2[i]) - 1) 
            {
                printf("\n");
            }
        }
        space++;
    }

    return 0;
}
*/