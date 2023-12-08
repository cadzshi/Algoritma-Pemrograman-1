//library yang digunakan
#include <stdio.h>

//deklarasi variabel
int main()
{
    //membuat variabel untuk manampung data nilai
    int n;

    printf("Muhammad Riyo Syam\n21421064\n1IC04\n");    //menampilkan nama, npm, dan kelas

    printf("Masukkan Nilai : ");                        //menampilkan masukkan nilai
    scanf("%d", &n);                                    //memasukkan nilai dari user


    if(n > 100)                         //jika nilai lebih dari 100 maka print input salah         
    {
        printf("Input salah");
    }
    else if (n >= 86 && n <= 100)       //jika nilai 86-100 maka print Nilai A
    {
        printf("Nilai A");
    }
    else if (n  >= 76 && n < 86)        //jika nilai 76-86 maka print Nilai B
    {
        printf("Nilai B");
    }
    else if (n  >= 66 && n < 76)        //jika nilai 66-76 maka print Nilai C
    {
        printf("Nilai C");
    }
    else                               //jika nilai kurang dari 66 maka print Nilai D
    {
        printf("Nilai D");
    }
    
    //mereset kode ke 0
    return 0;
}