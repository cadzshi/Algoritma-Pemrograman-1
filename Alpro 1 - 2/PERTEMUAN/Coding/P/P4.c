#include<stdio.h>
/*
//contoh soal 1
typedef struct
{
    int panjang, lebar, tinggi;
    int luasPermukaan, volume;
}data;

int main()
{
    data balok;

    printf("Masukkan panjang balok: ");
    scanf("%d", &balok.panjang);
    printf("Masukkan lebar balok: ");
    scanf("%d", &balok.lebar);
    printf("Masukkan tinggi balok: ");
    scanf("%d", &balok.tinggi);

    printf("Volume balok tersebut adalah %d\n", balok.volume = balok.panjang * balok.lebar * balok.tinggi);
    printf("Luas Permukaan balok tersebut adalah %d\n", balok.luasPermukaan = 2 * (balok.panjang * balok.lebar + balok.panjang * balok.tinggi + balok.lebar * balok.tinggi));
    
    return 0;
}
*/
/*
//contoh soal 2
typedef struct
{
    int pembilang, penyebut;
}pecahan;

int main()
{
    pecahan p1, p2, p3;

    printf("masukkan pembilang1: ");
    scanf("%d", &p1.pembilang);
    printf("masukkan penyebut1: ");
    scanf("%d", &p1.penyebut);
    printf("masukkan pembilang2: ");
    scanf("%d", &p2.pembilang);
    printf("masukkan penyebut2: ");
    scanf("%d", &p2.penyebut);

    p3.pembilang = p1.pembilang * p2.pembilang;
    p3.penyebut = p1.penyebut * p2.penyebut;

    printf("hasil perkalian pecahan tersebut adalah %d | %d", p3.pembilang, p3.penyebut);

    return 0;
}
*/
/*
 //mari mencoba 1
typedef struct{
    int nume;
    int deno;
}pecahan;

int main(){
    pecahan p1, p2, p3, p4;

    printf("masukkan angka pembilang penyebut: ");
    scanf("%d %d", &p1.nume, &p1.deno);
    printf("masukkan angka pembilang penyebut: ");
    scanf("%d %d", &p2.nume, &p2.deno);

    p3.deno = p1.deno * p2.deno;
    p3.nume = (p3.deno / p1.deno) * p1.nume +  (p3.deno / p2.deno) * p2.nume; 

    printf("hasil pertambahan pecahan adalah pembilang: %d penyebut: %d\n", p3.nume, p3.deno);
*/
/*
   //mari mencoba 2
typedef struct{
    int nim, nilai;
   }mahasiswa;

int main(){
    mahasiswa mhs1, mhs2, mhs3;

    printf("NIM 1: ");
    scanf("%d", &mhs1.nim);
    printf("Nilai 1: ");
    scanf("%d", &mhs1.nilai);
    printf("NIM 2: ");
    scanf("%d", &mhs2.nim);
    printf("Nilai 2: ");
    scanf("%d", &mhs2.nilai);
    printf("NIM 3: ");
    scanf("%d", &mhs3.nim);
    printf("Nilai 3: ");
    scanf("%d", &mhs3.nilai);

    if(mhs1.nilai > mhs2.nilai && mhs1.nilai > mhs3.nilai)
    {
        printf("nilai mahasiswa 1 paling besar: %d NIM: %d\n", mhs1.nilai, mhs1.nim);
    }
    else if(mhs2.nilai > mhs1.nilai && mhs2.nilai > mhs3.nilai)
    {
        printf("nilai mahasiswa 2 paling besar: %d NIM: %d\n", mhs2.nilai, mhs2.nim);
    }
    else
    {
        printf("nilai mahasiswa 3 paling besar: %d NIM: %d\n", mhs3.nilai, mhs3.nim);
    }
    return 0;
}
*/