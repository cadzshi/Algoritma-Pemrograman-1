/*
Saya Sabila Rosad NIM 2106000 mengerjakan soal Kuis 2 no 1 
dalam mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah 
dispesifikasikan. Aamiin.
*/
//library yang digunakan
#include <stdio.h>
#include <string.h>
//deklarasi fungsi
int main()
{
    //deklarasi variabel
    char str1[201];
    char str2[201];
    char temp[201];
    char hasil[201];
    int num, i, j;
    //inputan user
    scanf("%s %s %d", str1, str2, &num);

    for (i = 0;i < num;i++)
    {
        temp[i] = str1[i];
        temp[i] = '\0';
    }
    for (i = 0; i < strlen(str2);i++)
    {
        printf("%c%c", str2[i], temp[i]);
    }
    
    

    //mengembalikan kode ke 0
    return 0;
}
