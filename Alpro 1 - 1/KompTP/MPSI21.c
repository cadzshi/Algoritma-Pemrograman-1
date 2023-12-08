/*   
    Saya Sabila Rosad [2106000] mengerjakan 
    soal tugas praktikum 4 - MPSI21 
    dalam mata kuliah algoritma dan pemrograman 1 
    untuk keberkahanNya maka saya tidak melakukan kecurangan 
    seperti yang telah dispesifikasikan. Aamiin.
*/
//library yang digunakan
#include <stdio.h> 

//deklarasi fungsi
int main()
{
    //membuat variabel untuk masukan user, baris, dan kolom 
    int n, b, k;
    char c;

    //meminta masukan dari user
    scanf(" %c %d", &c, &n);

    //for untuk baris tanduk
    for(b = 0; b < n;b++)
    {
        for(k = 0;k <= b;k++)
        {
            printf(" ");
        }
        for(k = 0;k < b + 1;k++)
        {
            printf("*");
        }
        for(k = b * 2;k <= n + 2;k++)
        {
            printf(" ");
        }
        for(k = 0; k < n * 5 - 2;k++)
        {
            printf(" ");
        }
        for(k = b * 2;k <= n + 2;k++)
        {
            printf(" ");
        }
        for(k = 0;k <= b;k++)
        {
            printf("*");
        }
        for(k = 0;k <= b;k++)
        {
            printf(" ");
        }   
        printf("\n");
    }

    //for untuk baris setelah tanduk
    for(b = 0; b < 1;b++)
    {
        for(k = b;k < n - 1;k++)
        {
            printf(" ");
        }
        for(k = b;k < n + 1;k++)
        {
            printf("*");
        }
        for(k = b;k < n * 3 + 8;k++)
        {
            printf("*");
        }
        for(k = b;k < n + 1;k++)
        {
            printf("*");
        }
        for(k = b;k < n - 1;k++)
        {
            printf(" ");
        }
        printf("\n");
    }

    //for untuk baris mata, dan hidung
    for (b = 0;b < n - 2; b++)
    {
        for(k = n - b - 1;k > 1; k--)
        {
            printf(" ");
        }
        for(k = 0;k <= b + 1;k++)
        {
            printf("*");
        }
        for(k = 0;k < n;k++)
        {
            printf(" ");
        }
        for(k = 0;k < n * 2;k++)
        {
            printf("*");
        }
        for(k = 0;k < n;k++)
        {
            printf(" ");
        }
        for(k = 0;k < n * 2;k++)
        {
            printf("*");
        }
        for(k = 0;k < n;k++)
        {
            printf(" ");
        }
        for(k = 0;k <= b + 1;k++)
        {
            printf("*");
        }
        for(k = n - b - 1;k > 1; k--)
        {
            printf(" ");
        }    
        printf("\n");
    }
    //for untuk baris sebelum kaki
    for(b = 0;b < 1;b++)
    {
        for(k = b;k < n * 9;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    //for untuk baris kaki
    for(b = 0;b < n;b++)
    {
        for(k = 0;k < n;k++)
        {
            printf(" ");
        } 
        for(k = 0;k < n;k++)
        {
            printf("*");
        }
        for(k = 0;k < n;k++)
        {
            printf(" ");
        }
        for(k = 0;k < n;k++)
        {
            printf("*");
        }
        for(k = 0;k < n;k++)
        {
            printf(" ");
        }
        for(k = 0;k < n;k++)
        {
            printf("*");
        }  
        for(k = 0;k < n;k++)
        {
            printf(" ");
        }
        for(k = 0;k < n;k++)
        {
            printf("*");
        }
        for(k = 0;k < n;k++)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}

//saya puyeng++
//sebenernya belom jadi kang/teh