/*
=========================================================================
||   Saya Sabila Rosad dengan NIM 2106000 mengerjakan soal             ||
||   Kuis no 1 dalam mata kuliah algoritma dan pemrograman 1           || 
||   untuk keberkahanNya maka saya tidak melakukan kecurangan          || 
||   seperti yang telah dispesifikasikan. Aamiin.                      ||
=========================================================================
*/
//library yang digunakan
#include <stdio.h>
#include <string.h>
//deklarasi bungkusan
typedef struct
{
    int s1, s2, s3; //variabel untuk menampung sisi
    int resolusi;   //variabel untuk mencari resolusi
} data;
//deklarasi variabel dan fungsi
int n;
int resolusiTerbesar (data x[]);