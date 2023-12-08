#include <stdio.h>

int main()
{
    char c;
    char alpha[3];
    char num[3];
    int a = 0, b = 0, i;

    for (i = 0; i < 6; i++)
    {
        scanf(" %c", &c);
        getchar();
        if (97 <= c && c <= 122)
        {
            alpha[a++] = c;
        
        }
        if (48 <= c && c <= 57)
        {
            num[b++] = c;
            
        }
    }
    
    if (a == 3 && b == 3)
    {
        for (i = 0; i < 3; i++)
        {
            printf("%c\n%c\n", alpha[i], num[i]);
        }
    }
    else
    {
        printf("tidak valid\n");
    }
    
    return 0;
}