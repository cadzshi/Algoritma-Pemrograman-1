#include "head.h"

//prosedur misahin kalimat
void pisahkalimat(int n, char kalimat[201][201])
{
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (kalimat[i][j] != '#' && kalimat[i][j] != '\0')
        {
            ariasonnet[i][j] = kalimat[i][j];   //buat kalimat awal sebelum #
            j++;
        }
        ariasonnet[i][j] = '\0';
        int k = 0;
        while (kalimat[i][j + 1] != '#' && kalimat[i][j] != '\0')
        {
            canon[i][k] = kalimat[i][j + 1];    //buat kalimat tengah diantara #
            j++;
            k++;
        }
        canon[i][k] = '\0';
        int l = 0;
        while (kalimat[i][j] != '\0')
        {
            ariasonnet1[i][l] = kalimat[i][j + 2];  //buat kalimat terakhir setelah #
            l++;
            j++;
        }
        ariasonnet1[i][l] = '\0';
        
    }
}
//prosedur ngapus _ underskor
void hapus(int n)
{
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        int j = 0;
        while (ariasonnet[i][j] != '\0') 
        {

            if (ariasonnet[i][j] == '_')
            {
                j++;
            }
            ariasonnetbaru[i][k] = ariasonnet[i][j];    //kalimat awal, dimasukin ke array baru

            j++;
            k++;
        }
        ariasonnet[i][k] = '\0';
    }
    for (int i = 0; i < n; i++) 
    {
        int k = 0;
        int j = 0;
        while (ariasonnet1[i][j] != '\0')
        {

            if (ariasonnet1[i][j] == '_')
            {
                j++;
            }
            ariasonnet1baru[i][k] = ariasonnet1[i][j];  //kalimat akhir, dimasukkin array baru juga

            j++;
            k++;
        }
        ariasonnet1[i][k] = '\0';
    }
}

//prosedur sorting kalimat, contoh dacb jadi abcd
void sortingkalimat(int n)
{
    //ini buat kalimat awal
    char temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(ariasonnetbaru[i]) - 1; j++)
        {
            for (int k = j + 1; k < strlen(ariasonnetbaru[i]); k++)
            {
                if (ariasonnetbaru[i][j] >= ariasonnetbaru[i][k]) 
                {
                    temp = ariasonnetbaru[i][j];           
                    ariasonnetbaru[i][j] = ariasonnetbaru[i][k]; 
                    ariasonnetbaru[i][k] = temp;           
                }
            }
        }
    }
    //ini buat kalimat akhir
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < strlen(ariasonnet1baru[i]) - 1; j++) 
        {
            for (int k = j + 1; k < strlen(ariasonnet1baru[i]); k++)
            {
                if (ariasonnet1baru[i][j] >= ariasonnet1baru[i][k])
                {
                    temp = ariasonnet1baru[i][j];
                    ariasonnet1baru[i][j] = ariasonnet1baru[i][k];
                    ariasonnet1baru[i][k] = temp;
                }
            }
        }
    }
}

//prosedur anagram kalimat awal sama kalimat akhir
void cekanagram(int n)
{
    jumlahanagram = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < strlen(ariasonnetbaru[i]); j++)
        {   
            //dibandingin, kalo sama 
            if (strcmp(ariasonnetbaru[i], ariasonnet1baru[i]) == 0) 
            {
                jumlah[i] = 1; //nilai 1
            }
            else
            {
                jumlah[i] = 0;
            }
        }
    }

}
//prosedur palindrom buat kalimat tengah
void cekpalindrom (int n)
{
    for (int i = 0; i < n; i++)
    {
        panjangkata[i] = strlen(canon[i]);
        batas[i] = panjangkata[i] / 2;
        status[i] = 0;

        int j = 0;
        int k = panjangkata[i] - 1;

        while (status[i] == 0 && j < batas[i])
        {
            if(canon[i][j] == canon[i][k])
            {
                j++;
                k--;
            }
            else
            {
                status[i] = 1; 
            }
        }
        //kalo status 1 berarti bukan palindrom atau nilainya 0 
        if (status[i] == 1)
        {
            jmlp[i] = 0;
        }
        else
        {
            jmlp[i] = 1;
        }
    }
}

//prosedur yes atau no ini masih salah
void yesno (int n)
{
    for (int i = 0; i < n; i++)
    {
        //sesuai syarat di soal
        if ((jumlah[i] == 1 && jmlp[i] == 1) || (jumlah[i] == 0 && jmlp[i] == 0))
        {
            printf("NO\n");
        }
        else 
        {
            printf("YES\n");
        }
    }
}