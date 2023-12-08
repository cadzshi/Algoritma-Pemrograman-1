#include <stdio.h>
#include <string.h>

/*
//sintaks do-while loop
int main()
{
    int num, sum = 0;
    do
    {
        printf("Masukan angka : ");
        scanf("%d", &num);
 
        sum += num;
 
    } while (num != 0);
   
    printf("Total : %d\n", sum);
 
    return 0;
}
*/

/*
//deklarasi string
char nama[10]; //<-----string 9 karakter

//inisialisasi string
char nama1[4] = "Van";  //<---------------------cara 1
char nama1[4] = {'V', 'a', 'n', '\0'};  //<-----cara 2

//input dan print string
scanf("%s", &nama);
//atau
scanf("%s", nama);

printf("%s", nama);
*/


//operasi string
/*
//strlen (string length) berfungsi untuk mendapatkan nilai dari suatu string
int main()
{
    char nama[50] = "vania";
    int panjang = strlen(nama); //panjang akan berisi 5

    printf("Panjang nama : %d karakter\n", panjang);

    return 0;
}
*/
/*
//strcpy (string copy) berfungsi untuk melakukan copy isi string ke string lainnya
int main ()
{
    char nama[50];
    scanf("%s", nama);

    char nama2[50];
    strcpy(nama2, nama);

    printf("nama2 : %s\n", nama2);
    return 0;
}
*/

//strcmp (string compare) berfungsi untuk membandingkan isi 2 string yang berbeda
int main()
{
    char nama1[50] = "Najma";
    char nama2[50] = "Mia";

    int cmp1 = strcmp(nama1, "Najma");
    int cmp2 = strcmp(nama1, nama2);
    int cmp3 = strcmp(nama2, nama1);
   
    printf("Nilai ascii identik =  %d\n", cmp1);
    printf("Nilai ascii nama1 lebih besar =  %d\n", cmp2);
    printf("Nilai ascii nama1 lebih kecil =  %d\n", cmp3);

    return 0;
}

/*
int main()
{
    char str[100];
    int n;
    do
    {
        scanf("%d", &n);
    } while (n != 1);
    
    return 0;
}
*/



/*
//soal 2
int main()
{
    char kata[100];
    int i, j, spasi;

    scanf("%s", kata);
    if (strlen(kata) % 2 == 0)
    {
        for(i = strlen(kata); i >= strlen(kata) / 2; i--)
        {
            printf("%c", kata[i]);  
        }
        printf("\n");
        for(j = (strlen(kata) - 1 ) / 2; j >= 0; j--)
        {
            printf("%c", kata[j]);  
        }
    }
    else
    {
        for(i = strlen(kata); i > strlen(kata) / 2; i--)
        {
            printf("%c", kata[i]);  
        }
        printf("\n");
        for(j = strlen(kata)/ 2; j >= 0; j--)
        {
            printf("%c", kata[j]);  
        }
    }
    
    return 0;
}
*/

