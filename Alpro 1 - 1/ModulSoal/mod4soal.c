#include <stdio.h>

int main()
{
    int n, i, j, baris, kolom;
    scanf("%d", &n);

/*    //soal nomer 1
    for (i = 1; i <= n; i++)
    {
    for (j = n; j >= i; j--)
        {
        printf("*");
        }
        printf("\n");
    }
    /*
    5   
    *****
    ****
    ***
    **
    *
    */

/*   //soal nomer 2
    for (i = 1; i <= n; i++)
    {
        for (j = n - 1; i <= j; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    /*
    5
    *****
   *****
  *****
 *****
*****
    */

/*    //soal nomer 3
    for (i = 1; i <= n; i++)
    {
        for (j = n - 1; i <= j; j--)
        {
            printf(" ");
        }
        for (j = 1; n >= j; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    /*
    5
    *****
   *****
  *****
 *****
*****
 *****
  *****
   *****
    *****
    */
   
/*    //soal no 4                                     
    for (baris = 0; baris < n;baris++)              
    {                                                   
        for(kolom = 0; kolom < n;kolom++)
        {
            if(kolom == baris)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    /*
    5
    10000
    01000
    00100
    00010
    00001
    */
    return 0;
}