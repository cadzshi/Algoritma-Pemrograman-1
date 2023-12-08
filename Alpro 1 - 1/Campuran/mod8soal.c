#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, k;
    int space = 0;

    scanf("%d", &n);

    char arr1[n][20];
    char arr2[n][20];

    for (i = 0; i < n; i++)
    {
        scanf("%s", arr1[i]);
        for (j = 0; j < strlen(arr1[i]); j++)
        {
            if(arr1[i][j] >= 'A' && arr1[i][j] <= 'Z')
            {
                arr1[i][j] += 32;
            }
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        scanf("%s", arr2[1]);
        for (j = 0;j < strlen(arr2[i][j]);j++)
        {
             if(arr2[i][j] >= 'A' && arr2[i][j] <= 'Z')
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
            for (k = 0;k < space;k++)
            {
                
            }
            
            if(arr1[i][j] >= 'A' && arr1[i][j] <= 'Z')
            {
                arr1[i][j] += 32;
            }
        }
        
    }
    


    return 0;
}