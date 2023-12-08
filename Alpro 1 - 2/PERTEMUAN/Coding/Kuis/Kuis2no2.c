/*
Saya Sabila Rosad NIM 2106000 mengerjakan soal Kuis 2 no 2 
dalam mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah 
dispesifikasikan. Aamiin.
*/
//library yang digunakan
#include <stdio.h>
#include <string.h>
//deklarasi fungsi
int main()
{
    //deklarasi variable
    int n, i, j, max = 0;
    scanf("%d", &n);    //inputan user jumlah kata
    char str[n][201], panjang[201];
    //inputan user
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        //mencari string paling panjang
        panjang[i] = strlen(str[i]);
        if (panjang[i] > max)
        {
            max = panjang[i];
        }
    }
    //membuat pola
    for (i = 0; i < n; i++)
    {
        //kalau indeks genap
        if (i % 2 == 0)
        {
            for (j = 0; j <= strlen(str[i]) - 1; j++) 
            {
                printf("%c", str[i][j]);
            }
        }
        //kalau indek ganjil
        if (i % 2 == 1)
        {
            for (j = 0; j <= strlen(str[i]) - 1; j++) 
            {
                printf("%c", str[i][j]);
            }
        }
        printf("\n");
        for(j = max - strlen(str[i]); j > 1 ; j--)
        {
            printf(" ");
        }
    }

    //reset kode ke 0
    return 0;
}