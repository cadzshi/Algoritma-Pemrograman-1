/*
=========================================================================
||   Saya Sabila Rosad dengan NIM 2106000 mengerjakan soal             ||
||   TP 9 dalam mata kuliah algoritma dan pemrograman 1                || 
||   untuk keberkahanNya maka saya tidak melakukan kecurangan          || 
||   seperti yang telah dispesifikasikan. Aamiin.                      ||
=========================================================================
*/
#include "header.h"

//deklarasi fungsi
int main()
{
    //deklarasi bungkusan
    pokemon p1;
    int n;
    //panggil prosedur
    scanPokemon(&p1);
    scanAction(&p1);
    battlePokemon(&p1, n);
    printPokemon(&p1);
    //mengembalikan kode ke 0
    return 0;
}