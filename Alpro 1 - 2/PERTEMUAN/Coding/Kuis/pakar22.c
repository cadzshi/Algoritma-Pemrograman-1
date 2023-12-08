/*
Saya Sabila Rosad NIM 2106000 mengerjakan soal kuis 2 
dalam mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah 
dispesifikasikan. Aamiin.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    int x5, y5, x6, y6;
    double xy1, xy2, xy3;
    int hasil1, hasil2, hasil3;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
    scanf("%d %d %d %d", &x5, &y5, &x6, &y6);

    xy1 = pow((x1-x2),2) + pow((y1-y2),2);
    xy2 = pow((x3-x4),2) + pow((y3-y4),2);
    xy3 = pow((x5- x6),2) + pow((y5-y6),2); 

    hasil1 = sqrt(xy1);
    hasil2 = sqrt(xy2);
    hasil3 = sqrt(xy3);

if ((hasil1 > hasil2 && hasil1 < hasil3) || (hasil1 < hasil2 && hasil1 > hasil3))
    {
        if (hasil3 > hasil2)
        {
            printf("%d %d %d %d %d\n", x1, y1, x2, y2, hasil1);
            printf("%d %d %d %d %d\n", x3, y3, x4, y4, hasil2);
            printf("%d %d %d %d %d\n", x5, y5, x6, y6, hasil3);
        }
        else
        {
            printf("%d %d %d %d %d\n", x1, y1, x2, y2, hasil1);
            printf("%d %d %d %d %d\n", x5, y5, x6, y6, hasil3);
            printf("%d %d %d %d %d\n", x3, y3, x4, y4, hasil2);
        }
    }
    if ((hasil2 > hasil1 && hasil2 < hasil3) || (hasil2 < hasil1 && hasil2 > hasil3))
    {
        if (hasil3 > hasil1)
        {
            printf("%d %d %d %d %d\n", x3, y3, x4, y4, hasil2);
            printf("%d %d %d %d %d\n", x1, y1, x2, y2, hasil1);
            printf("%d %d %d %d %d\n", x5, y5, x6, y6, hasil3);
        }
        else
        {
            printf("%d %d %d %d %d\n", x3, y3, x4, y4, hasil2);
            printf("%d %d %d %d %d\n", x5, y5, x6, y6, hasil3);
            printf("%d %d %d %d %d\n", x1, y1, x2, y2, hasil1);
        }
    }
    if ((hasil3 > hasil1 && hasil3 < hasil2) || (hasil3 < hasil1 && hasil3 > hasil2))
    {
        if (hasil2 > hasil1)
        {
            printf("%d %d %d %d %d\n", x5, y5, x6, y6, hasil3);
            printf("%d %d %d %d %d\n", x1, y1, x2, y2, hasil1);
            printf("%d %d %d %d %d\n", x3, y3, x4, y4, hasil2);
        }
        else
        {
            printf("%d %d %d %d %d\n", x5, y5, x6, y6, hasil3);
            printf("%d %d %d %d %d\n", x3, y3, x4, y4, hasil2);
            printf("%d %d %d %d %d\n", x1, y1, x2, y2, hasil1);
        }
    }
    return 0;
}
