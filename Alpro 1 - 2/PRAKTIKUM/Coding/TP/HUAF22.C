/*
=========================================================================
||   Saya Sabila Rosad dengan NIM 2106000 mengerjakan soal             ||
||   tugas praktikum 4 dalam mata kuliah algoritma dan pemrograman 1   || 
||   untuk keberkahanNya maka saya tidak melakukan kecurangan          || 
||   seperti yang telah dispesifikasikan. Aamiin.                      ||
=========================================================================
*/
//library yang digunakan
#include <stdio.h>
//deklarasi fungsi
int main()
{
    //deklarasi variabel
    int n, b, k;   //variabel menampung ukuran pola, baris, kolom
    char c, flag;       //variabel menampung masukan huruf

    //meminta inputan user
    scanf("%d %c", &n, &c);
    flag = c;           //flag untuk penanda kalau dia sama seperti masukan huruf

    //for 1 untuk bagian atap istana
    for (b = 0; b < n; b++)
    {
        for (k = b; k < n - 1; k++)    //spasi sebelum atap
        {
            printf(" ");
        }
        for (k = 1; k <= b * 2 + 1; k++)    //atap istana
        {
            printf("+");
        } 
        for (k = b; k < n - 1; k++)    //spasi setelah istana
        {
            printf(" ");
        }  
        for (k = 0; k < n * 5; k++)        //sama kaya for sebelumnya
        {
            printf(" ");
        }
        for (k = b; k < n - 1; k++)    //ini jugak
        {
            printf(" ");
        }
        for (k = 1; k <= b * 2 + 1; k++)    //atap istana egen
        {
            printf("+");
        }
        printf("\n");   //newline
    }

    //for 2 untuk tiang atap istana
    for (b = 0; b < n - 1; b++)
    {
        for (k = b; k <= b; k++)        //spasi sebeum tiang   
        {
            printf(" ");
        }
        for (k = 0; k < n * 2 - 3; k++)    //tiang atap istana
        {
            printf("%c", c);
        }
        for (k = b; k <= b; k++)        //spasi setelah tiang
        {
            printf(" ");
        }
        for (k = 0; k < n * 5; k++)        //sama kaya sebelumnya
        {
            printf(" ");
        }
        for (k = b; k <= b; k++)        //ini jugak
        {
            printf(" ");
        }
        for (k = 0; k < n * 2 - 3; k++)    //tiang keduaaa
        {
            printf("%c", c);
        }
        printf("\n");   //newline
        if (c == 'z')   //ini nentuin kalo jenis bata sama dengan z, maka..
        {
            c = 96;     //dibalikin ke a
        }
        c++;    //ini untuk ngeubah si huruf masukan
    }

    //for 3 untuk tembok kecil(?) gatau apa itu
    for (b = 0; b < 1; b++)
    {
        for (k = b; k < 1; k++)                 //seperti biasa spasi awal
        {
            printf(" ");
        }
            for (k = 0; k < n * 2 - 3; k++)    //ini tiang
        {
            printf("%c", c);
        }
            for (k = b; k < 1; k++)             //spasi setelah tiang
        {
            printf(" ");
        }
            for (k = 0; k < n; k++)            //tembok kecil eta
        {
            printf("%c", c);
        }
            for (k = 0; k < n; k++)            //spasi lagi
        {
            printf(" ");
        }
            for (k = 0; k < n; k++)            //tembok kecilna
        {
            printf("%c", c);
        }
            for (k = 0; k < n; k++)            //spasi egen
        {
            printf(" ");
        }
            for (k = 0; k < n; k++)            //tembok kecil juga
        {
            printf("%c", c);
        }
            for (k = b; k < 1; k++)             //spasi sebelum tiang setelah tembok
        {
            printf(" ");
        }
            for (k = 0; k < n * 2 - 3; k++)    //tiang
        {
            printf("%c", c);
        }
        printf("\n");   //newline
        if (c == 'z')   //penjelasannya sama seperti diatas
        {
            c = 96;
        }
        c++;
    }

    //for 4 buat dibawahnya tembok diatas gerbang
    for (b = 0; b < 1; b++)
    {
        for (k = b; k < 1; k++)                 //seperti biasa spasi awal
        {
            printf(" ");
        }
            for (k = 0; k < n * 9 - 4; k++)    //bagian bawah tembok kecil
        {
            printf("%c", c);
        }
        printf("\n");   //newline
        if (c == 'z')   //penjelasannya sama seperti diatas
        {
            c = 96;
        }
        c++;
    }

    //for terakhir untuk bagian gerbang dan sekitarnya
    for (b = 0; b < n - 1; b++) 
    {
        for (k = b; k <= b ; k++)       //as usual spasi awal
        {
            printf(" ");
        }
        for (k = 0; k < n * 4 - 2; k++)    //badan istana
        {
            printf("%c", c);
        }
        //ini gerbang
        //kalo penanda vokal, maka..
        if (flag == 'a' || flag == 'i' || flag == 'u' || flag == 'e' || flag == 'o')    
        {
            for (k = 0; k < n; k++)
            {
                printf(" ");    //gerbang terbuka ges
            }
        }
        else    //kalo bukan alias konsonan
        {
            for (k = 0; k < n; k++)
            {
                printf("-");    //gerbang tertutup
            }
        }
        for (k = 0; k < n * 4 - 2; k++)    //badan istana
        {
            printf("%c", c);
        }
        printf("\n");   //newline
        if (c == 'z')   //penjelasannya sama seperti diatas
        {
            c = 96;
        }
        c++;
    }   
    //mengembalika kode ke 0
    return 0;
}