#include <stdio.h>

int main()
{
    int n, m, p, a, b, c;
    int sum, jam, menit, detik;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    sum = (n * a) + (m * b) + (p * c);
    detik = sum * 60;
    detik = detik % 60;
    jam = sum / 60;
    menit = sum % 60;
    
    printf("0%d:%d:%d0\n", jam, menit, detik, detik);

    return 0;
}
