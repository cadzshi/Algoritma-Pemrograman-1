#include "head.h"

int cari_terkecil(int arr[])
{
    int hasil = 0;
    for (int k = 0; k < 4; k++)
    {

        if (arr[hasil] > arr[k]) hasil = k;
    }
    return hasil;
}