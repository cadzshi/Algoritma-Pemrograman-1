#include <stdio.h>

//satu kondisi
/*
int main()
{
    int usia;
    printf("Masukkan usia : ");
    scanf("%d", &usia);
    if (usia >= 17) // kondisi atau syarat
    {
        // perintah yang dijalankan jika syarat terpenuhi
        printf("Boleh ikut pemilu\n");
    }
    return 0;
}
*/
//dua kondisi
/*
int main()
{
    int num;
    printf("Masukkan angka : ");
    scanf("%d", &num);
    if (num % 2 == 0) // kondisi atau syarat
    {
        printf("Bilangan genap\n");
    }
    else // jika kondisi tidak terpenuhi
    {
    printf("Bilangan ganjil\n");
    }
    return 0;
}
*/
//ternary operator/conditional operator
//kondisi ? expression 1 : expression 2;
/*
int main()
{
    int num;
    printf("Masukkan angka : ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("Genap\n") : printf("Ganjil\n");
    return 0;\
}
*/
//pemilihan lebih dari 2 kondis
/*i
int main(){
    char karakter;

    printf("Masukkan karakter : ");
    scanf(" %c", &karakter);

    if ((karakter >= 'A') && (karakter <= 'Z'))
    {
        printf("Karakter termasuk huruf kapital\n");
    }
    else if ((karakter >= 'a') && (karakter <= 'z'))
    {
        printf("Karakter termasuk huruf kecil\n");
    }
    else if ((karakter >= '0') && (karakter <= '9'))
    {
        printf("Karakter termasuk angka\n");
    }
    else
    {
        printf("Karakter bukan termasuk huruf atau angka\n");
    }
return 0;
}
*/
//pemilihan beruntun
/*
int main()
{
    int num;
    printf("Masukkan angka : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Bilangan negatif\n");
    }
    if (num % 2 == 0)
    {
        printf("Bilangan genap\n");
    }
    if (num % 7 == 0){
    printf("Bilangan kelipatan 7\n");
    }
return 0;
}
*/
//pemilihan bersarang
/*
int main()
{
    int num;
    // meminta masukan angka bilangan asli
    printf("Masukkan angka : ");
    scanf("%d", &num);
    if (num > 99) // syarat pertama
    {
        // perintah yang akan dijalankan jika syarat pertama terpenuhi
        num = num - 50;
        if (num >= 75) // syarat kedua
        {
            // perintah yang akan dijalankan jika syarat kedua terpenuhi
            printf("angka sekarang adalah %d\n", num);
            }
        else // jika syarat kedua tidak terpenuhi
        {
            printf("angka sekarang kurang dari 75\n");
        }
        printf("angka awal lebih dari 99\n");
    }
    else // jika syarat pertama tidak terpenuhi
    {
        if (num >= 10) // syarat ketiga
        {
            // perintah yang akan dijalankan jika syarat ketiga terpenuhi
            printf("angka adalah belasan atau puluhan\n");
        }
        else // jika syarat ketiga tidak terpenuhi
        {
        printf("angka adalah satuan\n");
        }
    }
return 0;
}
*/

//latihan soal 1//
int main()
{
    int mb, wb, mf, wf, my, wy;
    int skorb, skorf, skory;

    printf("BIntang : ");
    scanf("%d %d", &mb, &wb);
    printf("Fauzan : ");
    scanf("%d %d", &mf, &wf);
    printf("Yasin : ");
    scanf("%d %d", &my, &wy);

    skorb = mb + (wb * 20);
    skorf = mf + (wf * 20);
    skory = my + (wy * 20);

    if ((skorb < skory) && (skorb < skorf)) 
    {
        printf("Bintang ada di puncak scoreboard dengan score %d", skorb);
    }
    else if ((skorf <skory) && (skorf < skorb))
    {
        printf("Fauzan ada di puncak scoreboard dengan score %d", skorf);
    }
    else if ((skory < skorb) && (skory < skorf))
    {
        printf("Yasin ada di puncak scoreboard dengan score %d", skory);
    }
    else
    {
        printf("Tanding ulang");
    }
    return 0;
}