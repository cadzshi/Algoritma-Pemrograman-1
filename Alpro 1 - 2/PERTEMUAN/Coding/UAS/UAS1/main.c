#include "head.h"

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n][101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        vokalKonsonan(arr[i]);
    }
    
    

    


    return 0;
}