#include <stdio.h>
/*
//urutan angka 1 sampai n
int main()
{
    int n;
    scanf("%d", &n);
 
    for (int i = 1; i <= n; i++)
    {
        printf("Perulangan ke-%d\n", i);
    }
    return 0;
}
*/
/*
//jumlah deret bilangan dari 1 sampai n
int main()
{
    int n;
    scanf("%d", &n);
 
    int sum = 0;
 
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
 
    printf("%d\n", sum);
 
    return 0;
}
*/
/*
//urutan angka secara mundur dari n sampai 1
int main()
{
    int n;
    scanf("%d", &n);
 
    for (int i = n; i > 0; i--)
    {
        printf("Hitung mundur %d\n", i);
    }
 
    printf("Selamat tahun baru!\n");
 
    return 0;
}
*/
/*
//hasil dari n faktorial
int main()
{
    int n;
    scanf("%d", &n);
 
    int fact = 1;
 
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
 
    printf("%d! adalah %d\n", n, fact);
 
    return 0;
}
*/
/*
//pola vertikal
int main()
{
    int n;
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++)
    {
        printf("*\n");
    }
    return 0;
}
*/
/*
//pola bersarang
int main()
{
    int n;
    scanf("%d", &n);
 
    for (int baris = 0; baris < n; baris++)
    {
        for (int kolom = 0; kolom < n; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
 
    return 0;
}
*/
/*
//pola bersarang yang lain
int main()
{
    int n;
    scanf("%d", &n);
 
    for (int baris = 0; baris < n; baris++)
    {
        for (int kolom = 0; kolom <= baris; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
 
    return 0;
}
*/
/*
//latihan 1 cuki
int main()
{
    int n, b, k;
    scanf("%d", &n);

 
 
    for (b = 0; b < n; b++)
    {
        for (k = b; k < n - 1; k++)
        {
            printf(" ");
        }
        for (k = 0; k <= b; k++)
        {
            printf("*");
        }
        for (k = 0; k < b; k++)
        {
            printf("*");
        }        
        printf("\n");
    }
    return 0;
}
*/
/*
//latihan 2 pntkk
int main()
{
    int n, b, k;
    scanf("%d", &n);

    for (b = 0; b < n; b++)
    {
        for (k = b; k < n - 1; k++)
        {
            printf(" ");
        }
        for (k = 0; k <= b; k++)
        {
            printf("*");
        }
        for (k = 0; k < b; k++)
        {
            printf("*");
        }        
        printf("\n");
    }
    for (b = 0; b < n; b++)
    {
        for (k = 0; k <= b; k++)
        {
            printf(" ");
        }
        for (k = b; k < n - 1; k++)
        {
            printf("*");
        }
        for (k = b; k < n - 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
//latihan 3 
int main()
{
    int n, b, k;
    scanf("%d", &n);

    for (b = 0; b < n; b++)
    {
        for (k = b; k < n - 1; k++)
        {
            printf(" ");
        }
        for (k = 0; k <= b; k++)
        {
            printf("*");
        }
        for (k = 0; k < b; k++)
        {
            printf("*");
        }        
        for (k = b; k < n - 1; k++)
        {
            printf(" ");
        }
        for (k = 0; k < n; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (b = 0; b < n; b++)
    {
        for (k = 0; k <= b; k++)
        {
            printf(" ");
        }
        for (k = b; k < n - 1; k++)
        {
            printf("*");
        }
        for (k = b; k < n - 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
//latihan 4
int main()
{
    int n, b, k, a = 0;
    scanf("%d", &n);

    
    for (b = 0; b < n; b++)
    {
        a++;
        for (k = n * 5; k < n - 1; k++)
        {
            printf(" ");
        }
        for (k = 0; k <= b; k++)
        {
            printf("%d", a);
        }
        for (k = 0; k < b; k++)
        {
            printf("%d", a);
        }        
        for (k = b; k < n - 1; k++)
        {
            printf(" ");
        }
        for (k = 0; k < n; k++)
        {
           printf("%d", a);
        }
        printf("\n");
    }
    for (b = 0; b < n; b++)
    {
        a++;
        for (k = 0; k <= b; k++)
        {
            printf(" ");
        }
        for (k = b; k < n - 1; k++)
        {
            printf("%d", a);
        }
        for (k = b; k < n - 2; k++)
        {
            printf("%d", a);
        }
        printf("\n");
    }
    return 0;
}   