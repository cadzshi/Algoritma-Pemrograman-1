#include <stdio.h>
/*
//contoh prosedur
//prosedeur dengan parameter struct
typedef struct
{
    char nama[101];
    int nim;
    float ipk;
}
mahasiswa;

void print_data_mahasiswa(mahasiswa mhs)
{
    printf("Data Mahasiswa\n");
    printf("Nama    : %s\n", mhs.nama);
    printf("NIM     : %d\n", mhs.nim);
    printf("IPK     : %.2f\n", mhs.ipk);
}
//prosedur membandingkan nilai 2 variabel
void compare(char a, char b)
{
    if (a > b)
    {
        printf("Parameter kiri lebih besar\n");
    }
    else if (a < b)
    {
        printf("Parameter kanan lebih besar\n");
    }
    else
    {
        printf("Parameter kiri dan kanan sama\n");
    }
}

//prosedur print pembatas
void pembatas()
{
    printf("------------------------\n");
}

//prosedur dengan parameter array
void print_reverse(char str[])
{
    int n = strlen(str);
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

//variable scope
int var1; //------> ruang lingkup global, bisa diakses dimanapun
 
void prosedur()
{
    int var2; //-----> ruang lingkup hanya di prosedur
}
 
int main()
{
    int var3; //-----> ruang lingkup berada di mdalam main
 
    if(var3 > 0)
    {
        int var4; //-----> ruang lingkup hanya di if
    }
 
    return 0;
}
*/
/*
//implementasi pass by value dan pass by reference
void fillCupValue(int c)
{
    c = c + 1;
}
 
void fillCupReference(int *c)
{
    *c = *c + 1;
}
 
int main()
{
    int cup = 0;
 
    printf("Nilai awal variabel       : %d\n", cup);
 
    fillCupValue(cup);
 
    printf("Setelah pass by value     : %d\n", cup);
 
    fillCupReference(&cup);
 
    printf("Setelah pass by reference : %d\n", cup);
 
    return 0;
}
*/
/*
//pass by reference pada parameter struct
typedef struct
{
    char nama[101];
    int nim;
    float ipk;
}
mahasiswa;
 
void scan_data_mahasiswa(mahasiswa *mhs)
{
    scanf("%s %d %f", &(*mhs).nama, &(*mhs).nim, &(*mhs).ipk);
}
 
int main()
{
    mahasiswa m1;
 
    scan_data_mahasiswa(&m1);
 
    printf("%s %d %.2f", m1.nama, m1.nim, m1.ipk);
 
    return 0;
}
*/

//pas by reference pada parameter array
void tambah_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] + 1;
    }
}
 
int main()
{
    int angka[] = {3, 81, 5, 30, 9};
 
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", angka[i]);
    }
    printf("\n");
 
    tambah_array(angka, 5);
 
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", angka[i]);
    }
    printf("\n");
   
    return 0;
}
