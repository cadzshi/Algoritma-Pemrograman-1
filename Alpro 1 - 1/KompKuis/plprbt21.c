/*   
    Saya Sabila Rosad [2106000] mengerjakan 
    soal UTS - plprbt21 (Nomor 1) 
    dalam mata kuliah algoritma dan pemrograman 1 
    untuk keberkahanNya maka saya tidak melakukan kecurangan 
    seperti yang telah dispesifikasikan. Aamiin.
*/
//library yang digunakan
#include <stdio.h>

//deklarasi fungsi
int main()
{
    //deklarasi variabel untuk angka masukan, baris, dan kolom
    int n, b, k;
    //meminta masukan dari user
    scanf("%d", &n);

    //for untuk baris paling atas yang cuma 1 segitiga
    for(b = 0;b < n;b++)
    {
        //ini spasi 
        for(k = 0;k < n * 5 - 1;k++)
        {
            printf(" ");
        }
        //ini spasi sebelum segitiga
        for (k = n - 1;k >= b;k--)
        {                                    
            printf(" ");
        }
        //nah ini segitiganya, kecuali masukannya 1 itu cuman titik xixi
        for(k = 0;k < b + 1;k++)
        {
            printf("*");
        }
        //newline untuk baris
        printf("\n");
    }
    //for untuk baris ke 2
    for(b = 0;b < n;b++)
    {
        //untuk spasi awal
        for (k = 0;k < n;k++)
        {
            printf(" ");
        }
        //untuk spasi sebelum segitiga
        for(k = n - 2;k >= b;k--)
        {                                    
            printf(" ");
        }
        //untuk segitiga
        for(k = 0;k < b + 1;k++)
        {
            printf("*");
        }
        //spasi setelah segitiga
        for(k = 0;k < n * 2;k++)
        {
            printf(" ");    
        }
        //kotak ditengah
        for(k = 0;k < n;k++)
        {
            printf("*");    
        }
        //spasi setelah kotak
        for(k = 0;k < n * 3 - 1;k++)
        {
            printf(" ");    
        }
        //spasi sebelum segitiga
        for (k = n - 1;k >= b;k--)
        {                                    
            printf(" ");
        }
        //untuk segitiga
        for(k = 0;k < b + 1;k++)
        {
            printf("*");
        }
        //spasi setelah segitiga
        for (k = 0;k < n;k++)
        {
            printf(" ");
        }
        //spasi sebelum piramid
        for(k = n - 1;k >= b;k--)
        {                                    
            printf(" ");
        }
        //untuk piramid diakhir
        for (k = 0;k < b * 2 + 1;k++)
        {
            printf("*");
        }
        //newline untuk baris
        printf("\n");
    }
    //for untuk baris tengah
    for (b = 0;b < n;b++)
    {
        //kotak diawal
        for(k = 0;k < n;k++)
        {
            printf("*");
        }
        //spasi setelah kotak
        for(k = 0;k < n * 2;k++)
        {
            printf(" ");
        }
        //persegi panjang ditengah
        for(k = 0;k < n * 3;k++)
        {
            printf("*");
        }
        //spasi setelah persegi tadi
        for(k = 0;k < n;k++)
        {
            printf(" ");
        }
        //kotak setelah spasi tadi
        for(k = 0;k < n;k++)
        {
            printf("*");
        }
        //spasi setelah kotak
        for(k = 0;k < n * 2;k++)
        {
            printf(" ");
        }
        //persegi panjang dibawah piramid
        for(k = 0;k < n * 2 + 1;k++)
        {
            printf("*");
        }
        //newline untuk baris
        printf("\n");
    }
    //for untuk baris keempat sama kaya baris kedua cuma dibalik
    for(b = 0;b < n;b++)
    {
        //spasi awal
        for (k = 0;k < n;k++)
        {
            printf(" ");
        }
        //spasi sebelum segitiga
        for(k = 0;k < b;k++)
        {
            printf(" ");
        }
        //untuk segitiga
        for(k = b;k < n;k++) 
        {
            printf("*");
        }
        //spasi setelah segitiga 
        for(k = 0;k < n * 2;k++)
        {
            printf(" ");    
        }
        //kotak ditengah
        for(k = 0;k < n;k++)
        {
            printf("*");    
        }
        //spasi setelah kotak
        for(k = 0;k < n * 3 - 1;k++)
        {
            printf(" ");    
        }
        //spasi sebelum segitiga
        for(k = 0;k < b + 1;k++)
        {
            printf(" ");
        }
        //segitiga setelah spasi
        for(k = b;k < n;k++) 
        {
            printf("*");
        }
        //spasi setelah segitiga
        for (k = 0;k < n;k++)
        {
            printf(" ");
        }
        //ini juga spasi sebelum piramid terbalik
        for(k = 0;k <= b;k++) 
        {
            printf(" ");
        } 
        //untuk piramid terbalik
        for (k = (n - 1) * 2;k >= b * 2;k--)
        {
            printf("*");
        }
        //newline untuk baris
        printf("\n");
    }
    //for untuk baris terakhir
    for(b = 0;b < n;b++)
    {
        //spasi awal 
        for(k = 0;k < n * 5 - 1;k++)
        {
            printf(" ");
        }
        //spasi sebelum segitiga terbalik
        for(k = 0;k < b + 1;k++)
        {
            printf(" ");
        }
        //nah ini segitiganya terbaliknya
        for(k = b;k < n;k++) 
        {
            printf("*");
        } 
        //newline untuk barissssssss
        printf("\n");
    }
    //mereset kode ke 0
    return 0;
}
//Alhamdulillah selesai 1 soall:))))))))))))))))))