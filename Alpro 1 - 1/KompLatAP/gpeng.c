#include <stdio.h>

int main (){
    int n, m, k, h, r, keuntungan;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    scanf("%d", &h);
    scanf("%d", &r);

    keuntungan = ((n * 100) + (m * 150) + (k * 75) + (h * 175)) * r;

    printf("%d\n", keuntungan);


    return 0;
}