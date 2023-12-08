#include "header.h"

int main()
{
    int n;

    scanf("%i", &n);        // scan ukuran array

    bungkusan angka[n];     // array yang terdiri dari kumpulan 4 angka

    // scan setiap angka dari setiap struct
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%i", &angka[i].arr[j]);
        }
    }

    // loop setiap struct
    for (int i = 0; i < n; i++)
    {
        // loop setiap angka di dalam struct
        for (int j = 0; j < 4; j++)
        {
            // print spasi sebelum angka
            print_spasi();
            // tentukan index nilai terkecil
            int smallest = cari_terkecil(angka[i].arr);
            // print angka sesuai urutan
            printf("%i\n", angka[i].arr[smallest]);
            // jika ini merupakan angka terakhir dari struct, maka atur spasi
            if (j == 3) atur_spasi(angka[i].arr[smallest]);
            // nilai di index terkecil diubah menjadi sangat besar agar tidak terulang
            angka[i].arr[smallest] = 1000000;
        }
    }
    
    return 0;
    // ibu kok saya merasa soal2nya kurang menuntut kita buat pake prosedur/fungsi ya
    // buktinya saya upload pertama ga pake prosedur/fungsi sama sekali dan tetep ijo
    // kalo di tmd itu susah banget ngerjainnya kalo kita ga pake prosedur/fungsi
    // sedangkan di kuis/uas gapake prosedur/fungsi juga gaada bedanya
}