#include <stdio.h>

int main()
{
    int n, b, k;
    scanf("%d", &n);
    
    //baris awal
    for(b = 0;b < n - 1;b++)
    {
        for (k = 0;k < b;k++) //spasi ujung
        {
            printf(" ");
        }
        for(k = 0;k < n;k++) //garis miring
        {
            printf("*");
        }
        for(k = b;k < n - 1;k++) //spasi segitiga 1/2
        {
            printf(" ");
        }
        for(k = 0;k < n + 1;k++) //kotak
        {
            printf("*");
        }
        for(k = n - 2;k >= b;k--) //segitiga 1/2
        {                                    
            printf("*");
        }
        printf("\n");
    }
    //baris sebaris
    for(b = 0;b < 1;b++)
    {
        for(k = 0;k < n - 1;k++) //spasi awal
        {
            printf(" ");
        }
        for(k = 0;k < n * 3;k++) //garisnya
        {
            printf("*");
        }
        printf("\n");
    }
    //baris setengah awal
    for(b = 0;b < n - 1;b++)
    {
        for(k = 0;k < n - 1;k++) //spasi awal
        {
            printf(" ");
        }
        for(k = b;k < n - 1;k++) //segitiga 1/2
        {
            printf("*");
        }
        for(k = 0;k < b;k++) // spasi segitiga
        {
            printf(" ");
        }
        for(k = 0;k < n;k++) //spasi kotak
        {
            printf(" ");
        }
        for(k = 0;k <= b + 1;k++) //spasi segitiga
        {
            printf(" ");
        }
        for(k = b;k < n - 1;k++) //segitiga 1/2
        {
            printf("*");
        }
        printf("\n");
    }
    //baris akhir
    for(b = 0; b < n;b++)
    {
        for(k = 0;k < n - 1;k++) //spasi awal
        {
            printf(" ");
        }
        for(k = 0;k <= b;k++) //segitiga awal
        {
            printf("*");
        }
        for (k = n * 3 - 1;k > b * 2 + 1;k--) //spasi digabungin yang atas gatau gmn caranya:(
        {
            printf(" ");
        }
        for(k = 0;k < b + 1 ;k++) //segitiga akhir
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
