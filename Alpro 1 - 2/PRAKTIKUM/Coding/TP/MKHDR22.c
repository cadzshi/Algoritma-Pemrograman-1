/*
=========================================================================
||   Saya Sabila Rosad dengan NIM 2106000 mengerjakan soal             ||
||   tugas praktikum 8 dalam mata kuliah algoritma dan pemrograman 1   || 
||   untuk keberkahanNya maka saya tidak melakukan kecurangan          || 
||   seperti yang telah dispesifikasikan. Aamiin.                      ||
=========================================================================
*/
//library yang dipakai
#include <stdio.h>
#include <string.h>
//deklarasi fungsi
int main()
{
    //deklarasi variabel
    int n, i, j;        //jumlah kata, iterator
    int hasil;          //jumlah ascii kata kunci
    char kunci[101];    //kata kunci
    //inputan user
    scanf("%s %d", kunci, &n);  //kata kunci dan jumlah kata
    char kataLawan[n][101];
    for (i = 0; i < n; i++)
    {
        scanf("%s", kataLawan[i]);  //kata lawan
    }
    //menghitung jumlah ascii kata kunci
    i = 0, hasil = 0;   //inisialisasi
    while (i < strlen(kunci))
    {
        hasil += kunci[i];
        i++;
    }
/*
    int k = 0;
    for (i = 0; i < strlen(kataLawan[n]); i++)
    {
        k += kataLawan[n][i];
    }
    k = k % 26;

    int c = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < strlen(kataLawan[i]); j++)
        {
            if ((kataLawan[i][j] >= 'A' && kataLawan[i][j] <= 'Z'))
            {
                if (kataLawan[i][j] + k > 90)
                {
                    c = kataLawan[i][j];
                    c = (c + k) % 90;
                    kataLawan[i][j] = 'A';
                    kataLawan[i][j] += c - 1;
                }
                else
                {
                    kataLawan[i][j] += k;
                }
            }
            if ((kataLawan[i][j] >= 'a' && kataLawan[i][j] <= 'z'))
            {
                if (kataLawan[i][j] + k > 122)
                {
                    c = kataLawan[i][j];
                    c = (c + k) % 122;
                    kataLawan[i][j] = 'a';
                    kataLawan[i][j] += c - 1;
                }
                else
                {
                    kataLawan[i][j] += k;
                }
            }
        }
    }
    for(i = 0;i < n;i++)
    {
        for (j = 0; j < strlen(kataLawan[i]); j++)
        {
            printf("%c", kataLawan[i][j]);
        }
    }
*/

    
    //reset kode ke 0    
    return 0;
}
//pasrah aku tida mengerti :(