#include <stdio.h>

int main()
{
/*  //study case 1
    char k1, k2, k3;
    int a = 0, b = 0, c = 0;

    scanf("%c %c %c", &k1, &k2, &k3);

    if ((k1 != 'a') && (k1 != 'i') && (k1 != 'u') && (k1 != 'e') && (k1 != 'o'))
    {
        a = 1;
    }
    if ((k2 == 'a') || (k2 == 'i') || (k2 == 'u') || (k2 == 'e') || (k2 == 'o'))
    {
        b = 1;
    }
    if ((k3 != 'a') && (k3 != 'i') && (k3 != 'u') && (k3 != 'e') && (k3 != 'o'))
    {
        c = 1;
    }

    if ((a == 1) && (b == 1) && (c == 1))
    {
        printf("Memenuhi syarat");
    }
    else
    {
        printf("Tidak memenuhi syarat");
    }
*/
/*  //study case 2
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num1 % 2 == 0)
    {
        printf("bilangan pertama merupakan genap\n");
    }
    else
    {
        printf("bilangan pertama bukan genap\n");
    }
    if (num2 % 2 == 1)
    {
        printf("bilangan kedua merupakan ganjil\n");
    }
    else
    {
        printf("bilangan kedua bukan ganjil\n");
    }
*/
/*  //study case 3
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((a > b) && (a > c))
    {
        if (b > c)
        {
            printf("%d %d %d\n", a, b, c);
        }
        else
        {
            printf("%d %d %d\n", a, c, b);
        }
    }
    if ((b > a) && (b > c))
    {
        if (a > c)
        {
            printf("%d %d %d\n", b, a, c);
        }
        else
        {
            printf("%d %d %d\n", b, c, a);
        }
    }
    if ((c > b) && (c > a))
    {
        if (a > b)
        {
            printf("%d %d %d\n", c, a, b);
        }
        else
        {
            printf("%d %d %d\n", c, b, a);
        }
    }
*?
/*    //soal 1
    int a, ribuan, ratusan, puluhan, satuan;

    scanf("%d", &a);

    if(a >= 1000){
        printf("ribuan\n");
    }else if(a >= 100 && a < 1000){
        printf("ratusan\n");
    }else if(a >= 10 && a < 100){
        printf("puluhan\n");
    }else{
        printf("satuan\n");
    }
*/

/*    //soal 2
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c)
    {
        printf("segitiga sama sisi\n");    
    }
    else if(a == b || b == c || a == c)
    {
        printf("segitiga sama kaki\n");
    }else
    {
        printf("segitiga siku-siku\n");
    }
*/

/*    //soal 3
    int a, b, sum1, sum2;
    
    scanf("%d %d", &a, &b);

    sum1 = a * b;
    sum2 = a + b;
    if(a % 2 != 0 && b % 2 != 0){
        printf("%d\n", sum1);
    }else if(a % 2 == 0 && b % 2 == 0){
        printf("%d\n", sum2);
    }else{
        printf("%d %d\n", a, b);
    }
*/

/*    //soal 4
    double a;
    int depan, belakang;
    scanf("%lf", &a);

    depan = a;
    belakang = (a - depan) * 100;
    if(dep % bel == 0)
    {
        printf("kelipatan\n");
    }
    else
    {
        printf("bukan kelipatan\n");
    }
*/    
    return 0;
}