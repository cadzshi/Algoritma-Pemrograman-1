#include "head.h"

int main()
{
   
    char kalimat[201][201];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", kalimat[i]);
    }

    pisahkalimat(n, kalimat);
    hapus(n);
    sortingkalimat(n);
    cekanagram(n);
    cekpalindrom(n);
    yesno(n);

    
    return 0;
}