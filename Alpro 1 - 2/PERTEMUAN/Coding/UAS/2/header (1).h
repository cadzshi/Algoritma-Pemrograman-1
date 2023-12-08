/* 
    Saya Achmad Fauzan NIM 2108061 mengerjakan soal Ujian Akhir Semester nomor 2
    dalam mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>

// jujur saya bingung kenapa ini harus dijadiin struct hehe
typedef struct bungkusan
{
    int arr[4];
}
bungkusan;

int spasi;  // jumlah spasi sebelum angka

void print_spasi();         // prosedur untuk print spasi
int cari_terkecil(int[]);   // prosedur untuk mencari nilai terkecil setiap struct
void atur_spasi(int);       // prosedur untuk mengatur pola