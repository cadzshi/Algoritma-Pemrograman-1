#include <stdio.h>

//operator assignment
/*
int main()
{
    //deklarasi dan pemasukan nilai dalam satu baris 
    char alphabet = 'a'; //assignment tipe data char menggunakan tanda petik ('')

    float number; //deklarasi variabel  
    number = 6.9; //pemasukan nilai kedalam variabel number

    //dekalrasi beberapa variabel dan pemnasukan nilai sekaligus
    int x, y, z;
    x = y = z = 6; //ketiganya akan berisi 6

    x += y; // x akan berisi nilai 12
    x -= y; // x akan berisi nilai 6
    x *= y; // x akan berisi nilai 36
    x /= y; // x akan berisi nilai 6
    x %= y; // x akan berisi nilai 0
    return 0;
}
*/

//formatted print
/*
int main()
{
    float number = 6.9;
    printf("%f\n", number);

    //menampilkan 2 angka dibelakang koma
    printf("%.2f\n", number);

    //deklarasi variabel
    int angkatan = 2021;
    char kelas = 'C';

    //menampilkan "Saya kelas C angkatan 2021"
    printf("Saya kelas %c angkatan %d\n", kelas, angkatan);

    return 0;
}
*/

/*
//formatted scan
int main()
{
    char alphabet;
    printf("masukkan huruf :");
    scanf(" %c", &alphabet);

    int num1;
    float num2;

    printf("nasukkan integer :");
    scanf("%d", &num1);

    printf("masukkan float :");
    scanf("%f", num2);

    //nampilkan semua variabel
    printf("%c\n%d\n%.2f\n", alphabet, num1, num2);
    return 0;
}
*/

/*
//kalkulator sederhana
int main()
{
    //deklarasi
    int num1, num2;
    int tambah, kurang, kali, bagi, mod, jumKuadrat, kuadratJum;

    //masukan user 
    printf("masukkan angka pertama :");
    scanf("%d", &num1);

    //masukan user
    printf("masukkan angka kedua :");
    scanf("%d", &num2);

    //proses operasi
    tambah = num1 + num2;
    kurang = num1 - num2;
    kali = num1 * num2;
    bagi = num1 / num2;
    mod = num1 % num2;
    jumKuadrat = (num1 * num2) + (num1 * num2);
    kuadratJum = tambah * tambah;

    //menampilkan hasil operasi
    printf("penjumlahan     : %d\n", tambah);
    printf("pengurangan     : %d\n", kurang);
    printf("perkalian       : %d\n", kali);
    printf("pembagian       : %d\n", bagi);
    printf("modulus         : %d\n", mod);
    printf("jumlah kuadrat  : %d\n", jumKuadrat);
    printf("kuadrat jumlah  : %d\n", kuadratJum);

    return 0;
}
*/

// Latihan 1 //
int main()
{
    //deklarasi variabel
    int x1, x2, f, g, m;
    float x3, k, ep;
    g = 10;

    //masukan user
    printf("x1 :");
    scanf("%d", &x1);
    printf("x2 :");
    scanf("%d", &x2);
    printf("m :");
    scanf("%d", &m);

    //menghitung operasi
    x3 = (x2 - x1) * 0.01; // perubahan pegas yang bertambah diubah menjadi meter
    f = m * g; //mencari besar gaya
    k = f / x3; // mencari konstanta
    ep = (k * (x3 * x3)) / 2; // menghitung energi potensialnya

    //menampilkan hasil
    printf("Energi Potensialnya : %.1f Joule\n", ep);
    return 0;
}

/*
// Latihan 2 //
int main()
{
    //deklarasi variabel
    int jmlkaos, jmlorg, masing, sisa;

    //inputan user
    printf("Jumlah Kaos :");
    scanf("%d", &jmlkaos);
    printf("Jumlah orang yang mendapatkan kaos :");
    scanf("%d", &jmlorg);

    //operasi hitung
    masing = jmlkaos / jmlorg;
    sisa = jmlkaos % jmlorg;

    //menampilkan hasil
    printf("Masing-masing : %d\n", masing);
    printf("Sisa kaos : %d\n", sisa);
    return 0;
}
*/