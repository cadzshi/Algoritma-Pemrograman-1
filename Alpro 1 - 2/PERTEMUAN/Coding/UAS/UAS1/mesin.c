#include "head.h"

void vokalKonsonan(int n, char arr[], char baru[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(arr[i]); j++)
        {
            if (arr[i][j] == 'a' || arr[i][j] == 'i' || arr[i][j] == 'u' || arr[i][j] == 'e' || arr[i][j] == 'o')
            {
                if (arr[i][j + 1] != 'a' && arr[i][j + 1] != 'i' && arr[i][j + 1] != 'u' && arr[i][j + 1] != 'e' && arr[i][j + 1] != 'o')
                {
                    if (arr[i][j + 2] == 'a' || arr[i][j + 2] == 'i' || arr[i][j + 2] == 'u' || arr[i][j + 2] == 'e' || arr[i][j + 2] == 'o')
                    {
                        baru[i][j] = arr[i][j];
                    }
                    
                }
                
            }
            
        }
    }
}