/*
Saya Sabila Rosad NIM 2106000 mengerjakan soal UTS 2 
dalam mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah 
dispesifikasikan. Aamiin.
*/
#include <stdio.h>

int main()
{
    int n, y, i;
    scanf("%d", &n);
    int x[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for (i = 0; i < n; i++)
    {
        x[i] += x[i + 1];
    }
    for (i = 0; i < n - 1;i++)
    {
        printf("%d\n", x[i]);
    }
    
    
    return 0;
}