/*
=========================================================================
||   Saya Sabila Rosad dengan NIM 2106000 mengerjakan soal             ||
||   tugas praktikum 6 dalam mata kuliah algoritma dan pemrograman 1   || 
||   untuk keberkahanNya maka saya tidak melakukan kecurangan          || 
||   seperti yang telah dispesifikasikan. Aamiin.                      ||
=========================================================================
*/
//library yang digunakan
#include <stdio.h>

//bungkusan
typedef struct {
    char nama[100];                                         //variabel untuk nama klien
    char kode[100];                                          //variabel untuk kode klien
    int kodenew[100];                                       //variabel untuk kode klien baru
    int biner[100];                                         //variabel untuk biner
    int jmlnama, jmlkode, hasil, hasilbiner, hasilbiner2;   //variabel jumlah nama, kode dan konversi biner
} data; //nama bungkusan

//deklarasi fungsi
int main()
{
    //deklarasi variabel
    int n, i, j, k;     //variabel untuk banyak klien dan iterator
    

    scanf("%d", &n);    //inputan user meminta banyak klien
    data client[n];   //deklarasi bungkusan
    //proses input nama dan kode klien
    i = 0;  //inisialisasi
    while (i < n)  //kondisi while i < n
    {   
        j = 0, client[i].jmlnama = 0;   //inisialisasi
        scanf(" %c", &client[i].nama[0]);   //scan nama client indeks ke 0
        
        while ((client[i].nama[j] != ';') && (j < 100)) //scan nama client indeks ke 1 berenti jika bertemu ';'
        {
            j++;    //iterator
            scanf(" %c", &client[i].nama[j]);
            client[i].jmlnama++;        //untuk penanda jumlah nama klien
            
        }

        k = 0, client[i].jmlkode = 0;   //inisialisasi
        scanf(" %c", &client[i].kode[0]);   //scan kode client indeks ke 0
        
        while ((client[i].kode[k] != '.') && (k < 100)) //scan kode client indeks ke 1 berenti jika bertemu ';'
        {
            k++;    //iterator
            scanf(" %c", &client[i].kode[k]);
            client[i].jmlkode++;    //untuk penanda jumlah kode klien
           
        }
        i++;    //iterator
    }

    //proses konversi char ke desimal 
    i = 0;  //inisialisasi
    while (i < n)   //kondisi while i < n 
    {
        k = 0;   //inisialisasi
        //proses huruf mana saja yg sesuai dengan kode klien
        while (k < client[i].jmlkode)   //kondisi while k < jumlah kode
        {
            client[i].kodenew[k] = client[i].kode[k] - '0'; 
            k++;    //iterator
        }
        j = 0, client[i].hasil = 0;    //inisialisasi
        //proses penjumlahan ascii
        while (j < client[i].jmlkode)   //kondisi while k < jumlah kode
        {
            client[i].hasil += client[i].nama[client[i].kodenew[j]];
            j++;    //iterator
        }
        i++;    //iterator
    }

    //output biner awal
    printf("Biner awal\n");
    i = 0;  //inisialisasi
    //proses perhitungan biner awal
    while (i < n)   //kondisi while i < n
    {
        j = 0;  //inisialisasi
        client[i].hasilbiner = client[i].hasil;

        while (client[i].hasilbiner > 0)    //perhitungan biner awal
        {
            client[i].biner[j] = client[i].hasilbiner % 2;
            client[i].hasilbiner /= 2;
            j++;    
        }
        if (client[i].hasil == 0)
        {
            j++;
        }
        j -= 1;
        while (j >= 0)
        {
            printf("%d", client[i].biner[j]);   //print hasil biner setiap klien
            j--;
        }
        i++;
        printf("\n");
    }

    //output kode rahasia
    printf("\nKode Rahasia\n");
    i = 0;  //inisialisasi
    //proses kode baru
    while (i < n)   //kondisi while i < n
    {
        //print kode baru, huruf awal-huruf akhir-biner
        printf("%c%c-%d-", client[i].nama[0], client[i].nama[client[i].jmlnama - 1], client[i].hasil);
        
        j = 0;  //inisialisasi
        client[i].hasilbiner2 = client[i].hasil;

        while (client[i].hasilbiner2 > 0)   //perhitungan biner
        {
            client[i].biner[j] = client[i].hasilbiner2 % 2;
            client[i].hasilbiner2 /= 2;
            j++;
        }
        
        if (client[i].hasil == 0)
        {
            j++;
        }
        j -= 1;
        k = 1;
        if (client[i].kode[0] == '.')   //persyaratan pertama jika indeks 0 == '.' alias gada kode
        {
            printf("00-00-00"); //maka print 6 digit 0 
        }
        
        while (j > 0)   //persyaratan kedua jika indeks ada kodenya
        {
            if (k <= 6)
            {
                printf("%d", client[i].biner[j]);   //print biner 
                if (k % 2 == 0 && k <= 5)   //setiap 2 angka di pisah dengan '-'
                {
                    printf("-");
                }
            }
            j--;
            k++;
        }
        printf("\n");
        i++;
    }
    
    //mengembalikan kode ke 0
    return 0;
}