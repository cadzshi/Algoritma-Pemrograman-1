#include <stdio.h>

int main(){
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
/**/    //menampilkan isi array hanya bilangan ganjil
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
/**/
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
    if(tabInt[i] % 2 == 1){jumlah++;}
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
    return 0;
}
