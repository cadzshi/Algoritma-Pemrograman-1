#include "head.h"

//fungsi mencari resolusi
int resolusiTerbesar (data x[])
{
    int pjg = 0;    //variabel yang menyimpan resolusi terbesar
    for (int i = 0; i < n; i++)
    {
        if (x[i].s1 > x[i].s2 && x[i].s1 > x[i].s3) //jika s1 lebih dari keduanya maka
        {
            x[i].resolusi = x[i].s1;
        }
        else if (x[i].s2 > x[i].s1 && x[i].s2 > x[i].s1)    //jika s2 lebih dari kedua
        {
            x[i].resolusi = x[i].s2;
        }
        else if (x[i].s3 > x[i].s1 && x[i].s3 > x[i].s2)    //jika s3 lebih dari keduanya
        {
            x[i].resolusi = x[i].s3;
        }
        
        if (x[pjg].resolusi < x[i].resolusi)    //dimasukkan ke variabel jpg
        {
            pjg = i;
        }
        
        
        return pjg; //mengmbalikan fungsi
    }
    
    
    
}