/*
=========================================================================
||   Saya Sabila Rosad NIM 2106000 mengerjakan soal SJAH22             ||
||   (tugas praktikum 5) dalam mata kuliah algoritma dan pemrograman 1 || 
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
    int n, m, i;              //variabel untuk banyak elemen array
    int a = 0, b = 0;         //variabel untuk jumlah nilai setiap huruf

    //inputan user pertama
    scanf("%d", &n);            //meminta dari user untuk jumlah huruf
    char x[n];                  //deklarasi array 
    for (i = 0; i < n; i++)     //perulangan untuk masukan user
    {
        //masukkan huruf dari user sebanyak jumlah huruf
        scanf(" %c", &x[i]);
    }

    //inputan user kedua 
    scanf("%d", &m);            //penjelasan sama kaya diatas tapi ini untuk user kedua
    char y[m];
    for (i = 0; i < m; i++)
    {
        scanf(" %c", &y[i]);   
    }

    //perulangan untuk mengecek nilai dari setiap huruf untuk user pertama
    for (i = 0; i < n; i++)
    {
        if (x[i] == 'a')    //kalo array sama dengan 'a', maka..
        {
            a += 1;         //nilai a bertambah 1
        }
        if (x[i] == 'b')    //kalo b, maka
        {
            a += 2;         //nilai a bertambah 2
        }
        if (x[i] == 'c')    //kalo c, maka
        {
            a += 3;         //nilai a bertambah 3
        }
        if (x[i] == 'd')    //kalo d, maka
        {
            a += 4;         //nilai a bertambah 4
        }
        if (x[i] == 'e')    //kalo e, maka
        {
            a += 5;         //nilai a bertambah 5
        }
        if (x[i] == 'f')    //kalo f, maka
        {
            a += 6;         //nilai a bertambah 6
        }
        if (x[i] == 'g')    //kalo g, maka
        {
            a += 7;         //nilai a bertambah 7
        }
        if (x[i] == 'h')    //kalo h, maka
        {
            a += 8;         //nilai a bertambah 8
        }
        if (x[i] == 'i')    //kalo i, maka
        {
            a += 9;         //nilai a bertambah 9
        }
        if (x[i] == 'j')    //kalo j, maka
        {
            a += 10;        //nilai a bertambah 10
        }
        if (x[i] == 'k')    //kalo k, maka
        {
            a += 11;        //nilai a bertambah 11
        }
        if (x[i] == 'l')    //kalo l, maka
        {
            a += 12;        //nilai a bertambah 12
        }
        if (x[i] == 'm')    //kalo m, maka
        {
            a += 13;        //nilai a bertambah 13
        }
    }
    //perulangan untuk mengecek nilai dari setiap huruf untuk user kedua
    for (i = 0; i < m; i++)
    {
        if (y[i] == 'z')    //yang ini sama bang penjelasannya kaya diatas 
        {                   //tapi yang ini dari z ke o
            b += 1;         //#hayati lelah
        }
        if (y[i] == 'y')
        {
            b += 2;
        }
        if (y[i] == 'x')
        {
            b += 3;
        }
        if (y[i] == 'w')
        {
            b += 4;
        }
        if (y[i] == 'v')
        {
            b += 5;
        }
        if (y[i] == 'u')
        {
            b += 6;
        }
        if (y[i] == 't')
        {
            b += 7;
        }
        if (y[i] == 's')
        {
            b += 8;
        }
        if (y[i] == 'r')
        {
            b += 9;
        }
        if (y[i] == 'q')
        {
            b += 10;
        }
        if (y[i] == 'p')
        {
            b += 11;
        }
        if (y[i] == 'o')
        {
            b += 12;
        }
        if (y[i] == 'n')
        {
            b += 13;
        }
    }
    //nah masuk ke persyaratan apakah bom berhasil deactivated atau tidaq
    //jika jumlah huruf keduanya sama dan jumlah nilai setiap hurufnya sama, maka
    if ((n == m) && (a == b))     
    {
        //print urutan hurufnya (huruf kapital disambung huruf kecil)
        for (i = 0; i < n; i++)
        {   
            if (x[i] != x[n - 1])   //kalo bukan diakhir maka kasih spasi
            {
                printf("%c %c ", x[i] - 32, y[i]);  //dikurang 32 biar jadi kapital
            }
            else                    //kalo diakhir ya jangan
            {
                printf("%c %c", x[i] - 32, y[i]);
            }
        }
        //yeyyyy kelazzz sir
        printf("\n");
        printf("Passcode Match!\n");
        printf("Bomb deactivated. Have a nice day, Sir Axlerod.\n");
    }
    //kondisi kedua, kalo jumlah huruf sama tapi nilainya berbeza
    else if ((n == m) && (a != b))
    {
        //print urutan hurufnya (huruf kecil disambung huruf kapital)
        for (i = 0; i < n; i++)
        {
            if (x[i] != x[n - 1])   //kalo bukan diakhir maka kasih spasi
            {
                printf("%c %c ", x[i], y[i] - 32);
            }
            else                    //kalo diakhir yaa jangan
            {
                printf("%c %c", x[i], y[i] - 32);
            }
        }
        //yahh hari hari nt sir kaya jalu :v
        printf("\n");
        printf("Passcode Not Match!\n");
        printf("The bomb timer has been reduced for 1 minute.\n");
    }
    //kondisi terakhir, gada yang sehati
    else if ((n != m) && (a != b))
    {
        //innalilillahi
        printf("Passcode Format Invalid!\n");
        printf("The bomb will instantly explode. Boom!\n");
    }
    //mengembalikan kode ke 0
    return 0;
}             