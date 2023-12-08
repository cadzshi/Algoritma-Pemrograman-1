#include "head.h"

int main()
{
    int n;              // jumlah string

    scanf("%d", &n);

    char str[n][101];    // array of string berjumlah n

    // scan masing masing string 
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    int batas;
    scanf("%d", &batas);

    return 0;

}