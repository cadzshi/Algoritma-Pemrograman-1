#include<stdio.h>
/*
Diberikan masukan array tipe data terstruktur yang berisi nim, nilai dan kelas. 
Ubahlah nilai menjadi bentuk biner lalu hitung berapa banyak angka 1 dalam binernya. 
Jika angka 1 itu ada yang berjumlah 3, maka tampilkan “Ada orang Istimewa”, 
jika tidak ada tampilkan “Tidak ada orang istimewa”.
*/

//deklarasi bungkusan
typedef struct{
  int nim, nilai, biner[8], pj; //pj = panjang biner, jml1 = jumlah angka 1 dalam biner
  char kelas;
}data_mhs;

int main(){

  int i, h, n;
  scanf("%d", &n); //masukan user untuk jumlah data yang akan diinput

  //deklarasi bungkusan data_mhs dengan nama depilkom sebanyak n
  data_mhs depilkom[n]; 

  //masukan user untuk data nim, kelas, dan nilai
  for(i = 0; i < n; i++){
    scanf("%d %c %d", &depilkom[i].nim, &depilkom[i].kelas, &depilkom[i].nilai);
  }

  //konversi biner
   int temp, k;
   for(i=0; i<n; i++){
        temp = depilkom[i].nilai;
        k = 0;
        while(temp > 0){
            depilkom[i].biner[k] = temp % 2;
            temp /= 2;
            k++;
        }
        depilkom[i].pj = k;
    }

    //menampilkan data
    printf("\nHasil Konversi");
    int jml1 = 0, cek;
    for(i=0; i<n; i++){
        printf("\n%d %c %d ", depilkom[i].nim, depilkom[i].kelas, depilkom[i].nilai);
        //menampilkan koversi biner
        for(k = depilkom[i].pj - 1; k >= 0; k--){
            printf("%d", depilkom[i].biner[k]);  
            //pengecekan angka 1 dalam biner
            if(depilkom[i].biner[k] == 1){
                jml1++;
            }
            //pengecekan jumlah angka 1 dalam biner
            if(jml1 == 3){
                cek = 1;
            }
        }
    }

    //Menampilkan ada orang istimewa atau tidak
    if(cek == 1){
        printf("\nAda orang istimewa\n");
    }else{
        printf("\nTidak ada orang istimewa\n");
    }   

  return 0;
}
