/*Saya Muhammad Hilmy Rasyad Sofyan NIM 2100187 mengerjakan soal tugas praktikum 5 dalam mata kuliah 
algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
Aamiin.
*/


#include<stdio.h>

//program utama
void main(){
    //deklarasi
    int n,m; //buat berapa banyak array yang dibuat 

    scanf("%d", &n); //input buat berapa banyak array yang dibuat (array pertama)

    char x[n]; //array pertama
    int i,j,cocok; //buat angka apa sih itu namanya urutan array? terus cocok itu buat counter apakah dua array itu beda terus senilai
    //buat input ini mah jelas (array pertama)
    for(i=0;i<n;i++){
        scanf(" %c", &x[i]);
    }

    scanf("%d", &m); //input buat berapa banyak array yang dibuat (array kedua)
    char y[m]; //array kedua
    //buat input array kedua
    for(j=0;j<m;j++){
        scanf(" %c", &y[j]);
    }

    cocok = 0; //counter cocok
    if(n == m){ //kalo besar array sama
        
        for(i=0, j=0;i<n && j<m;i++, j++){
            //kalo array pertama dan array kedua beda charnya (yang satu angka yang satu huruf)
            if(((x[i]>='A' && x[i]<='I')&&(y[j]>=49 && y[j]<=57))||
              ((y[j]>='A' && y[j]<='I')&&(x[i]>=49 && x[i]<=57))){
                
                //buat print isi array pertama dan kedua
                for(i=0, j=0;i<n-1 && j<m-1;i++, j++){
                    printf("%c %c ", x[i], y[j]);
                } //buat ngindarin whitespace di akhir
                for(i=n-1, j=m-1;i<n && j<m;i++, j++){
                    printf("%c %c", x[i], y[j]);
                }
                
                //buat sorting array (descending order) array pertama
                for (i = 0; i < n; i++)
                {
                    int temp;
                    for (j = i + 1; j < n; j++)
                    {
                    if (x[i] < x[j])
                    {
                        temp = x[i];
                        x[i] = x[j];
                        x[j] = temp;
                    }
                    }
                }
                //buat sorting descending order array kedua
                for (j = 0; j < n; j++)
                {
                    int temp;
                    for (i = j + 1; i < n; i++)
                    {
                    if (y[j] < y[i])
                    {
                        temp = y[i];
                        y[i] = y[j];
                        y[j] = temp;
                    }
                    }
                }

                
                for(i=0, j=0;i<n && j<m;i++, j++){
                    //buat cek apakah array satu dan array kedua itu senilai, kalo iya berarti counter cocok nambah dan kalo tidak counternya balik ke 0
                    if((x[i] == 'A' && y[j] == 49)||(y[j] == 'A' && x[i] == 49)){
                        cocok+=1;
                    }

                    else if((x[i] == 'B' && y[j] == 50)||(y[j] == 'B' && x[i] == 50)){
                        cocok+=1;
                    }

                    else if((x[i] == 'C' && y[j] == 51)||(y[j] == 'C' && x[i] == 51)){
                        cocok+=1;
                    }

                    else if((x[i] == 'D' && y[j] == 52)||(y[j] == 'D' && x[i] == 52)){
                        cocok+=1;
                    }

                    else if((x[i] == 'E' && y[j] == 53)||(y[j] == 'E' && x[i] == 53)){
                        cocok+=1;
                    }

                    else if((x[i] == 'F' && y[j] == 54)||(y[j] == 'F' && x[i] == 54)){
                        cocok+=1;
                    }

                    else if((x[i] == 'G' && y[j] == 55)||(y[j] == 'G' && x[i] == 55)){
                        cocok+=1;
                    }

                    else if((x[i] == 'H' && y[j] == 56)||(y[j] == 'H' && x[i] == 56)){
                        cocok+=1;
                    }

                    else if((x[i] == 'I' && y[j] == 57)||(y[j] == 'I' && x[i] == 57)){
                        cocok+=1;
                    }

                    //kalo misal ternyata tidak senilai
                    else{
                        cocok = 0;
                    }

                    

                }
                //kalo cocok jumlahnya ternyata sama kayaa n makaaaa.... CARLA SUKA SAMA TECHI YEAAAAa
                if(cocok==n){
                    printf("\n");
                    printf("Nilai kartu mereka cocok,\n");
                    printf("Carla menyukai balik Techi.\n");
                }
                //kalo cocok jumlahnya ga sama kaya n, YAHAHA TECHI JADI SEDBOY (maap bang satria tidak bermaksud)
                else if (cocok != n){
                    printf("\n");
                    printf("Nilai kartu mereka tidak cocok,\n");
                    printf("Carla tidak menyukai Techi.\n");
                }
                

                
            }
            
            
            //kalo ternyata array satu dan dua isinya sejenis
            else {
                //buat print isi arraynya
                for(i=0, j=0;i<n-1 && j<m-1;i++, j++){
                    printf("%c %c ", x[i], y[j]);
                }//biar ga ada white space
                for(i=n-1, j=m-1;i<n && j<m;i++, j++){
                    printf("%c %c", x[i], y[j]);
                }
                //yahaha ternyata bersaudara
                printf("\n");
                printf("Kartu mereka sejenis,\n");
                printf("ternyata mereka bersaudara!\n");
                
            }

            
        }
                

        
    }
    //ini kalo kapasitas array keduanya beda
    else{
        //counter buat yang sejenis
        int alabama = 0;
        
        for(i=0, j=0;i<n && j<m;i++, j++){
            //kalo array pertama dan array kedua beda charnya (yang satu angka yang satu huruf)
            if(((x[i]>='A' && x[i]<='I')&&(y[j]>=49 && y[j]<=57))||
              ((y[j]>='A' && y[j]<='I')&&(x[i]>=49 && x[i]<=57))){
                
                //buat sorting kaya yang atas tadi
                for (i = 0; i < n; i++)
                {
                    int temp;
                    for (j = i + 1; j < n; j++)
                    {
                    if (x[i] < x[j])
                    {
                        temp = x[i];
                        x[i] = x[j];
                        x[j] = temp;
                    }
                    }
                }

                for (j = 0; j < n; j++)
                {
                    int temp;
                    for (i = j + 1; i < n; i++)
                    {
                    if (y[j] < y[i])
                    {
                        temp = y[i];
                        y[i] = y[j];
                        y[j] = temp;
                    }
                    }
                }

                for(i=0, j=0;i<n && j<m;i++, j++){
                    //buat yang senilai
                    if((x[i] == 'A' && y[j] == 49)||(y[j] == 'A' && x[i] == 49)){
                        cocok+=1;
                    }

                    else if((x[i] == 'B' && y[j] == 50)||(y[j] == 'B' && x[i] == 50)){
                        cocok+=1;
                    }

                    else if((x[i] == 'C' && y[j] == 51)||(y[j] == 'C' && x[i] == 51)){
                        cocok+=1;
                    }

                    else if((x[i] == 'D' && y[j] == 52)||(y[j] == 'D' && x[i] == 52)){
                        cocok+=1;
                    }

                    else if((x[i] == 'E' && y[j] == 53)||(y[j] == 'E' && x[i] == 53)){
                        cocok+=1;
                    }

                    else if((x[i] == 'F' && y[j] == 54)||(y[j] == 'F' && x[i] == 54)){
                        cocok+=1;
                    }

                    else if((x[i] == 'G' && y[j] == 55)||(y[j] == 'G' && x[i] == 55)){
                        cocok+=1;
                    }

                    else if((x[i] == 'H' && y[j] == 56)||(y[j] == 'H' && x[i] == 56)){
                        cocok+=1;
                    }

                    else if((x[i] == 'I' && y[j] == 57)||(y[j] == 'I' && x[i] == 57)){
                        cocok+=1;
                    }
                    //kalo ga senilai
                    else{
                        cocok = 0;
                    }

                    

                }
                //buat yang senilai
                if(cocok==n){
                    printf("Nilai kartu mereka cocok,\n");
                    printf("Carla menyukai balik Techi.\n");
                }
                //kalo ternyata ada yang ga senilai
                else if (cocok != n){
                    printf("Nilai kartu mereka tidak cocok,\n");
                    printf("Carla tidak menyukai Techi.\n");
                }
            }
            //buat yang sejenis
            else {
                
               //yahaha alabama (seriously ini kok bisa long lost sister and brother gini)
               alabama+=1;
                
                
                
            }
            
        }
        //kalo ternyata sejenis ya printnya gini
        if (alabama > 0){
            printf("Kartu mereka sejenis,\n");
            printf("ternyata mereka bersaudara!\n");
        }


    }
    

    

    
}