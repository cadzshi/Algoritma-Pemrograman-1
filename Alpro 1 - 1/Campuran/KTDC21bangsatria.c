#include <stdio.h>

int main()
{
    // Deklarasi variabel.
    int i, j,
        n, m,
        flag;
    
    // Masukan jumlah kartu pertama.
    scanf("%d", &n);

    // Masukan kartu pertama.
    char arr1[n];
    for(i = 0; i < n; i++)
    {
        scanf(" %c", &arr1[i]);
    }

    // Masukan jumlah kartu kedua.
    scanf("%d", &m);

    // Masukan kartu kedua.
    char arr2[m];
    for(i = 0; i < m; i++)
    {
        scanf(" %c", &arr2[i]);
    }

    if(n == m)
    {
        // Keluaran selang-seling kartu pertama dan kedua.
        for(i = 0; i < n; i++)
        {
            printf("%c %c", arr1[i], arr2[i]);
            if(i != (n - 1))
            {
                printf(" ");
            }
            else
            {
                printf("\n");
            }
        }

        // Pemeriksaan jika kartunya sejenis.
        if(((arr1[0] >= 'A') && (arr1[0] <= 'I')) && ((arr2[0] >= 'A') && (arr2[0] <= 'I')))
        {
            printf("Kartu mereka sejenis,\n");
            printf("Ternyata mereka bersaudara!\n");
        }
        else if(((arr1[0] >= '1') && (arr1[0] <= '9')) && ((arr2[0] >= '1') && (arr2[0] <= '9')))
        {
            printf("Kartu mereka sejenis,\n");
            printf("Ternyata mereka bersaudara!\n");
        }
        // Proses jika kartunya berbeda.
        else
        {
            if((arr1[0] >= 'A') && (arr1[0] <= 'I'))
            {
                for(i = 0; i < n; i++)
                {
                    for(j = 0; j < m; j++)
                    {
                        /* Jika urutan kartu pertama adalah huruf, maka dia dikurangi sebanyak 16
                           (MENGIKUTI KODE ASCII DARI ANGKA).
                           
                           Sebagai contoh, jika masukan 'A', maka nilai yang disimpan dalam variabel char adalah 65.
                           Jika dikurangi 16, maka nilai dalam variabel akan berubah menjadi 49. Jika kita lihat di
                           tabel ASCII, 49 merupakan kode ASCII dari '1'. Pun jika B dikurangi 16, dia akan berubah
                           menjadi '2', dst. dst. */

                        if((arr1[i] - 16) == (arr2[j]))
                        {
                            // Menandai kartu yang sama. 'X' ini hanya representasi jika kartu sudah menemukan kecocokannya,
                            // dia bisa diganti oleh huruf lain selama bukan A-I.
                            arr1[i] = arr2[j] = 'X';
                        }
                    }
                }
            }
            else if((arr1[0] >= '1') && (arr1[0] <= '9'))
            {
                for(i = 0; i < n; i++)
                {
                    for(j = 0; j < m; j++)
                    {
                        // Pun, jika urutan kartu kedua yang huruf, maka kartu kedualah yang dikurangi sebanyak 16,
                        // sementara prosesnya sama seperti yang pertama.
                        if((arr1[i]) == (arr2[j] - 16))
                        {
                            arr1[i] = arr2[j] = 'X';
                        }
                    }
                }
            }

            // Memeriksa apakah ada karakter yang masih tidak ditandai. Jika iya, berarti beri tanda (flag)
            // kalau nilai kartu tidak cocok. 
            flag = 0;
            for(i = 0; i < n; i++)
            {
                if((arr1[i] != 'X') || (arr2[i] != 'X'))
                {
                    flag = 1;
                }
            }

            // Keluaran.
            if(flag == 0)
            {
                printf("Nilai kartu mereka cocok,\n");
                printf("Carla menyukai balik Techi.\n");
            }
            else
            {
                printf("Nilai kartu mereka tidak cocok,\n");
                printf("Carla tidak menyukai Techi.\n");
            }
        }
    }
    else
    {
        if(((arr1[0] >= 'A') && (arr1[0] <= 'I')) && ((arr2[0] >= 'A') && (arr2[0] <= 'I')))
        {
            printf("Kartu mereka sejenis,\n");
            printf("Ternyata mereka bersaudara!\n");
        }
        else if(((arr1[0] >= '1') && (arr1[0] <= '9')) && ((arr2[0] >= '1') && (arr2[0] <= '9')))
        {
            printf("Kartu mereka sejenis,\n");
            printf("Ternyata mereka bersaudara!\n");
        }
        else
        {
            printf("Nilai kartu mereka tidak cocok,\n");
            printf("Carla tidak menyukai Techi.\n");
        }
    }
}