#include <stdio.h>

int main()
{
    int n, b, k;
    scanf("%d", &n);

    //baris atas
    for(b = 0; b < n - 1;b++) 
    {
        for(k = 0;k <= b;k++) //segitiga awal
        {
            printf("*");
        }
        for(k = b;k < n - 1;k++) //spasi
        {
            printf(" ");
        }                                    
        for(k = n - 2;k >= b;k--) //spasi
        {                                    
            printf(" ");
        }
        for(k = 0;k < b + 1 ;k++) //segitiga 1/2
        {
            printf("*");
        }
        for(k = 0;k < n;k++) //kotak
        {
            printf("*");
        }
        for(k = 0;k <= b;k++) //segitiga akhir
        {
            printf("*");
        }
        printf("\n");
    }
    //baris kedua yang 1 baris
    for(b = 0;b < 1;b++)
    {
        for(k = 0;k < n * 4;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    //baris setengah awal
    for(b = 0; b < n - 1;b++)
    {
        for(k = n - 2;k >= b;k--) //segitiga 1/2
        {                                    
            printf("*");
        }
        for(k = 0;k <= b;k++) //spasi
        {
            printf(" ");
        }
        for(k = 0;k <= b;k++) //spasi
        {
            printf(" ");
        }
        for(k = b;k < n - 1;k++) //segitiga 1/2
        {
            printf("*");
        }  
        for(k = 0;k < n;k++) //kotak
        {
            printf("*");
        }
        for(k = n - 2;k >= b;k--) //segitiga 1/2
        {                                    
            printf("*");
        }
        printf("\n");
    }
    //baris setengah akhir
    for(b = 0; b < n - 1;b++)
    {
        for(k = 0;k <= b;k++) //segitiga 1/2
        {
            printf("*");
        }
        for(k = b;k < n - 1;k++) //spasi
        {
            printf(" ");
        }                                    
        for(k = n - 2;k >= b;k--) //spasi
        {                                    
            printf(" ");
        }
        for(k = 0;k < b + 1 ;k++) //segitiga 1/2
        {
            printf("*");
        }
        printf("\n");
    }
    //baris paling akhir
    for(b = 0;b < 1;b++)
    {
        for(k = 0;k < n * 2;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
