#include<stdio.h>
#include<string.h>

/*//do whilenya
int main()
{
    char c;
    do
    {
        printf("apakah anda akan berputar lagi? (y/n)\n");
        scanf("%c", &c);
    }while (c == 'y');

    return 0;
}
*/

/*//operasi pada string-STRLEN
//strlen(str)-menghitung banyaknya karakter pada string str 
int main()
{
    char str[50];
    scanf("%s", &str);
    int i;
    printf("%s\n, str");
    for(i = 0;i < strlen(str);i++)
    {
        printf("%c\n", str[i]);
    }
    return 0;
}
*/

/*//operasi pada string-STRCPY
//strcpy(str2, str1)-menyalin isi str1 ke str2
int main()
{
    char str1[50], str2[50];
    scanf("%s", &str1);
    strcpy(str2, str1);
    int i;
    for(i = 0;i < strlen(str2);i++)
    {
        printf("%c\n", str2[i]);
    }
    return 0;
}
*/

/*//strcmp(str1, str2)- membandingkan isi str1 dan str2
int main()
{
    char str1[50], str2[50];
    scanf("%s", &str1);
    scanf("%s", &str2);
    if(strcmp(str1, str2) == 0)
    {
        printf("string sama\n");
    }
    else
    {
        printf("string tidak sama\n");
    }
    return 0;
}
*/

/*//menghitung huruf vokal
int main()
{
    char str[50];
    scanf("%s", &str);
    int i, vokal = 0;
    for(i=0; i<strlen(str);i++)
    {
            if(str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o')
            {
                vokal++;
            }
    }
    printf("%d\n", vokal);
    return 0;
}
*/

//pola huruf
int main()
{
    char str[50];
    scanf("%s", &str);
    int i, j, spasi = 0;

    for(i = 0; i < strlen(str);i++)
    {
        for(j = 0;j < spasi;j++)
        {
        printf(" ");
        }
        printf("%c\n", str[i]);
        spasi++;
    }
    
    spasi = 0;
    for(i = 0; i < strlen(str);i++)
    {
        for(j = strlen(str);j > spasi;j--)
        {
        printf(" ");
        }
        printf("%c\n", str[i]);
        spasi++;
    }

    spasi = 0;
    for(i = strlen(str); i >= 0;i--)
    {
        spasi++;
        for(j = strlen(str);j >= spasi;j--)
        {
        printf(" ");
        }
        printf("%c\n", str[i]);
        
    }
    return 0;
}