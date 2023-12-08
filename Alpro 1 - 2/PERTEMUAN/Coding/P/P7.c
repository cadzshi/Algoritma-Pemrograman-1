#include<stdio.h>
#include<string.h>

/*
//sintaks do whilenya
int main()
{
    char c;
    do
    {
        printf("apakah anda akan berputar lagi? (y/n)\n");
        scanf("%c", &c);
    }while (c == 'y');

    return 0;
}
*/

/*
//operasi pada string-STRLEN
//strlen(str)-menghitung banyaknya karakter pada string str 
int main()
{
    char str[50];
    scanf("%s", &str);
    int i;

    printf("%s\n, str");
    for(i = 0;i < strlen(str);i++)
    {
        printf("%c\n", str[i]);
    }
    return 0;
}
*/

/*
//operasi pada string-STRCPY
//strcpy(str2, str1)-menyalin isi str1 ke str2
int main()
{
    char str1[50], str2[50];
    scanf("%s", &str1);
    strcpy(str2, str1);
    int i;
    for(i = 0;i < strlen(str2);i++)
    {
        printf("%c\n", str2[i]);
    }
    return 0;
}
*/

/*
//strcmp(str1, str2)- membandingkan isi str1 dan str2
int main()
{
    char str1[50], str2[50];
    scanf("%s", &str1);
    scanf("%s", &str2);
    if(strcmp(str1, str2) == 0)
    {
        printf("string sama\n");
    }
    else
    {
        printf("string tidak sama\n");
    }
    return 0;
}
*/

/*
//menghitung huruf vokal
int main()
{
    char str[50];
    scanf("%s", &str);
    int i, vokal = 0;
    for(i=0; i<strlen(str);i++)
    {
            if(str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o')
            {
                vokal++;
            }
    }
    printf("%d\n", vokal);
    return 0;
}
*/

//latihan soal
/*
//pola huruf
int main()
{
    char str[50];
    scanf("%s", &str);
    int i, j, spasi = 0;

    // r
    //  o
    //   s
    //    a
    //     d 
    for(i = 0; i < strlen(str);i++) 
    {
        for(j = 0;j < spasi;j++)
        {
        printf(" ");
        }
        printf("%c\n", str[i]);
        spasi++;
    }
    
    //        r
    //      o
    //    s
    //  a
    //d 
    spasi = 0;
    for(i = 0; i < strlen(str);i++)
    {
         spasi++;
        for(j = strlen(str);j > spasi;j--)
        {
        printf(" ");
        }
        printf("%c\n", str[i]);  
    }

    //        d
    //      a
    //    s
    //  o
    //r 
    spasi = 0;
    for(i = strlen(str); i >= 0;i--)
    {
        spasi++;
        for(j = strlen(str);j >= spasi;j--)
        {
        printf(" ");
        }
        printf("%c\n", str[i]);
        
    }
    // r
    //   o
    //    s
    //   a
    // d
    //yang ini masi salah 
    spasi = 0;
    for(i = 0; i < strlen(str) - 2;i++)
    {
        
        for(j = 0;j < spasi;j++)
        {
            printf("-");
        }
        printf("%c\n", str[i]);
        spasi++;
    }
    spasi = 0;
    for(i = strlen(str) - 1; i > spasi;i--)
    {
        spasi++;
        for((j = strlen(str) - 4) * 3;j >= spasi;j--)
        {
        printf(" ");
        }
        printf("%c\n", str[i]);  
        
    }
    return 0;
}
*/
/*
//menghitung jumlah huruf konsonan
int main()
{
    char str[100];
    scanf("%s", &str);
    int i, konsonan = 0;
    for(i = 0;i < strlen(str);i++)
    {
        if(str[i] != 'a' && str[i] != 'i' && str[i] != 'u' && str[i] != 'e' && str[i] != 'o')
        {
            konsonan++;
        }
    }
    printf("%d\n", konsonan);
    return 0;
}
*/
/*
//menghitung karakter angka
int main()
{
    char str[100];
    int i, jmlangka = 0;
    scanf("%s", &str);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 48  && str[i] <= 57)
        {
            jmlangka++;
        }
    }
    printf("%d\n", jmlangka);
    
    return 0;
}
*/

//jumlah pasangan huruf
int main()
{
    char substring[6];  // input panjangnya 2-5 char, tapi bagian terakhir string harus selalu '\0'
    char string[100];
    int count = 0;
    int match;

    scanf("%s", substring);
    scanf("%s", string);

    // disini i itu buat index string utamanya
    // j buat index substring
    // kondisi for nya panjang string - panjang substring biar pas dicek ga kelebihan indexnya
    for (int i = 0; i <= strlen(string) - strlen(substring); i++)
    {
        // setiap ganti index string utama, nilai match direset jadi 0
        match = 0;
        // for ini diulang menyesuaikan panjang substring
        for (int j = 0; j < strlen(substring); j++)
        {
            // contoh string "bandung" dan substring "un"
            // anggap i = 4, maka kita akan cek mulai dari huruf 'u'
            // karena panjang substring = 2, maka kita bakal cek 2 char
            // yaitu index i ('u') dan i + 1 ('n'), (ini ditambah otomatis karena j itu iterator loop)
            if (string[i + j] == substring[j])  // kondisi if nya jadi kaya gini
            {
                match++;    // pokoknya jika salah satu char itu sama, nilai match ditambah
            }
        }
        // kalo nilai match == panjang substring, berarti kata itu ada di dalam string di index ke i
        if (match == strlen(substring))
        {
            count++;
        }
    }
    
    printf("%i\n", count);

    return 0;
}
