#include <stdio.h>

int main()
{
    int p1, p2, p3, k1, k2, k3, selisihluas;
    int jenis1, jenis2;
    double luas1, luas2;

    scanf("%d %d %d\n", &p1, &p2, &p3);
    scanf("%d %d %d\n", &k1, &k2, &k3);

    //nentuin jenis segitiga 1
    if (p1 == p2 && p2 == p3)
    {
        jenis1 = 0;
    }
    else if ((p1 == p2) || (p2 == p3) || (p3 == p1)) 
    {
        jenis1 = 1;
    }
    else
    {
        jenis1 = 2;
    }

    //nentuin jenis segitiga 2
    if (k1 == k2 && k2 == k3)
    {
        jenis2 = 0;
    }
    else if ((k1 == k2) || (k2 == k3) || (k3 == k1)) 
    {
        jenis2 = 1;
    }
    else
    {
        jenis2 = 2;
    }

    if (jenis1 = 0)
    {
        
    }
    
    
    return 0;
}