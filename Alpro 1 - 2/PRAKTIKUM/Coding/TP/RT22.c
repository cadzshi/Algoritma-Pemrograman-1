/*
=========================================================================
||   Saya Sabila Rosad NIM 2106000 mengerjakan soal RT22               ||
||   (tugas praktikum 1) dalam mata kuliah algoritma dan pemrograman 1 || 
||   untuk keberkahanNya maka saya tidak melakukan kecurangan          || 
||   seperti yang telah dispesifikasikan. Aamiin.                      ||
=========================================================================
*/
//Library yang digunakan
#include <stdio.h>

//deklarasi fungsi
int main()
{
    //deklarasi variabel
    int larutanA, larutanB, larutanC, total;            //variabel untuk larutan
    int albert = 0, ellin = 0, stanley = 0, countAll;   //variabel untuk penanda
    char half, mix;                                     //variabel untuk ngebagi dan ngemix larutan

    //meminta inputan user
    scanf("%d %d %d", &larutanA, &larutanB, &larutanC); //untuk larutan
    scanf(" %c", &half);                                //untuk larutan mana yang dibagi
    scanf(" %c", &mix);                                 //untuk ngecampurnya

    //pembagian larutaaannnn cap kaki tiga (yang ada badaknya)
    if (half == 'a')        //kalo a ya 
    {                       //larutan a yang dibagi 2
        larutanA *= 0.5;    
    }
    else if (half == 'b')   //kalo b 
    {                       //ya larutan b yang dibagi 2
        larutanB *= 0.5;    
    }
    else                    //selain keduanya 
    {                       //ya c yang dibagi 2
        larutanC *= 0.5;    
    }

    //ini larutan dicampur
    total = larutanA + larutanB + larutanC;
    
    if (mix == 'A')     //kalo A itu diaduk 
    {                   //volume bertambah 8
        total += 8;
    }
    if (mix == 'K')     //kalo K itu dikoco
    {                   //volume 3x lipat dari sebelumnya
        total *= 3;
    }

    //syarat pertama
    if ((total > 20) && (total < 50))                       //kalo volumenya > 20 & < 50
    {                                                       //nilai albert menjadi 1 aka syarat terpenuhi
        albert = 1;
    }
    //syarat kedua
    if ((total % 4 == 0) || (total % 6 == 0))               //kalo volumenya kelipatan 4 & 6
    {                                                       //nilai ellin menjadi 1 aka syarat terpenuhi
        ellin = 1;
    }
    //syarat terakhir tjuy
    if ((larutanC < larutanA) && (larutanC < larutanB))     //kalo larutan c lebi kecil dari keduanya
    {                                                       //nilai stanley menjadi 1 aka syarat terpenuhi
        stanley = 1;
    }
    
    //ngitung total syarat terpenuhi ges
    countAll = albert + ellin + stanley;

    //kalo volumenya genap & minimum syarat terpenuhi 2 syarat maka, sekian...
    ((total % 2 == 0) && (countAll >= 2)) ? printf("Ramuan sukses dibuat!\n") : printf("Ramuan gagal!\n");
    
    //mengembalikan kode ke 0
    return 0;
}