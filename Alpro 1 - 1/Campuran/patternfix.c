#include <stdio.h>
#include <string.h>

int main() {
    int n = 0, m = 0;
    
    scanf("%d", &m);
    int mid = m/2;
    char kata[m];
    for(int i=0; i<m; i++){
        scanf(" %c", &kata[i]);
    }
    scanf("%d", &n);
    int row = 2 + (n / 10);
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < (row - 1) - i; j++) {
            printf(" ");
        }
        for (int j = 0, k = 0; j < n - (2 * (row - 1)) + (i * 2); j++, k++) {
            if(k<mid)
                printf("%c", kata[k]);
            else{
                k = 0;
                printf("%c", kata[k]);
            }
        }
        for (int j = 0; j < ((row * 2) - 1) - (2 * i); j++) {
            printf(" ");
        }
        for (int j = 0, k = mid; j < n - (2 * (row - 1)) + (i * 2); j++, k++) {
            if(k<m)
                printf("%c", kata[k]);
            else{
                k = mid;
                printf("%c", kata[k]);
            }
        }
        printf("\n");
    }
    
    int broken = n;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0, k = 0, l = mid; j < (n * 2 + 1) - (2 * i); j++, k++) {
            if(i < n) {
                if(j == broken - 1 || j == broken) {
                    int minus = n%2 == 0 ? 2 : 0;
                    if(j < (n * 2 + 1) - (2 * i) - minus){
                        printf(" ");
                    }
                } else {
                    if(j<broken){
                        if(k<mid)
                            printf("%c", kata[k]);
                        else{
                            k = 0;
                            printf("%c", kata[k]);
                        }
                    }else{
                        if(l<m)
                            printf("%c", kata[l]);
                        else{
                            l = mid;
                            printf("%c", kata[l]);
                        }
                        l++;
                    }
                    
                }
            } else {
                if(n%2 == 0){
                    printf("%c", kata[0]);
                }else{
                    printf("%c", kata[mid]);
                }
            }
        }
        broken = i % 2 == 1 ? broken - 2 : broken;
        printf("\n");
    }
    
    return 0;
}