/*
=========================================================================
||   Saya Sabila Rosad dengan NIM 2106000 mengerjakan soal             ||
||   EVALUASI 1 dalam mata kuliah algoritma dan pemrograman 1          || 
||   untuk keberkahanNya maka saya tidak melakukan kecurangan          || 
||   seperti yang telah dispesifikasikan. Aamiin.                      ||
=========================================================================
*/
//library yang digunakan
#include <stdio.h>
//deklarasi fungsi
int main()
{
    
    int n, i, j, k, l, jmlvokal = 0;    //deklarasi variable
    
    scanf("%d", &n);                    //inputan user
    char kata[n];                       //deklarasi array
    int mid = n/2;                      //untuk penanda 
    //meminta masukan user sebanyak n
    for (i = 0; i < n;i++)
    {
        scanf(" %c", &kata[i]);
    }

    //untuk mengecek ada berapa huruf vokal
    for(i = 0; i < n; i++)
    {
        if ((kata[i] == 'a' || kata[i] == 'A') || (kata[i] == 'i' || kata[i] == 'I') ||
            (kata[i] == 'u' || kata[i] == 'U') || (kata[i] == 'e' || kata[i] == 'E') ||
            (kata[i] == 'o' || kata[i] == 'O'))
        {
            jmlvokal++;
        }
    }
    //for untuk frame atas
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < jmlvokal * 15; j++)
        {
            printf("-");
        }
        printf("\n");
    }
    //for untuk area gunung
    for (i = 0; i < jmlvokal; i++)  
    {
        for (j = 1; j < jmlvokal - i; j++) 
        {
            for (k = 0; k < jmlvokal; k++)      //spasi awal
            {
                printf(" ");
            }
        }
        //gunung 1
        for (j = 0; j <= i; j++)
        {
            for (k = 0; k < jmlvokal; k++)
            {
                for (l = 0; l < 1; l++)
                {
                    if(k == mid)
                    {
                        printf("%c", kata[0]);
                    }
                    else
                    {
                        printf("%c", kata[k]);
                    }
                }
            }
            
        }
        for (j = 0; j < i; j++)
        {
            for (k = 0; k < jmlvokal; k++)
            {
                for (l = 0; l < 1; l++)
                {
                    if(k == mid)
                    {
                        printf("%c", kata[0]);
                    }
                    else
                    {
                        printf("%c", kata[k]);
                    }
                }
            }
        }
        //spasi setelah gunung
        for (j = 1; j < jmlvokal - i; j++) 
        {
            for (k = 0; k < jmlvokal; k++)
            {
                printf(" ");
            }
        }
        for (j = 1; j < jmlvokal - i; j++) 
        {
            for (k = 0; k < jmlvokal; k++)
            {
                printf(" ");
            }
        }
        //gunung 2
        for (j = 0; j < i + 1; j++)
        {
            for (k = jmlvokal - 1; k < jmlvokal * 2 - 1; k++)
            {
                for (l = 0; l < 1; l++)
                {
                    if(k < n)
                    {
                        printf("%c", kata[k]);
                    }
                    else
                    {
                        printf("%c", kata[0]);
                    }
                }
            }
        }
        for (j = 0; j < i; j++)
        {
            for (k = jmlvokal - 1; k < jmlvokal * 2 - 1; k++)
            {
                for (l = 0; l < 1; l++)
                {
                    if(k < n)
                    {
                        printf("%c", kata[k]);
                    }
                    else
                    {
                        printf("%c", kata[0]);
                    }
                }
            }
        }
        printf("\n");
    }
    //for untuk area jalan dan sekitarnya
    for (i = 0; i < jmlvokal * 2; i++)
    {
        for (j = 0; j < jmlvokal * jmlvokal - jmlvokal; j++)
        {
            printf(" ");
        }
        for(j = i * 2;j < jmlvokal * jmlvokal;j++)
        {
            printf(" ");
        }
        for(j = 0;j <= i;j++)       //ini jalanannya
        {
            printf("*");
        }
        for(j = 0;j <= i;j++)
        {
            printf(" ");
        }
        for (j = 0; j < jmlvokal * 4; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    //frame bawah
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < jmlvokal * 15; j++)
        {
            printf("-");
        }
        printf("\n");
    }
    //harga lukisan sebanyak huruf vokal
    printf("Harga Lukisan : %d Miliar\n", jmlvokal);
    //mengembalikan kode ke 0
    return 0;
}
//bendera putih berkibar
