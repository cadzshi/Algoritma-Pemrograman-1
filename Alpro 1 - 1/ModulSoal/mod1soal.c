#include <stdio.h>

int main(){
/*    //soal 1
    int d, t;
    float vol, phi = 22.0 / 7.0;

    printf("Diameter :  ");
    scanf("%d", &d);
    printf("Tinggi :  ");
    scanf("%d", &t);

    vol = ((phi * d * d) / 4) * t;

    printf("Volumenya: %.2f cm kubik\n", vol);
*/
//  //soal
    int a, b, n, m;

    printf("Jumlah kue: ");
    scanf("%d", &n);
    printf("Jumlah keponakan: ");
    scanf("%d", &m);

    a = n / m;
    b = n % a;

    printf("masing-masing: %d buah\n", a);
    printf("sisa light stick: %d buah\n", b);  
    return 0;
} 