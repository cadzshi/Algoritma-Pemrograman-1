#include "head.h"

int main()
{
    int n;
    scanf("%d", &n);

    data num[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &num[i].arr[j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int smallest = cari_terkecil(num[i].arr);
            printf("%i\n", num[i].arr[smallest]);
        
        }
    }
    return 0;
}