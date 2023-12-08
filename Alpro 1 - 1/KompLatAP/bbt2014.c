#include <stdio.h>

int main()
{
    int n, b, k;
    scanf("%d", &n);

    //baris piramid
    for(b = 0;b < n * 2 - 1;b++)
    {
        for(k = 0;k <= b;k++) //piramid kiri
        {
            printf("*");
        }
        for(k = b;k < n * 2 - 1;k++) 
        {
            printf(" ");
        }                                    //spasi piramid setengah
        for (k = n * 2 - 2;k >= b;k--)
        {                                    //spasi piramid setengah
            printf(" ");
        }
        for (k = 0;k < b * 2 + 1;k++)//piramid tengah
        {
            printf("*");
        }
        for(k = b;k < n * 2 - 1;k++)
        {
            printf(" ");
        }                                     //spasi piramid setengah
        for(k = n * 2 - 2;k >= b;k--)
        {                                     //spasi piramid setengah
            printf(" ");                    
        }
        for (k = 0;k <= b;k++)//piramid kanan
        {
            printf("*");
        }
        printf("\n");
    }
    //baris yang bawah piramid
    for (b = 0;b < 1;b++)
    {
        for (k = 0;k < n * 8 - 1;k++)
        {
            printf("*");
        } 
        printf("\n");
    }
    //baris yang persegi panjang
    for(b = 0; b < n;b++)
    {
        for(k = 0;k < n * 2 + 1;k++)//spasi kanan
        {
            printf(" ");
        }
        for(k = 0;k < n * 4 - 3;k++)//persegi panjang tengah
        {
            printf("*");
        }
        
        printf("\n");
    }
    //baris yg segitiga bawah
    for(b = 0; b < n;b++)
    {
        for(k = 0;k < n * 2 + 1;k++)//spasi - kotak tengah
        {
            printf(" ");
        }
        for(k = 0;k <= n * 3 - 4;k++)//spasi kotak
        {
            printf(" ");
        }
        for(k = 0;k < b;k++)//spasi sblm segitiga
        {
            printf(" ");
        }
        for(k = b;k < n;k++)//segitiga
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}
