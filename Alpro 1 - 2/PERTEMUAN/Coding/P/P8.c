#include <stdio.h>
#include <string.h>

/*
//sintaks array of string
typedef struct {
    char kata[50];
} string;

int main()
{
    int n, i, j;
    scanf("%d", &n);
    string arr[n];
    
    for(i = 0;i < n;i++)
    {
        scanf("%s", &arr[i].kata);
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0; j < strlen(arr[i].kata);j++)
        {
            printf("%c\n", arr[i].kata[j]);
        }
    }
    return 0; 
}
*/

//representasi array 2 dimensi
int main()
{
    int n, i, j;
    scanf("%d", &n);
    char arr[n][50];

    for(i = 0;i < n;i++)
    {
        scanf("%s", &arr[i]);
    }

    for(i = 0;i < n;i++)
    {
        for (j = 0; j < strlen(arr[i]); j++)
        {
            printf("%c", arr[i][j]);
        }
    }
    return 0;
}

/*
//menghitung huruf a yang ada didalam array of string
int main()
{
    int n, i, j;
    int jumlah = 0;
    scanf("%d", &n);
    char arr[n][50];

    for(i = 0;i < n;i++)
    {
        scanf("%s", &arr[i]);
    }

    for(i = 0;i < n;i++)
    {
        for (j = 0; j < strlen(arr[i]); j++)
        {
            if (arr[i][j] == 'a' || arr[i][j] == 'A')
            {
                jumlah++;
            }
        }
    }
    printf("Jumlah huruf a ada sebanyak %d", jumlah);
    return 0;
}
*/
//
/*
//cek apakah array memiliki huruf a
int main()
{
    int n, i, j;
    int status = 1;
    scanf("%d", &n);
    char arr[n][50];

    for(i = 0;i < n;i++)
    {
        scanf("%s", &arr[i]);
    }

    i = 0;
    while ((i < n) && (status == 1))
    {
        int ada = 0;
        j = 0;
        while ((j < strlen(arr[i])) && (ada == 0))
        {
            if (arr[i][j] == 'a' || arr[i][j] == 'A')
            {
                ada = 1;
            }
            else
            {
                j++;
            }
        }
        if (ada == 0)
        {
            status = 0;
        }
        else
        {
            i++;
        }
    }

    if (status == 0)
    {
        printf("tidak valid\n");
    }
    else
    {
        printf("valid\n");    
    }
    return 0;
}
*/
/*
//pola tangga
int main()
{
    int n, i, j, spasi = 0;
    scanf("%d", &n);
    char arr[n][50];

    for (i = 0;i < n;i++)
    {
        scanf("%s", &arr[i]);
    }

    for (i = 0;i < n;i++)
    {
        for (j = 0; j < spasi; j++)
        {
            printf("-");
        }
        printf("%s\n", arr[i]);
        spasi += strlen(arr[i]);
    }

    return 0;
}
*/

//soal 1

