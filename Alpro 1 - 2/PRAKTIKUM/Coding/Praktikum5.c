#include <stdio.h>
/*
int main()
{
    //inisialisasi array
    int array[5]; // tanpa inisialisasi
    // isi array | acak | acak | acak | acak | acak |
 
    int array[5] = {};
    // isi array | 0 | 0 | 0 | 0 | 0 |
 
    int array[5] = {3};
    // isi array | 3 | 0 | 0 | 0 | 0 |
 
    int array[5] = {3, 4};
    // isi array | 3 | 4 | 0 | 0 | 0 |
 
    int array[5] = {2, 1, 8};
    // isi array | 2 | 1 | 8 | 0 | 0 |
 
    int array[5] = {1, 9, 1, 100};
    // isi array | 1 | 9 | 1 | 100 | 0 |
 
    int array[5] = {80, 30, 60, 200, 300};
    // isi array | 80 | 30 | 60 | 200 | 300 |
 
    return 0;
}
*/
/*
int main()
{
    //akses array
    char array[5];
 
    // akses array index ke-0
    array[0] = 'A';
    printf("%c\n", array[0]);
 
 
    // akses array index ke-1
    array[1] = 'B';
    printf("%c\n", array[1]);

    return 0;
}
*/
/*
int main()
{
    //implementasi array pada for
    int n;
    float sum = 0;
 
    scanf("%d", &n);
    int arr[n]; // <-- alokasi dinamis
 
    // isi array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    // jumlahkan nilai semua elemen array
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
 
    printf("Nilai rata-rata: %.2f\n", sum / n);

    return 0;
}
*/
/*
int main()
{
    //mengisi array sampai nilai n
    // Deklarasi variabel untuk alokasi array
    int n;
 
    // Input nilai ke variabel n
    printf("Masukkan alokasi array : ");
    scanf("%d", &n);
 
    // Deklarasi array sebanyak n elemen
    int arr[n];
 
    // Memasukkan nilai ke array arr
    for (int i = 0; i < n; i++)
    {
        arr[i] = (i + 1);
    }
 
    // Menampilkan nilai array arr
    for (int i = 0; i < n; i++)
    {
        printf("Nilai array indeks ke-%d : %d\n", i, arr[i]);
    }
    return 0;
}
*/
/*
//mencari nilai terkecil dan terbesar suatu array 
int main()
{
    // Deklarasi variabel
    int n;        // <-- alokasi array
    int min, max; // <-- penampung min dan max
 
    // Input alokasi array
    printf("Masukkan alokasi array: ");
    scanf("%d", &n);
 
    // Deklarasi array dengan n elemen
    int arr[n];
 
    // proses input ke dalam array arr
    printf("Masukkan nilai sebanyak %d :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    // proses pencarian min dan max
    min = 999;
    max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
 
    // tampilkan min dan max
    printf("Nilai terkecil : %d\n", min);
    printf("Nilai terbesar : %d\n", max);
 
    return 0;
}
*/
/*
//soal 1
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int temp;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Nilai Maksimum Kedua : %d\n", a[1]);
    printf("Nilai Minimum Kedua : %d\n", a[n - 2]);
    
    return 0;
}
*/
/*
//soal 2
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ind1, ind2;
    int min = a[0];
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            ind1 = i;
        }

        if (a[i] > max)
        {
            max = a[i];
            ind2 = i;
        }
    }
    printf("nilai indeks minimum: %d\n", ind1);
    printf("nilai indeks maximum: %d\n", ind2);
    return 0;
}
*/

//soal 3
int main()
{
    int n;
    scanf("%d", &n);
    char a[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
    }

    int swap1, swap2, temp;
    scanf("%d\n%d", &swap1, &swap2);

    temp = a[swap1];
    a[swap1] = a[swap2];
    a[swap2] = temp;

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
    return 0;
}

