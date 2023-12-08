#include<stdio.h>

/* //soal 1
typedef struct{
    int nume;
    int deno;
}pecahan;

int main(){
    pecahan p1, p2, p3, p4;

    printf("masukkan angka pembilang penyebut: ");
    scanf("%d %d", &p1.nume, &p1.deno);
    printf("masukkan angka pembilang penyebut: ");
    scanf("%d %d", &p2.nume, &p2.deno);

    p3.deno = p1.deno * p2.deno;
    p3.nume = (p3.deno / p1.deno) * p1.nume +  (p3.deno / p2.deno) * p2.nume; 

    printf("hasil pertambahan pecahan adalah pembilang: %d penyebut: %d\n", p3.nume, p3.deno);
    */

   //soal 2
typedef struct{
    int nim, nilai;
   }mahasiswa;

int main(){
    mahasiswa mhs1, mhs2, mhs3;

    printf("NIM 1: ");
    scanf("%d", &mhs1.nim);
    printf("Nilai 1: ");
    scanf("%d", &mhs1.nilai);
    printf("NIM 2: ");
    scanf("%d", &mhs2.nim);
    printf("Nilai 2: ");
    scanf("%d", &mhs2.nilai);
    printf("NIM 3: ");
    scanf("%d", &mhs3.nim);
    printf("Nilai 3: ");
    scanf("%d", &mhs3.nilai);

    if(mhs1.nilai > mhs2.nilai && mhs1.nilai > mhs3.nilai)
    {
        printf("nilai mahasiswa 1 paling besar: %d NIM: %d\n", mhs1.nilai, mhs1.nim);
    }
    else if(mhs2.nilai > mhs1.nilai && mhs2.nilai > mhs3.nilai)
    {
        printf("nilai mahasiswa 2 paling besar: %d NIM: %d\n", mhs2.nilai, mhs2.nim);
    }
    else
    {
        printf("nilai mahasiswa 3 paling besar: %d NIM: %d\n", mhs3.nilai, mhs3.nim);
    }
    return 0;
}