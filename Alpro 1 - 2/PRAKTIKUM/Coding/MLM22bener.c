#include <stdio.h>

int main()
{
    int m = 0, n = 0;

    scanf("%d", &m);

    char arr[m];

    for (int i = 0; i < m; i++)
    {
        scanf(" %c", &arr[i]);

        if (arr[i] == 'a' || arr[i] == 'i' || arr[i] == 'u' || arr[i] == 'e' || arr[i] == 'o' ||
            arr[i] == 'A' || arr[i] == 'I' || arr[i] == 'U' || arr[i] == 'E' || arr[i] == 'O')
        {
            n++;
        }
    }

    printf("+");
    for (int i = 0; i < 2 * (2 * n - 1) * n; i++)
    {
        printf("-");
    }
    printf("+\n");

    for (int i = 0; i < n; i++)
    {
        int counter1 = 0, counter2 = m / 2;

        printf("|");
        for (int j = i * n + n; j < n * n; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * (i + 1) * n - n; j++)
        {
            printf("%c", arr[counter1]);

            counter1++;
            if (counter1 >= m / 2)
            {
                counter1 = 0;
            }
        }
        for (int j = 2 * (i + 1) * n; j < 2 * n * n; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * (i + 1) * n - n; j++)
        {
            printf("%c", arr[counter2]);

            counter2++;
            if (counter2 >= m)
            {
                counter2 = m / 2;
            }
        }
        for (int j = i * n + n; j < n * n; j++)
        {
            printf(" ");
        }
        printf("|\n");
    }

    for (int i = 0; i < 2 * n; i++)
    {
        printf("|");
        for (int j = 0; j < (n * 2 - 1) * n - 1 - i * 2; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 2; j++)
        {
            printf("*");
        }
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (n - 1) * n - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            if (i == n - 2 || i == n - 1)
            {
                if ((i == n - 2) && (j == 0 || j == n - 1))
                {
                    printf(" ");
                }
                else
                {
                    printf("^");
                }
            }
            else if (i == n || i == n + 1)
            {
                printf("=");
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = 0; j < (n - 1) * n; j++)
        {
            printf(" ");
        }
        printf("|\n");
    }

    printf("+");
    for (int i = 0; i < 2 * (2 * n - 1) * n; i++)
    {
        printf("-");
    }
    printf("+\n");

    printf("Harga Lukisan: %d Miliar\n", n);

    return 0;
}