/*
=========================================================================
||   Saya Sabila Rosad dengan NIM 2106000 mengerjakan soal             ||
||   tugas praktikum 7 dalam mata kuliah algoritma dan pemrograman 1   || 
||   untuk keberkahanNya maka saya tidak melakukan kecurangan          || 
||   seperti yang telah dispesifikasikan. Aamiin.                      ||
=========================================================================
*/
//library yang digunakan
#include <stdio.h>
#include <string.h>

//deklarasi fungsi
int main()
{
    //deklarasi variabel
    char word[100];     //variabel masukan user
    char before[100];   //variabel kata utama 
    char key[100];      //variabel setelah kata utama
    char new[100];      //variabel kata yang diacak
    int i, j, k, l, flag, g;    //variabel penanda dan iterator

    //inputan user
    scanf("%s", &word); 

    i = 0;  //inisialisasi
    while (word[i] != '$' && word[i] != '\0')  //ini utama, sebelum '$'
    {
        before[i] = word[i];    //dimasukkan ke variabel before
        i++;    //iterator
    }
    before[i] = '\0';
    j = 0;  //inisialisasi
    while (j < strlen(word))    //ini setelah '$'
    {
        key[j] = word[i + 1];   //dimasukkan ke variabel key
        i++;    //iterator
        j++;    //iterator
    }
    before[j] = '\0';
    //panjang string kata, kunci, dan kata yang terhapus 
    int paKun, paKat, paHap;
    paKun = strlen(key);    //panjang kunci (setelah $)
    paKat = strlen(before); //panjang kata  (sebelum $)
    
    //proses penghapusan
    i = 0;  //inisialisasi
    do
    {
        flag = i;   //variabel flag penanda cek indeks ke berapa
        j = 0;      //inisialisasi
        while (j < paKun)
        {
            if (before[i] == key[j])
            {
                i++;
            }
            j++;
        }

        k = i - flag;   //menghitung jumlah kunci

        if (k == paKun) 
        {
            //variabel i dan j dibalikin ke asalnya, karna hanya mereplace dari indeks yang sama
            i = flag; 
            j = i;
            while (j < (paKat - paKun))
            {
                before[j] = before[j + paKun]; //prosesnya
                j++;
            }
            before[j] = '\0';
        }
        else //lanjutkan looping kalo gada char yang sama
        {
            i++;
        }
    } while (i < paKat);

    //panjang string yang terhapus
    paHap = strlen(before);

    //persyaratan
    if (paHap == 0)     //kalau terhapus semua, maka..
    {
        //Ikhlaskanlah mas
        printf("Kata hilang... Ikhlaskanlah harta karun ini.\n");  
    }
    else    //kalau tidak, maka.. 
    {   
        //hasil setelah dihapus
        printf("Setelah dihapus : %s\n", before);
        printf("\n");
        //proses membuat password harta karun
        i = 0;
        if (paHap % 2 == 0)     //jika jumlah password genap maka
        {
            g = 1; 
            k = paHap / 2;
            j = paHap / 2 - 1;
            while (i < paHap)
            {
                new[i] = before[k]; //dari tengah ke belakang
                i++;
                k++;
                new[i] = before[j]; //dari tengah ke awal
                j--;
                i++;
            }
            new[i] = '\0';
        }
        else    //jika password berjumlah ganjil
        {
            g = 0;
            k = paHap / 2 + 1;
            j = paHap / 2 - 1;
            while (i < paHap)
            {
                new[i] = before[k]; //ini sama kaya yang diatas
                i++;
                k++;
                new[i] = before[j];
                j--;
                i++;
            }
            i -= 2;
            new[i] = before[paHap / 2];
            new[i + 1] = '\0';
        }
        //proses pembuatan pola
        if (g == 1)     //jika genap
        {
            j = 0;
            k = 1;
            //print pola
            for (l = 0; l < paHap /  2; l++)
            {
                for (i = 0; i < l; i++)
                {
                    printf(" ");    //spasi awal
                }
                printf("%c", new[j]);   //huruf dari tengah ke belakang
                for (i = paHap / 2 - 1; i > l; i--)
                {
                    printf(" ");    //spasi tengah
                }
                for (i = paHap / 2 - 1; i > l; i--)
                {
                    printf(" ");    //spasi tengah lagi
                }
                printf("%c", new[k]);   //huruf dari tengah ke awal
                printf("\n");
                j += 2;
                k += 2;
            }
            //print password baru, congrats
            printf("\nPassword : %s - Harta Karun Didapatkan!\n", new);
        }
        else    //ini kalau ganjil
        {
            //komentarnya sama bang kaya diatas
            j = 0;
            k = 1;
            for (l = 0; l < paHap / 2 + 1; l++)
            {
                for (i = 0; i < l; i++)
                {
                    printf(" ");
                }
                printf("%c", new[j]);
                for (i = l; i < paHap / 2 - 1; i++)
                {
                    printf(" ");
                }
                for (i = l; i < paHap / 2 ; i++)
                {
                    printf(" ");
                }
                if (l < paHap / 2)
                {
                    printf("%c", new[k]);
                }
                printf("\n");
                j += 2;
                k += 2;
            }
            printf("\nPassword : %s - Harta Karun Didapatkan!\n", new);
        }
    }   
    //mengembalikan kode ke 0       
    return 0;
}