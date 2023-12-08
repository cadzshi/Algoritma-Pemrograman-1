#include <stdio.h>

int main() {
    /*    //mengisi array
    int n;
    scanf("%d", &n);
    int tabInt[n];
    int i;
    for(i=0; i < n; i++)
    {
        scanf("%d", &tabInt[i]);
    }
    for(i=0; i < n; i++)
    {
        printf("%d ", tabInt[i]);
    }
*/
/*    //menampilkan isi array hanya bilangan ganjil
    int n;
    scanf("%d", &n);
    int tabInt[n];
    int i;
    for(i=0; i < n; i++)
    {
        scanf("%d", &tabInt[i]);
    }
    for(i=0; i < n; i++)
    {
        if(tabInt[i] % 2 == 1)
        {
        printf("%d ", tabInt[i]);
        }
    }
*/
/*    //menghitung banyaknya elemen array yang isinya bilangan ganjil
    int n;
    scanf("%d", &n);
    int tabInt[n];
    int i;
    for(i=0; i < n; i++)
    {
        scanf("%d", &tabInt[i]);
    }
    int jumlah = 0;
    for(i=0; i < n; i++)
    {
        if(tabInt[i] % 2 == 1)
        {
            jumlah++;
        }
    }
    printf("banyaknya elemen yang termasuk ganjil: %d\n", jumlah);
*/
/*    //menampilkan separuh isi array
    int n;
    scanf("%d", &n);
    int tabInt[n];
    int i;
    for(i=0; i < n; i++)
    {
        scanf("%d", &tabInt[i]);
    }
    for(i=0; i < (n/2); i++)
    {
        printf("%d ", tabInt[i]);
    }
*/
/*    //mencari nilai maksimal
    int n;
    scanf("%d", &n);
    int tabInt[n];
    int i;
    for(i=0; i < n; i++)
    {
    scanf("%d", &tabInt[i]);
    }
    int maksimal = tabInt[0];
    for(i=1; i < n; i++)
    {
        if(maksimal < tabInt[i])
        {   
        maksimal = tabInt[i];
        }
    }
    printf("nilai maksimal: %d\n", maksimal);
*/

/*    //soal 1
    int n, nilai[n], max;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nilai[i]);
    }

    max = nilai[0];
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] % 2 == 0)
        {
            if (max < nilai[i])
            {
                max = nilai[i];
            }
        }
    }
    printf("%d", max);
*/
/*
    int i, j, n, m, min, max, hasil;
    
    scanf("%d %d", &n, &m);
    int x[n];
    int y[m];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    max = x[0];
    for (i = 0; i < n; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
    }

    for (j = 0; j < m; j++)
    {
        scanf("%d", &y[j]);
    }
    min = y[0];
    for (j = 0; j < m; j++)
    {
        if (min > y[j])
        {
            min = y[j];
        }
    }
    hasil = max + min;
    printf("%d", hasil);
*/
    int n, m;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    int arr2[100];
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &arr2[j]);
    }    

    for (int i = 0; i < n / 2; i++)
    {
        printf("%d", arr[i]);
    }
/*    for (int j = m - 1; j > m / 2; j--)
    {
        printf("%d", arr2[j]);
    }
*/    
    
     
    return 0;
}