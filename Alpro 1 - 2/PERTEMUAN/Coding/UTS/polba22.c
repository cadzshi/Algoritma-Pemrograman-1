/*
Saya Sabila Rosad NIM 2106000 mengerjakan soal UTS 1
dalam mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah 
dispesifikasikan. Aamiin.
*/
//library yang digunakan
#include <stdio.h>
//dekalrasi fungsi
int main()
{
    //dekalrasi variabel
    int n, i, j;    //masukan input, baris dan kolom
    //meminta input user
    scanf("%d", &n);
    
    //saya bagi jadi 11 for/baris
    //for awal untuk baris pertama
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n * 7; j++)     //spasi awal
        {
            printf(" ");
        }
        for (j = 0; j < n * 5; j++)     //pola
        {
            printf("*");
        }
        for (j = 0; j < n * 2; j++)     //spasi lagi
        {
            printf(" ");
        }
        for (j = 0; j < n * 5; j++)     //pola
        {
            printf("*");
        }
        printf("\n");   //newline
    }
    //for kedua
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n * 8; j++)     //spasi awal
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++)     //pola
        {
            printf("*");
        }
        for (j = 0; j < n * 4; j++)     //spasi diantara 2 pola
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++)     //pola
        {
            printf("*");
        }
        printf("\n");   // newline
    }
    //for ketiga
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n * 9; j++)     //spasi awal
        {
            printf(" ");
        }
        for (j = 0; j < n; j++)     //pola
        {
            printf("*");
        }
        for (j = 0; j < n * 6; j++)     //spasi diantara 2 pola
        {
            printf(" ");
        }
        for (j = 0; j < n; j++)     //pola
        {
            printf("*");
        }
        printf("\n"); // newline
    }
    //for ke empat
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n * 5; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 4; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //for kelima
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 5; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 2; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 5; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //for keenam pembagi anatara atas dan bawah
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n * 2; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 22; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //for ketujuh
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 5; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 2; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 5; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //for kedelapan
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n * 5; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 4; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //for kesembilan
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n * 9; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 6; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //for kesepuluh
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n * 8; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 4; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //for terakhir
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n * 7; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 5; j++)
        {
            printf("*");
        }
        for (j = 0; j < n * 2; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //mengembalikan kode ke 0
    //maaf ibu penjelasannya sedikit
    return 0;
}
