#include "header.h"

int main()
{
    int n;

    scanf("%i", &n);    // scan jumlah string

    char arr[n][101];   // array of string berjunlah n

    // scan masing-masing string ke dalam array
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }

    // scan sukukata yang akan dicari
    scanf("%s", sukukata);

    // hasil merupakan jumlah sukukata keseluruhan
    int hasil = 0;
    // hitung jumlah sukukata di masing2 string dan tambahkan nilainya ke hasil
    for (int i = 0; i < n; i++)
    {
        hasil += hitung(arr[i]);
    }
    // yaudah gitu, inimah sama aja kaya soal latihan di cspc
    printf("%i\n", hasil);

    return 0;
}