#include <stdio.h>
#include <math.h>
/*
//sintaks while
int main()
{
    int n;
    scanf("%d", &n);

    //perbedaan for loop dengan wuhile loop

    //for loop
    for (int i = 1; i <= n; i++) //<-----inisialisasi + iterasi
    {
        //proses
        printf("Proses akan mengulang sebanyak %d kali\n", i);
    }

    //for while
    //inisialisasi
    int j = 1;  //<-----j dimulai dari 1
    while (j <= n)  //<-----selama j kurang dari n 
    {
        //proses
        printf("Proses akan mengulang sebanyak %d kali\n", j);
        j++;    //<-----iterasi
    }

    return 0;
}
*/
/*
//program pencarian angka ganjil sebuah array
int main()
{
    int i, j, k, n;

    printf("masukkan jumlah angka: ");
    scanf("%d", &n);
    int x[n];

    printf("masukkan angka: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    j = 0, i = 0;
    while ((j == 0) && (i < n))
    {
        if (x[i] % 2 == 1)
        {
            j = 1;
        }
        else
        {
            i++;
        }
    }
    k = 0;
    for (i = 0; i < n; i++)
    {
       if (x[i] % 2 == 1)
        {
            k++;
        }
    }
    
    if (j == 0)
    {
        printf("tidak ada angka ganjil");
    }
    else
    {
        printf("terdapat %d angka ganjil", k);
    }
    return 0;
}
*/
/*
//program menampilkan array dan berhenti jika ada angka 999
int main()
{
    int n, i, j;

    scanf("%d", &n);
    int x[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    i = 0;
    while ((x[i] != 999) && (i < n))
    {
        for (i = 0; i < n; i++)
        {
            printf("%d\n", x[i]);
        }
        i++;
    }
    
    return 0;
}
*/
/*
//program menampilkan max 3 genap pada suatu array
int main()
{
    int n, i, max;

    scanf("%d", &n);
    int x[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    i = 0, max = 0;
    while ((max < 3) && (i < n))
    {
        if (x[i] % 2 == 0)
        {
            printf("%d\n", x[i]);
            max++;
        }
        i++;
    }
    return 0;
}
*/
/*
//array tipe terstruktur menampilkan isi array x dan y
typedef struct{
    int x, y;
}titik;

int main()
{
    int n, i, jmlx = 0, jmly = 0;
    scanf("%d", &n);
    titik ikatan[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ikatan[i].x);
        scanf("%d", &ikatan[i].y);
    }
    for (i = 0; i < n; i++)
    {
        jmlx = jmlx + ikatan[i].x;
        jmly = jmly + ikatan[i].y;
    }
    printf("%d %d\n", jmlx, jmly);
    return 0;
}
*/
/*
//nampilkan titik x yang ganjil dan titik y yang lebih besar dari titik x
typedef struct {
    int x, y;
}titik;

int main()
{
    int n, i, jmlx = 0, jmly = 0;
    scanf("%d", &n);
    titik ikatan[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ikatan[i].x);
        scanf("%d", &ikatan[i].y);
    }
    for (int i = 0; i < n; i++)
    {
        if ((ikatan[i].x % 2 == 1) && (ikatan[i].y > ikatan[i].x))
        {
            printf("%d %d\n", ikatan[i].x, ikatan[i].y);
        }
        
    }
    return 0;
}
*/
/*
//lat 1 belom 
typedef struct{
    int alas, tinggi, sisiM;
}segitiga;

int main()
{
    int n, i, j = 0, siku[n];
    scanf("%d", &n);
    segitiga s[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &s[i].alas);
        scanf("%d", &s[i].tinggi);
        scanf("%d", &s[i].sisiM);
    }

    for(i = 0; i < n; i++)
    {
        if ((pow(s[i].alas,2)) + (pow(s[i].tinggi,2)) == pow(s[i].sisiM,2))
        {
            siku[i++];
        }
    }

    while ((j < 3) && (i < n))
    {
        printf("%d\n", &siku[n]);
        j++;
    }
    
    return 0;
}
*/
/*
//lat 2 belom
int main()
{
    int n, i;
    scanf("%d", &n);
    float x[n];
    int f[n], b[n];

    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }

    for (i = 0; i < n; i++)
    {
        f[i] = x[i];
    }
    for (i = 0; i < n; i++)
    {
        b[i] = (x[i] - f[i]) * 100;
    }

    for (i = 0; i < n; i++)
    {
        if(f[i] % 2 == 0 && b[i] % 2 == 0)
        {
            printf("%d %d\n", f[i], b[i]);
        }
    }
    return 0;
}
*/
/*
typedef struct{
    int pembilang, penyebut;
}pecahan;

int main()
{
    int n, i;
    scanf("%d", &n);
    pecahan x[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i].pembilang);
        scanf("%d", &x[i].penyebut);
    }
    
    int max = 0;
    i = 0;
    while (max < 3 && i < n)
    {
        if (x[i].pembilang % x[i].penyebut == 0)
        {
            printf("%d %d\n", x[i].pembilang, x[i].penyebut);
            max++;
        }
        i++;
    }
    
    return 0;
}
*/

//lat 4 belom
typedef struct{
    int pembilang, penyebut;
}pecahan;

int main()
{
    int n, i;
    scanf("%d", &n);
    pecahan x[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i].pembilang);
        scanf("%d", &x[i].penyebut);
    }
    
    int total[n];
    for (i = 0; i < n; i++)
    {
        if (x[i].pembilang % x[i].penyebut == 0)
        {
            total[i] += x[i].pembilang / x[i].penyebut;
        }
    }

    printf("%d\n", total[i]);
    return 0;
}