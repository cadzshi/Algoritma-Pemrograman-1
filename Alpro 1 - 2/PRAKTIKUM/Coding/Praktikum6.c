#include <stdio.h>
/*
//contoh kode program while
int main()
{
    int angka[5] = {1, 5, 8, 20, 30};
    int i = 0;
    int ada = 0;
    while (i < 5 && ada == 0)
    {
        if (angka[i] % 8 == 0)
        {
            ada = 1;
        }
        i++;
    }
    if (ada == 1)
    {
        printf("terdapat angka kelipatan 8");
    }
    else
    {
        printf("tidak terdapat angka kelipatan 8");
    }
    return 0;
}
*/
/*
//while ketika jumlah perulangan tak tentu
int main()
{
    int i = 0, n = 0;
    char huruf[100];
    scanf(" %c", &huruf[0]);
    while (huruf[i] != '.' && i < 100)
        {
            i++;
            scanf(" %c", &huruf[i]);
            n++;
        }
    i = 0;
    while (i < n)
    {
        printf("%c", huruf[i]);
        i++;
    }
    return 0;
}
*/
/*
//sama kaya diatas
int main()
{
    printf("==============================\n");
    printf("|           Toko FRA         |\n");
    printf("==============================\n");
    printf("|                            |\n");
    printf("|       --Daftar Harga--     |\n");
    printf("|                            |\n");
    printf("|  (1) Penggaris : Rp. 10000 |\n");
    printf("|  (2) Buku : Rp. 3000       |\n");
    printf("|  (3) Pulpen : Rp. 2000     |\n");
    printf("|  (4) Pensil : Rp. 1500     |\n");
    printf("|  (5) Penghapus : Rp. 1000  |\n");
    printf("|                            |\n");
    printf("==============================\n");

    int bayar = 0;
    int beli;

    printf("Barang yang akan dibeli(masukkan 0 jika selesai) :\n");
    scanf("%d", &beli);

    while (beli != 0)
    {
        if (beli == 1)
        {
            bayar += 10000;
        }
        else if (beli == 2)
        {
            bayar += 3000;
        }
        else if (beli == 3)
        {
            bayar += 2000;
        }
        else if (beli == 4)
        {
            beli += 1500;
        }
        else if (beli == 5)
        {
            beli += 1000;
        }
        scanf("%d", &beli);
    }
    printf("Total Harga yang Harus dibayar : Rp.%d\n", bayar);
    return 0;
}
*/
/*
//array tipe data terstruktur
typedef struct
{
    int nim, usia;
    char kelas;
} data_mhs;
int main()
{
    data_mhs depilkom[3];
    depilkom[0].nim = 2102665;
    depilkom[0].kelas = 'B';
    depilkom[0].usia = 20;
    depilkom[1].nim = 2102671;
    depilkom[1].kelas = 'A';
    depilkom[1].usia = 19;
    depilkom[2].nim = 2107890;
    depilkom[2].kelas = 'C';
    depilkom[2].usia = 21;
    for (int i = 0; i < 3; i++)
    {
        printf("No. Absen : %d\n", i + 1);
        printf("Nim : %d\n", depilkom[i].nim);
        printf("Kelas : %c\n", depilkom[i].kelas);
        printf("Usia : %d\n\n", depilkom[i].usia);
    }
    return 0;
}
*/

//nah ini versi dinamis
typedef struct
{
    int nim, usia;
    char kelas;
} data_mhs;
int main()
{
    int n;
    scanf("%d", &n);
    data_mhs depilkom[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %c %d", &depilkom[i].nim, &depilkom[i].kelas, &depilkom[i].usia);
    }
    for (int i = 0; i < n; i++)
    {
        printf("No. Absen : %d\n", i + 1);
        printf("Nim : %d\n", depilkom[i].nim);
        printf("Kelas : %c\n", depilkom[i].kelas);
        printf("Usia : %d\n\n", depilkom[i].usia);
    }
    return 0;
}
/*
//lat 1
int main()
{
    int n, i, index, flag = 0;
    scanf("%d", &n);
    char arr[n];

    for (i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);
    }

    i = 0;
    while (i < n && flag == 0)
    {
        if (arr[i] == 'a')
        {
            index = i;
            flag = 1;
        }
        i++;
    }
    if (flag == 1)
    {
        printf("Ada huruf a, yang pertama di indeks ke-%d\n", index);
    }
    else
    {
        printf("Tidak ada huruf a");
    }  
    return 0;
}
*/
/*
//lat 2
typedef struct{
    int nim, nilai;
    char kelas;
}data;

int main()
{   
    int n, i, flag = 0;
    scanf("%d", &n);
    data siswa[n];
    
    for(i = 0; i < n; i++)
    {
        scanf("%d %c %d", &siswa[i].nim, &siswa[i].kelas, &siswa[i].nilai);
    }

    for(i = 0; i < n; i++)
    {
        if (siswa[i].nilai == 100)
        {
            flag = 1;
        }   
    }
    if (flag == 1)
    {
        printf("Ada orang istimewa");
    }
    else
    {
        printf("Semua orang biasa");
    }
    return 0;
}
*/