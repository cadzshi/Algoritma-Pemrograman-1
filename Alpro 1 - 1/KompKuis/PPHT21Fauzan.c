/* 
    Saya Achmad Fauzan NIM 2108061 mengerjakan soal evaluasi 1 dalam mata
    kuliah algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// waktu udah sedikit lagi, baru inget belum pake komen :v
#include <stdio.h>

int main()
{
    int m;                          // panjang array
    int n;                          // ukuran pola
    int i, j;                       // iterator for loop
    int counter1, counter2;         // penghitung index array

    scanf("%i", &m);                // pengen nangis T^T

    char array[m];                  // ini kok error warning terus padahal pas di run bisa AAAAAAAA

    for (i = 0; i < m; i++)
    {
        scanf(" %c", &array[i]);    // scan setiap anggota array, gaboleh pake string hmmmm
    }

    scanf("%i", &n);                // pengen tiduran di perut kucing

    // pertama kita gambar bagian atas dulu
    for (i = 0; i <= n / 10; i++)                               // setiap kelipatan sepuluh baris nambah satu
    {
        counter1 = 0;                                           // setiap ganti line counter index di reset
        counter2 = 0;
        for (j = i; j <= n / 10; j++)
        {
            printf(" ");                                        // inituh segitiga kebalik
        }
        for (j = 0; j <= 2 * i + n - 3 - (n / 10) * 2; j++)     // kondisinya bisa disederhanain kan? wkwkwk
        {
            printf("%c", array[0 + counter1]);                  // print array bagian kiri, mulai dari 0 sampe setengah array
            counter1++;                                         // pengen ketemu pinguin
            counter1 = (counter1 >= (m / 2)) ? 0 : counter1;    // jika nilai counter sudah lebih dari ketentuan, balikin ke 0
        }
        for (j = 2 * i; j < 2 * (n / 10 + 1) + 1; j++)
        {
            printf(" ");                                        // trapesium terbalik, jadi mangkok ya?
        }
        for (j = 0; j <= 2 * i + n - 3 - (n / 10) * 2; j++)     // kondisinya copas yang diatas
        {
            printf("%c", array[(m / 2) + counter2]);            // print array bagian kanan, mulai dari setengah sampai akhir array
            counter2++;
            counter2 = ((m / 2) + counter2 >= m) ? 0 : counter2;// jika nilai counter sudah lebih dari ketentuan, balikin ke 0
        }
        printf("\n");                                           // harus print new line biar kodok ga sedih
    }
    
    // selanjutnya kita gambar bagian tengah, cuma sebaris
    counter1 = 0;                                               // karena ini dihitung ganti line, jadi counter harus di reset
    counter2 = 0;
    for (i = 0; i < n; i++)
    {
        printf("%c", array[0 + counter1]);                      // sama aja ini copas
        counter1++;
        counter1 = (counter1 >= (m / 2)) ? 0 : counter1;
    }
    printf(" ");                                                // harus ada spasi agar mereka tidak pernah bisa bertemu mwahahaha
    for (i = 0; i < n; i++)
    {
        printf("%c", array[(m / 2) + counter2]);                // langit bisakah kau turunkan uang dan kucing
        counter2++;
        counter2 = ((m / 2) + counter2 >= m) ? 0 : counter2;    // aku ingin bahagia tanpa coding
    }
    printf("\n");

    int length1 = n - 1;                                        // variabel buat ngukur panjang bagian pertama
    int length2 = n;                                            // blah blah blah bagian kedua

    // terus gambar bagian bawah, dimana hati techi terbelah dua
    for (i = 0; i < n; i++)
    {
        counter1 = 0;                                           // refreshing enaknya ngapain ya?
        counter2 = 0;                                           // astagfirullah besok lomba cp :((
        for (j = 0; j < i; j++)
        {
            printf(" ");                                        // triangle biar nanti pattern nya tilted
        }
        for (j = 0; j < length1; j++)
        {
            printf("%c", array[0 + counter1]);                  // dear penemu ctrl + c dan ctrl + v
            counter1++;
            counter1 = (counter1 >= (m / 2)) ? 0 : counter1;    // anda adalah pahlawan yang sesungguhnya
        }
        if (n % 2 == 0 && i == n - 1)
        {
                            // ini awalnya break, tapi katanya nilai bakal di diskon kalo ga diganti
        }
        else
        {
            printf("  ");   // solusi cepat biar aman
        }
        for (j = 0; j < length2; j++)
        {
            printf("%c", array[(m / 2) + counter2]);            // ini apa hayooo?
            counter2++;
            counter2 = ((m / 2) + counter2 >= m) ? 0 : counter2;// saya juga lupa udah capek
        }
        printf("\n");
        length1 -= (i % 2 == 0) ? 0 : 2;                        // setiap 2 line, panjang bagian berkurang 2
        length2 -= (i % 2 == 0) ? 2 : 0;                        // bagian kiri dan kanan selang-seling dikurangnya
    }

    // bagian terakhir, AKHIRNYAAAAA AAARHKHDSDFKUYQOIWYKNADSFF
    for (i = 0; i < n; i++)
    {
        printf(" ");
    }
    printf("%c\n", array[(n % 2 == 0) ? 0 : (m / 2)]);          // kalo n genap print anggota pertama, kalo ganjil print yang di tengah

    return 0;   // ya sama-sama
}