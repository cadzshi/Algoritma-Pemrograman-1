/*
Saya Sabila Rosad NIM 2106000 mengerjakan soal kuis 1 
dalam mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah 
dispesifikasikan. Aamiin.
*/

//library yang digunakan
#include <stdio.h>

//deklarasi fungsi
int main()
{
    //deklarasi variabel
    int pembilang1, pembilang2, pembilang3;             //variabel pembilang
    int penyebut1, penyebut2, penyebut3;                //variabel penyebut
    float hasil1, hasil2, hasil3;                       //variabel hasil bagi
    float temp1, temp2, temp3;                          //variabel sementara pembilang
    float temp11, temp22, temp33;                       //variabel sementara penyebut
    int count1 = 0, count2 = 0, count3 = 0, countAll;   //buat penandaa
    
    //inputan user
    scanf("%d %d", &pembilang1, &penyebut1);
    scanf("%d %d", &pembilang2, &penyebut2);
    scanf("%d %d", &pembilang3, &penyebut3);

    //mindahin variabel sementara jadi float
    temp1 = pembilang1;
    temp2 = pembilang2;
    temp3 = pembilang3;
    temp11 = penyebut1;
    temp22 = penyebut2;
    temp33 = penyebut3;

    //hasil bagi
    hasil1 = temp1 / temp11;
    hasil2 = temp2 / temp22;
    hasil3 = temp3 / temp33;

    //ini kalo hasil seperempat
    if ((hasil1 == 0.25) || (hasil2 == 0.25) || (hasil3 == 0.25))
    {
        printf("seperempat\n");
        if (hasil1 == 0.25)                             //kalo pembilang1 dan penyebut1 hasil seperempat
        {
            printf("%d %d\n", pembilang1, penyebut1);
            count1 = 1;                                 //ditandain kalo ini ada hasil
        }   
        if (hasil2 == 0.25)                             //ini samaa bu kaya diatas
        {
            printf("%d %d\n", pembilang2, penyebut2);
            count2 = 1;
        }
        if (hasil3 == 0.25)
        {
            printf("%d %d\n", pembilang3, penyebut3);
            count3 = 1;
        }
    }
    //ini kalo hasil setengah
    if ((hasil1 == 0.5) || (hasil2 == 0.5) || (hasil3 == 0.5))
    {
        printf("setengah\n");
        if (hasil1 == 0.5)                              //kurleb sama bu kaya diatas
        {
            printf("%d %d\n", pembilang1, penyebut1);
            count1 = 1;
        }
        if (hasil2 == 0.5)
        {
            printf("%d %d\n", pembilang2, penyebut2);
            count2 = 1;
        }
        if (hasil3 == 0.5)
        {
            printf("%d %d\n", pembilang3, penyebut3);
            count3 = 1;
        }
    }
    //ini kalo hasil bilangan bulat
    if ((pembilang1 % penyebut1 == 0) || (pembilang2 % penyebut2 == 0) || (pembilang3 % penyebut3 == 0))
    {
        printf("bilangan bulat\n");                     //ini sama jugaa bu kaya diatass
        if (pembilang1 % penyebut1 == 0)
        {
            printf("%d %d\n", pembilang1, penyebut1);
            count1 = 1;
        }
        if (pembilang2 % penyebut2 == 0) 
        {
            printf("%d %d\n", pembilang2, penyebut2);
            count2 = 1;
        }
        if (pembilang3 % penyebut3 == 0) 
        {
            printf("%d %d\n", pembilang3, penyebut3);
            count3 = 1;
        }
    }
    //nah iini kalo selain dari diatas
    if (count1 != 1 || count2 != 1 || count3 !=1)
    {
        printf("lainnya\n");
        if (count1 != 1)                                //kalo penanda pertama nilainya bukan 1
        {
            printf("%d %d\n", pembilang1, penyebut1);
        }
        if (count2 != 1)                                //seterusnyaa samaaa bu
        {
            printf("%d %d\n", pembilang2, penyebut2);
        }
        if (count3 != 1) 
        {
            printf("%d %d\n", pembilang3, penyebut3);
        }   
    } 
    //mengembalikan kode ke 0
    return 0;
}