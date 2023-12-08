#include <stdio.h>

int main ()
{
    float a, b, c, d, e, f;
    int froa, beha, frob, behb, froc, behc, frod, behd, froe, behe, frof, behf, tot;
    int kel3, kel4 = 0;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    froa = a;
    beha = (a - froa) * 10;
    frob = b;
    behb = (b - frob) * 10;
    froc = c;
    behc = (c - froc) * 10;
    frod = d;
    behd = (d - frod) * 10;
    froe = e;
    behe = (e - froe) * 10;
    frof = f;
    behf = (f - frof) * 10;


    if(beha % 3 == 0)
    {
        kel3 = kel3 + 1;
    }
    else
    {
        kel4 = kel4 + 1;
    }
    if(behb % 3 == 0)
    {
        kel3 = kel3 + 1;
    }
    else
    {
        kel4 = kel4 + 1;
    }
    if(behc % 3 == 0)
    {
        kel3 = kel3 + 1;
    }
    else
    {
        kel4 = kel4 + 1;
    }
    if(behd % 3 == 0)
    {
        kel3 = kel3 + 1;
    }
    else
    {
        kel4 = kel4 + 1;
    }
    if(behe % 3 == 0)
    {
        kel3 = kel3 + 1;
    }
    else
    {
        kel4 = kel4 + 1;
    }
    if(behf % 3 == 0)
    {
        kel3 = kel3 + 1;
    }
    else
    {
        kel4 = kel4 + 1;
    }

    if(kel3 > 2)
    {
        printf("valid\n");
    }
    else
    {
        printf("tidak valid\n");
    }

    return 0;
}
