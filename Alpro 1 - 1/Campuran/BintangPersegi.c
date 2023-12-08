#include <stdio.h>

int main()
{ //baris kebawah, kolom kesamping
    int n, baris, kolom;
    scanf("%d", &n);
    //for utama 1
    for (baris = 1; baris <= n; baris++)
    { // spasi paling kiri
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        //piramida ditengah
        for (kolom = 1; kolom <= baris * 2 - 1; kolom++)
        {
            printf("*");
        }
        //spasi setelah piramida
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        //persegi panjang
        for (kolom = 1; kolom <= n + 1; kolom++)
        {
            printf("*");
        }
        //segitiga tambahan setelah persegi panjang
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf("*");
        }
        printf("\n");
    }
    //for utama 2
    for (baris = 1; baris <= n - 1; baris++)
    {
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf(" ");
        }
        for (kolom = ((n - 1) * 2); kolom >= baris * 2; kolom--)
        {
            printf("*");
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= n + 1; kolom++)
        {
            printf("*");
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
}

