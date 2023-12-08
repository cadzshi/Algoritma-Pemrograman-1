/*   
    Saya Sabila Rosad [2106000] mengerjakan 
    soal tugas praktikum 1 - PP21C1 
    dalam mata kuliah algoritma dan pemrograman 1 
    untuk keberkahanNya maka saya tidak melakukan kecurangan 
    seperti yang telah dispesifikasikan. Aamiin.
*/

//Library yang digunakan.
#include <stdio.h>

//Deklarasi fungsi.
int main(){

//Membuat variabel untuk menampung panjang, lebar, dan tinggi.     
    int panjang;
    int lebar;
    int tinggi;

//Meminta masukan dari user untuk panjang, lebar, dan tinggi.
    scanf("%d", &panjang);
    scanf("%d", &lebar);
    scanf("%d", &tinggi);

//Membuat variabel untuk menampung hasil perhitungan luas ruangan.
    int hasil = 2 * (panjang * tinggi + lebar * tinggi);

//Membuat variabel untuk menampung waktu menunggu. 
    int detik = hasil * 100;
    int jam = detik / 3600;
    int menit = detik / 60;
    menit = menit % 60;
    detik = detik % 60;

//Menampilkan hasil perhitungan luas ruangan.  
    printf("Luas ruang tamu : %d meter persegi\n", hasil);

//Menampilkan hasil perhitungan waktu menunggu.
    printf("Waktu menunggu  : %d jam, %d menit, %d detik\n", jam, menit, detik);
    return 0;
}
