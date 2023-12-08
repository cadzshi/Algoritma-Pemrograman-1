/*
=========================================================================
||   Saya Sabila Rosad NIM 2106000 mengerjakan soal ORAPDM22           ||
||   (tugas praktikum 3) dalam mata kuliah algoritma dan pemrograman 1 || 
||   untuk keberkahanNya maka saya tidak melakukan kecurangan          || 
||   seperti yang telah dispesifikasikan. Aamiin.                      ||
=========================================================================
*/

//Library yang digunakan
#include <stdio.h>

//membuat bungkusan
typedef struct
{
    int nim, totalSkor, nilaiPrestasi, nilaiNgulang, nilaiSbd, nilaiLogif;  //variabel untuk menampung nim, dan nilai-nilai
    char gradesbd, gradelogif, prestasi, ngulangMatkul, inisial;            //variabel untuk menampung grade nilai, dll.
}persyaratan;       //nah ini nama bungkusannya

//deklarasi fungsi
int main()
{
    //deklarasi variabel
    persyaratan i1, i2, i3; //variabel untuk menampung inputan mahasiswa pertama sampe ketiga

    //masukkan inputan user
    scanf(" %c", &i1.inisial);                      //input inisial
    scanf("%d", &i1.nim);                           //input nim
    scanf(" %c %c", &i1.gradesbd, &i1.gradelogif);  //input grade matkul
    scanf(" %c", &i1.prestasi);                     //input afkh memiliki pretasi
    scanf(" %c", &i1.ngulangMatkul);                //input afkh pernah mengulang matkul

    scanf(" %c", &i2.inisial);                      //ini sampe bawah samaaaa yhhhh
    scanf("%d", &i2.nim);
    scanf(" %c %c", &i2.gradesbd, &i2.gradelogif);
    scanf(" %c", &i2.prestasi);
    scanf(" %c", &i2.ngulangMatkul);

    scanf(" %c", &i3.inisial);
    scanf("%d", &i3.nim);
    scanf(" %c %c", &i3.gradesbd, &i3.gradelogif);
    scanf(" %c", &i3.prestasi);
    scanf(" %c", &i3.ngulangMatkul);                //sampe sini

    //switch ini buat menentukan nilai matkul sbd
    switch (i1.gradesbd)    //ngecek nilai sbd mahasiswa pertama
    {
    case 'A':               //kalo A
        i1.nilaiSbd = 100;  //maka nilainya 100
        break;
    case 'B':               //kalo B
        i1.nilaiSbd = 75;   //maka nilainya 75
        break;
    case 'C':               //kalo C
        i1.nilaiSbd = 50;   //maka nilainya 50
        break;
    }
    //kalo switch ini buat menentukan nilai matkul logif
    switch (i1.gradelogif)      //ngecek nilai logif mahasiswa pertama
    {
    case 'A':                   //kalo A
        i1.nilaiLogif = 100;    //maka nilainya 100
        break;
    case 'B':                   //kalo B
        i1.nilaiLogif = 75;     //maka nilainya 75
        break;
    case 'C':                   //kalo C
        i1.nilaiLogif = 50;     //maka nilainya 50
        break;
    }
    //ini sama tapi buat mahasiswa kedua
    switch (i2.gradesbd)
    {
    case 'A':
        i2.nilaiSbd = 100;
        break;
    case 'B':
        i2.nilaiSbd = 75;
        break;
    case 'C':
        i2.nilaiSbd = 50;
        break;
    }
    //ini sama tapi buat mahasiswa kedua
    switch (i2.gradelogif)
    {
    case 'A':
        i2.nilaiLogif = 100;
        break;
    case 'B':
        i2.nilaiLogif = 75;
        break;
    case 'C':
        i2.nilaiLogif = 50;
        break;
    }
    //ini sama tapi buat mahasiswa ketigaa
    switch (i3.gradesbd)
    {
    case 'A':
        i3.nilaiSbd = 100;
        break;
    case 'B':
        i3.nilaiSbd = 75;
        break;
    case 'C':
        i3.nilaiSbd = 50;
        break;
    }
    //ini sama tapi buat mahasiswa ketiga
    switch (i3.gradelogif)
    {
    case 'A':
        i3.nilaiLogif = 100;
        break;
    case 'B':
        i3.nilaiLogif = 75;
        break;
    case 'C':
        i3.nilaiLogif = 50;
        break;
    }

    //ini buat nentuin apakah mahasiswa memiliki prestasi atau tidak, kalo inputannya "y" maka nilai pretasi menjadi 20
    ((i1.prestasi == 'y')) ?  (i1.nilaiPrestasi = 20) : (i1.nilaiPrestasi = 0);     //ini buat mahasiswa pertama
    ((i2.prestasi == 'y')) ?  (i2.nilaiPrestasi = 20) : (i2.nilaiPrestasi = 0);     //kalo ini buat mahasiswa kedua
    ((i3.prestasi == 'y')) ?  (i3.nilaiPrestasi = 20) : (i3.nilaiPrestasi = 0);     //sedangkan ini buat mahasiswa terakhir

    //ini buat nentuin apakah mahasiswa pernah mengulang matkul, kalo inputannya "y" maka nilai mengulang menjadi 5
    ((i1.ngulangMatkul == 'y')) ?  (i1.nilaiNgulang = 5) : (i1.nilaiNgulang = 0);   //ini buat mahasiswa pertama
    ((i2.ngulangMatkul == 'y')) ?  (i2.nilaiNgulang = 5) : (i2.nilaiNgulang = 0);   //kalo ini buat mahasiswa kedua
    ((i3.ngulangMatkul == 'y')) ?  (i3.nilaiNgulang = 5) : (i3.nilaiNgulang = 0);   //sedangkan ini buat mahasiswa terakhir
    
    //ini buat ngitung total skor mahasiswa tersebut
    i1.totalSkor = i1.nilaiSbd + i1.nilaiLogif + i1.nilaiPrestasi - i1.nilaiNgulang;    //ini buat mahasiswa pertama
    i2.totalSkor = i2.nilaiSbd + i2.nilaiLogif + i2.nilaiPrestasi - i2.nilaiNgulang;    //kalo ini buat mahasiswa kedua
    i3.totalSkor = i3.nilaiSbd + i3.nilaiLogif + i3.nilaiPrestasi - i3.nilaiNgulang;    //sedangkan ini buat mahasiswa terakhir

    //syarat-syarat jadi asprak
    //ini kalo mahasiswa 1 mau jadi asprak
    if ((i1.totalSkor > i2.totalSkor && i1.totalSkor > i3.totalSkor) ||                                     //skor mahasiswa 1 lebih dari keduanya atau
        ((i1.totalSkor == i2.totalSkor && i1.totalSkor > i3.totalSkor && i2.totalSkor > i3.totalSkor)) ||   //skor mahasiswa 1 sama dengan mahasiswa 2 dan skor mahasiswa 3 lebih kecil dari keduanya atau
        ((i1.totalSkor == i3.totalSkor && i1.totalSkor > i2.totalSkor && i3.totalSkor > i2.totalSkor)) ||   //skor mahasiswa 1 sama dengan mahasiswa 3 dan skor mahasiswa 3 lebih kecil dari keduanya atau
        ((i1.totalSkor == i2.totalSkor && i1.totalSkor == i3.totalSkor)))                                   //skor mahasiswa 1 sama dengan keduanya
    {
        //karna inputan acak maka
        if (i1.inisial == 'Y')  //jika mahasiswa 1 berinisial "Y", maka
        {
            //congrats yasin
            printf("Selamat Yasin dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", i1.nim, i1.totalSkor);
        }
        else if (i1.inisial == 'F') //jika mahasiswa 1 berinisial "F", maka
        {
            //congrats fauzan
            printf("Selamat Fauzan dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", i1.nim, i1.totalSkor);
        }
        else if (i1.inisial == 'B') //ika mahasiswa 1 berinisial "B", maka
        {
            //congrats bintang
            printf("Selamat Bintang dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", i1.nim, i1.totalSkor);
        }
    }
    //kalo bukan mahasiswa 1 ya berarti mahasiswa 2
    else if ((i2.totalSkor > i1.totalSkor) && (i2.totalSkor > i3.totalSkor) ||                                  //skor mahasiswa 2 lebih dari keduanya atau
            ((i2.totalSkor == i3.totalSkor && i2.totalSkor > i1.totalSkor && i2.totalSkor > i3.totalSkor)))     //skor mahasiswa 2 sama dengan mahasiswa 3 dan skor mahasiswa 1 lebih kecil dari keduanya
    {
        //karna inputan acak maka
        if (i2.inisial == 'Y')  //jika mahasiswa 2 berinisial "Y", maka
        {
            //congrats yasin
            printf("Selamat Yasin dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", i2.nim, i2.totalSkor);
        }
        else if (i2.inisial == 'F') //jika mahasiswa 2 berinisial "F", maka
        {
            //congrats fauzan
            printf("Selamat Fauzan dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", i2.nim, i2.totalSkor);
        }
        else if (i2.inisial == 'B') //jika mahasiswa 2 berinisial "B", maka
        {
            //congrats bintang
            printf("Selamat Bintang dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", i2.nim, i2.totalSkor);
        }
    }
    //kalo bukan 1 sama 2 ya mahasiswa 3
    else if (i3.totalSkor > i2.totalSkor && i3.totalSkor > i1.totalSkor)    //skor mahasiswa 3 lebih dari keduanya
    {
        //karna inputan acak maka
        if (i3.inisial == 'Y')  //jika mahasiswa 3 berinisial "Y", maka
        {
            //congrats yasin
            printf("Selamat Yasin dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", i3.nim, i3.totalSkor);
        }
        else if (i3.inisial == 'F') //jika mahasiswa 3 berinisial "F", maka
        {
            //congrats fauzan
            printf("Selamat Fauzan dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", i3.nim, i3.totalSkor);
        }
        else if (i3.inisial == 'B') //jika mahasiswa 3 berinisial "B", maka
        {
            //congrats bintang
            printf("Selamat Bintang dengan NIM %d anda terpilih untuk menjadi Asisten Praktikum Mata Kuliah Data Mining dengan total skor sebesar %d.\n", i3.nim, i3.totalSkor);
        }
    }
    //mengembalikan kode ke 0
    return 0;
}

    