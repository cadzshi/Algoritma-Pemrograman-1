/*   
    Saya Sabila Rosad [2106000] mengerjakan 
    soal eval - PPHT21 
    dalam mata kuliah algoritma dan pemrograman 1 
    untuk keberkahanNya maka saya tidak melakukan kecurangan 
    seperti yang telah dispesifikasikan. Aamiin.
*/
//library 
#include <stdio.h>
//deklarasi fungsi
int main()
{
    //meminta masukan dari user
    int n, m, b, k, kata;
    scanf("%d", &n);
    scanf("%d", &kata);
    scanf("%d", &m);

    for(b = 0;b < n;b++)
    {
        for(k = n;k > b;k--)
        {
            printf(" ");
        }
        for(k = 0;k <= b;k++)
        {
            printf("*");
        }
        for(k = 0;k < n;k++)
        {
            printf("*");
        }
        for(k = 0;k <= b;k++)
        {
            printf("*");
        }
        for(k = b;k < n;k++) 
        {
            printf(" ");
        } 
        for(k = n;k > b;k--)
        {
            printf(" ");
        }
        for(k = 0;k <= b;k++)
        {
            printf("*");
        }
        for(k = 0;k < n;k++)
        {
            printf("*");
        }
        for(k = 0;k <= b;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (b = 0;b < n * 4;b++)
    {
        for (k = 0;k <= b;k++)
        {
            printf(" ");
        }
        for (k = n * 6;k >= b * 2;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
maaf kang/teh, otak saya ga nyampe:(
*/