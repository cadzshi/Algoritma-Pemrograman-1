/*
=========================================================================
||   Saya Sabila Rosad dengan NIM 2106000 mengerjakan soal             ||
||   eval dalam mata kuliah algoritma dan pemrograman 1           || 
||   untuk keberkahanNya maka saya tidak melakukan kecurangan          || 
||   seperti yang telah dispesifikasikan. Aamiin.                      ||
=========================================================================
*/
#include <stdio.h>
#include <string.h>

//deklarasi variabel global
char ariasonnet[201][201];
char ariasonnetbaru[201][201];
char ariasonnet1[201][201];
char ariasonnet1baru[201][201];
char canon[201][201];
int jumlahanagram;
int jumlah[100];
int panjangkata[201];
int batas[201];
int status[201];
int jmlp[100];

//prosedur
void pisahkalimat(int n, char kalimat[201][201]);
void hapus(int n);
void sortingkalimat(int n);
void cekanagram(int n);
void cekpalindrom(int n);
void yesno (int n);


