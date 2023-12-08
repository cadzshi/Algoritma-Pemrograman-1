#include <stdio.h>
#include <string.h>

int main()
{
    char substring[6];  // input panjangnya 2-5 char, tapi bagian terakhir string harus selalu '\0'
    char string[100];
    int count = 0;
    int match;

    scanf("%s", substring);
    scanf("%s", string);

    // disini i itu buat index string utamanya
    // j buat index substring
    // kondisi for nya panjang string - panjang substring biar pas dicek ga kelebihan indexnya
    for (int i = 0; i <= strlen(string) - strlen(substring); i++)
    {
        // setiap ganti index string utama, nilai match direset jadi 0
        match = 0;
        // for ini diulang menyesuaikan panjang substring
        for (int j = 0; j < strlen(substring); j++)
        {
            // contoh string "bandung" dan substring "un"
            // anggap i = 4, maka kita akan cek mulai dari huruf 'u'
            // karena panjang substring = 2, maka kita bakal cek 2 char
            // yaitu index i ('u') dan i + 1 ('n'), (ini ditambah otomatis karena j itu iterator loop)
            if (string[i + j] == substring[j])  // kondisi if nya jadi kaya gini
            {
                match++;    // pokoknya jika salah satu char itu sama, nilai match ditambah
            }
        }
        // kalo nilai match == panjang substring, berarti kata itu ada di dalam string di index ke i
        if (match == strlen(substring))
        {
            count++;
        }
    }
    
    printf("%i\n", count);

    return 0;
}