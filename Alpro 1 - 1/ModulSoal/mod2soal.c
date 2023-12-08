#include <stdio.h>

int main(){
    int a, b, c;

    printf("kotak a : ");
    scanf("%d", &a);
    printf("kotak b : ");
    scanf("%d", &b);
    printf("kotak c : ");
    scanf("%d", &c);

    if (a > b && a > c){
        if (a % 2 == 0){
            printf("apel terbanyak ada di kotak a dan jumlahnya genap\n");
        } else {
            printf("apel terbanyak ada di kotak a dan jumlahnya ganjil\n");
        }
    }
    if (b > a && b > c){
        if (b % 2 == 0){
            printf("apel terbanyak ada di kotak b dan jumlahnya genap\n");
        } else {
            printf("apel terbanyak ada di kotak b dan jumlahnya ganjil\n");
        }
    }
    if (c > a && c > b){
        if (c % 2 == 0){
            printf("apel terbanyak ada di kotak c dan jumlahnya genap\n");
        } else {
            printf("apel terbanyak ada di kotak c dan jumlahnya ganjil\n");
        }
    }
    return 0;
}