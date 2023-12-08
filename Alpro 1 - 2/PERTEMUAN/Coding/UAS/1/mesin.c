#include "header.h"

int hitung(char str[])  // parameter merupakan string yang akan dicari jumlah sukukatanya
{
    // jumlah sukukata dimulai dari nol
    int count = 0;
    // loop akan mengecek keberadaan sukukata di setiap index
    for (int j = 0; j <= strlen(str) - strlen(sukukata); j++)
    {
        // asumsikan dari awal di index ini ada sukukata yang dicari (match = 0)
        int match = 0;
        // cek masing-masing char di index ini hingga index selanjutya (berdasatkan panjang sukukata)
        // jika salah satu char saja tidak sama dengan sukukata
        // maka sukukata itu tidak ada di index ini (match = 1) dan loop langsung dihentikan
        int k = 0;
        while (match == 0 && k < strlen(sukukata))
        {
            if (str[j + k] != sukukata[k])
            {
                match = 1;
            }
            k++;
        }
        // jika semua char sama di index ini, maka match akan tetap bernilai 0 (ada)
        if (match == 0)
        {
            count++;
        }
    }
    // return jumlah sukukata di dalam string ini
    return count;
}