#include <stdio.h>

/*
void main()
{
    int n;
    scanf("%i", &n);
    int input[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &input[i]);
    }
    
    int max1 = -999999, min1 = 999999;
    for (int i = 0; i < n; i++)
    {
        if (input[i] > max1)
        {
            max1 = input[i];
        }
        if (input[i] < min1)
        {
            min1 = input[i];
        }
    }
    int max2 = -999999, min2 = 999999;
    for (int i = 0; i < n; i++)
    {
        if (input[i] > max2 && input[i] < max1)
        {
            max2 = input[i];
        }
        if (input[i] < min2 && input[i] > min1)
        {
            min2 = input[i];
        }
    }
    
    printf("Nilai minimum kedua : %i\n", min2);
    printf("Nilai maksimum kedua : %i\n", max2);
}
*/

void main()
{
    int n;
    scanf("%i", &n);
    int input[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &input[i]);
    }

    int max = -999999, min = 999999;
    int indexMax = 0, indexMin = 0;
    for (int i = 0; i < n; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
            indexMax = i;
        }
        if (input[i] < min)
        {
            min = input[i];
            indexMin = i;
        }
    }
    
    printf("Indeks nilai minimum : %i\n", indexMin);
    printf("Indeks nilai maksimum : %i\n", indexMax);
}
