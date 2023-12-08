#include <stdio.h>

typedef struct {
    int num1, num2, num3;
    char vowl;
}uhuy;

int main(){
    int hasil;
    uhuy a;

    scanf("%d %d %d %c", &a.num1, &a.num2, &a.num3,  &a.vowl);
    

    switch(a.vowl){
        case 'A':
        hasil = (a.num1 * a.num2) + (a.num2 * a.num3);
        break;

        case 'B':
        hasil = (a.num1 - a.num3) / a.num1;
        break;
        
        case 'C':
        hasil = (a.num1 + a.num2) - a.num3;
        break;

        default:
        hasil = (a.num1 + a.num2) - a.num3;
        break;
    }

    printf("%d\n", hasil);

    return 0;
}