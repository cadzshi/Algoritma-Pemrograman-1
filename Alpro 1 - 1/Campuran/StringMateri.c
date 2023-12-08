#include <stdio.h>
#include <string.h>

/*
//hasilnya nanti jadi kebawah gitu
//ini pake cara pertama pake bungkusan
typedef struct{
char kata[50];
}string;

int main()
{
    int n, i, j;
    scanf("%d", &n);
    string arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%s", &arr[i].kata);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<strlen(arr[i].kata);j++)
        {
            printf("%c\n", arr[i].kata[j]);
        }
    }
return 0;
}
//atau gapake bungkusan
int main()
{
    int n, i, j;
    scanf("%d", &n);
    char arr[n][50];

    for(i=0;i<n;i++)
    {
    scanf("%s", &arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<strlen(arr[i]);j++)
        {
            printf("%c\n", arr[i][j]);
        }
    }
    return 0; 
}
*/

/*
//menghitung jumlah semua huruf 'a' yang ada di dalam array of string
//pake bungkusan
typedef struct{
char kata[50];
}string;

int main()
{
    int n, i, j, jumlah = 0;
    scanf("%d", &n);
    string arr[n];

    for (i = 0;i < n;i++)
    {
        scanf("%s", &arr[i].kata);
    }
    for (i = 0; i < n;i++)
    {
        for (j = 0;j < strlen(arr[i].kata);j++)
        {
            if(arr[i].kata[j] == 'a')
            {
                jumlah++;
            }
        }
    }
    printf("%d\n", jumlah);
    return 0;
}

//atau tanpa bungkusan
int main()
{
    int n, i, j, jumlah=0;
    scanf("%d", &n);
    char arr[n][50];

    for(i=0;i<n;i++)
    {
        scanf("%s", &arr[i]);
    }
    for (i = 0;i < n;i++)
    {
        for(j=0;j<strlen(arr[i]);j++)
        {
            if(arr[i][j] == 'a')
            {
                jumlah++;

            }
        }
    }
    printf("%d\n", jumlah);
    return 0;
}
*/
/* belom selese ga ngarti
//memeriksa apakah setiap string terdapat huruf a
//pake bungkusan
typedef struct{
char kata[50];
}string;

int main()
{
    int n, i, j, status = 1;
    i = 0;
    scanf("%d", &n);
    string arr[n];

        while((i < n) && (status == 1))
        {
            int ada = 0;
            j = 0;
            while((j<strlen(arr[i].kata)) && (ada == 0))
            {
                if(arr[i].kata[j] == 'a')
                {
                    ada = 1;
                }
                else
                {
                    j++;
                }
            }
            if(ada == 0)
            {   
                status = 0;
            }   
            else
            {
            i++;
            }
        }

    if(status == 0)
    {
        printf("tidak valid\n");
    }
    else
    {
        printf("valid\n");
    }
    return 0;
}
//atau
int main()
{
    int n, i, j, status = 1;
    scanf("%d", &n);
    string
    i = 0;
    while((i < n) && (status == 1))
    {
        int ada = 0;
        j = 0;
            while((j<strlen(arr[i])) && (ada == 0))
            {
                if(arr[i][j] == 'a')
                {
                    ada = 1;
                }
                else
                {
                    j++;
                }
            }
        if(ada == 0)
        {
            status = 0;
        }
        else
        {
            i++;
        }
    }
    if(status == 0)
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

//tangga string
//pake bungkusan
typedef struct{
char kata[50];
}string;

int main()
{
    int n, i, j, spasi=0;
    scanf("%d", &n);
    string arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%s", &arr[i].kata);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<spasi;j++)
        {
            printf(" ");
        }
        printf("%s\n", arr[i].kata);
    spasi = spasi + strlen(arr[i].kata);
    }
    return 0;
}
//atau tanpa bungkusan
int main()
{
    int n, i, j, spasi=0;
    scanf("%d", &n);
    char arr[n][50];
    for(i = 0;i < n;i++)
    {
        scanf("%s", &arr[i]);
    }
    for(i = 0;i < n;i++)
    {
        for(j=0;j<spasi;j++)
        {
            printf(" ");
        }
        printf("%s\n", arr[i]);
        spasi = spasi + strlen(arr[i]);
    }
    return 0; 
}