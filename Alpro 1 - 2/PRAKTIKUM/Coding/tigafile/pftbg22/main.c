#include "head.h"

//deklarasi fungsi
int main()
{
    //deklarasi variabel
    int n, i;
    //inputan user
    scanf("%d", &n);
    data x[n];
    //scan masing masing string
    for(i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x[i].s1, &x[i].s2, &x[i].s3);
    }
    //scan pembatas
    int tampil;
    scanf("%d", &tampil);

    //variabel resolusi terbesar
    int biggest;
    biggest = resolusiTerbesar(x);

    //print hasil
    for (i = 0; i < tampil; i++)
    {
        printf("%d\n", x[biggest].resolusi);
    }
    //mengembalikan kode ke 0
    return 0;
}