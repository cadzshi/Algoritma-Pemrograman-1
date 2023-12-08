#include "header.h"

// saya lupa kenapa ini harus dijadiin prosedur
void print_spasi()
{
    for (int k = 0; k < spasi; k++)
    {
        printf(" ");
    }
}

// fungsi untuk mencari nilai terkecil dari sebuah array
int cari_terkecil(int arr[])
{
    // di awal, index pertama dianggap paling kecil
    int hasil = 0;
    for (int k = 0; k < 4; k++)
    {
        // jika ada nilai yang lebih kecil, maka index terkecil akan berubah
        if (arr[hasil] > arr[k]) hasil = k;
    }
    // return index nilai terkecil
    return hasil;
}

// mengatur jumlah spasi sebelum angka
void atur_spasi(int n)
{
    // loop akan dijalankan sebanyak jumlah digit dari n
    while (n > 0)
    {
        // untuk setiap perulangan jumlah spasi bertambah 1 dan digit n berkurang 1
        spasi++;
        n /= 10;
    }
}