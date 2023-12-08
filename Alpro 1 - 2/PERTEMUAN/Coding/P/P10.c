#include <stdio.h>
#include <string.h>

//ngitung jumlah huruf a dalam string
int jumlahA (char str[])
{
    int i, j = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] == 'a') || (str[i] <= 'A'))
        {
            j++;
        }
    }
    return j;
}
//fungsi pertambahan
int tambah (int a, int b)
{
    int hasil = a + b;
    return hasil;
    //=====atau=====//
    //return (a + b);
}
//pertmabahan elemen arrary
int sum(int n, int arr[n])
{
    int i, hasil = 0;
    for (i = 0; i < n; i++)
    {
        hasil += arr[i];
    }
    return hasil;
}
//cari nilai min dan max lalu print kata dengan mengkalikan nilai min dan max
int nilaimin (int n, int arr[n])
{
    int i, min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
    return min;
}
int nilaimax (int n, int arr[n])
{
    int i, max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
    return max;
}
void printkata (int n)
{
    int i;
    for (i = 0; i <= n; i++)
    {
        printf("terima kasih telah bertahan sampai sekarang ini\n");
    }
    
}
int main()
{
    /*
    int hasil;
    char str[50];

    scanf("%s", str);
    hasil = jumlahA(str);
    printf("%d\n", hasil);
    //=====atau=====//
    scanf("%s", str);
    printf("%d\n", jumlahA(str));
    */
    /*
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", tambah(x, y));
    */
    /*
    int x, i;
    scanf("%d", &x);
    int arr[x];

    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);    
    }
    
    printf("%d\n", sum(x, arr));
    */
    int x, i;
    scanf("%d", &x);
    int arr[x];

    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

    printkata((nilaimin(x, arr)*nilaimax(x, arr)));
    return 0;
}