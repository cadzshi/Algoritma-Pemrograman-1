/*
=========================================================================
||   Saya Sabila Rosad dengan NIM 2106000 mengerjakan soal             ||
||   tugas praktikum 1 dalam mata kuliah algoritma dan pemrograman 1   || 
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
    int r, s;               //variabel untuk jari-jari dan panjang garis pelukis
    float phi = 3.14, lp;   //variabel untuk phi dan luas permukaan

    //masukan user
    scanf("%d", &r);      //untuk jari-jari
    scanf("%d", &s);        //untuk panjang garis pelukis

    //menghitung luas permukaan
    lp = (phi * (r * r)) + (phi * r * s);

    //deklarasi variabel untuk waktu pengerjaan
    int detik = lp * 100;
    int jam = detik / 3600;
    int menit = detik / 60;
    menit = menit % 60;
    detik = detik % 60;

    //menampilkan hasil
    printf("Luas Permukaan : %.2f cm persegi\n", lp);
    printf("Waktu Pengerjaan : %d Jam %d Menit %d Detik\n", jam, menit, detik);

    //mengembalikan kode ke 0
    return 0;
}