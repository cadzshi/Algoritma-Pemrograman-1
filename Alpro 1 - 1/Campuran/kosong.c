#include <stdio.h>

int main() {

    int i, n, arr[n], min = 0;

    printf("size array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[2];

    for(i = 0; i < n; i += 2) {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("nilai min index genap: %d", min);

    return 0;
}



