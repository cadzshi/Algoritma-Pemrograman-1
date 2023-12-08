/*Saya Muhammad Hilmy Rasyad Sofyan NIM 2100187 mengerjakan soal tugas praktikum 3 dalam mata kuliah 
algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. 
Aamiin.
*/
//ini adalah perpustakaan
#include<stdio.h>
#include<math.h>

//bungkusan buat isi lingkaran kaya jari jari (r), kordinat (x,y)
typedef struct{
    int r,x,y;
} lingkaran;

//bungkusan buat operasi lingkaran dalemnya ada luas, keliling, sama persen
typedef struct{
    double luas, keliling, persen;
} operasi;

//bungkusan buat konstanta dinamain digit karena bakal dibagi bagi perdigit
typedef struct{
    int k;
} digit;

//main
int main(){
    //lingkaran nih ada anaknya namanya l1 dan l2
    lingkaran l1,l2;

    //operasi juga dibagi dua jadi buat ling1 dan ling2
    operasi ling1,ling2;

    //digit dibagi jadi tiga ada k1,k2,k3 yang melambangkan digit1, digit2, digit3
    digit k1,k2,k3;

    //buat titik pusat sama xy
    int tikpus,XY;
    int kons,perc; //ini buat konstanta sama persen (percentage)
    char huruf; //ini buat huruf 

    //konstanta yang agak agak sih ini butuh 2 hari bertapa biar work
    scanf("%d", &kons); //buat input kons

    //rumus biar bisa misahin digit konstanta, ini mah day 1 juga work tapi pas masuk switch defaultnya ga jalan jalan, sekarang aman sih
    k1.k = kons/100; //biar tau digit 1
    k2.k = kons % 100; //biar tau digit 2 awalnya di modulo dulu habis itu hasilnya dibagi 10
    k2.k = k2.k / 10;
    k3.k = kons % 10; //biar tau digit 3

    //ini buat input selain kons banyak lah isinya
    scanf("%d %d %d %d %d %d %c %d", &l1.r, &l1.x, &l1.y, &l2.r, &l2.x, &l2.y, &huruf, &perc);
    

    //average titik pusat enjoyer
    XY = ((l1.x - l2.x)*(l1.x - l2.x)) + ((l1.y - l2.y)*(l1.y - l2.y));
    tikpus = sqrt(XY);


    //rumus rumus untuk menghitung lingkaran
    double pi = 3.14;

    ling1.luas = pi * l1.r * l1.r;
    ling2.luas = pi * l2.r * l2.r;
    ling1.keliling = 2 * pi * l1.r;
    ling2.keliling = 2 * pi * l2.r;

    ling1.persen = perc * ling1.luas;
    ling1.persen = ling1.persen / 100;
    ling2.persen = perc * ling2.luas;
    ling2.persen = ling2.persen/100;
    //kayanya udah jelas ini isinya apa aja hwhw

    
//nah sekarang masuk ke switch yang sedikit meresahkan
//switch digit pertama
    switch (k1.k){ 
        case 1: //kalo si digit pertamaa ternyata 1 maka nampilin jumlah luas lingkaran 1 dan lingkaran 2
        printf("ELuas AB: %0.2lf cm2\n", ling1.luas + ling2.luas);
        break;
        case 2: //HAH 2??? oke jumlah keliling
        printf("EKeliling AB: %0.2lf cm\n", ling1.keliling + ling2.keliling);
        break;
        case 3: //eh 3 dong ternyataa yaudah nampilin titik pusat
        printf("Jarak AB: %d satuan\n", tikpus);
        break;
        default: //waduh selain 1,2,3 nih, nampilin luas lingkaran huruf x persen
            /* setelah menghabiskan waktu bertapa selama 2 hari dan bertanya pada gugel namun tidak ada jawaban
                dan akhirnya bertanya kepada para lord saya pun menyimpulkan bawha nested switch saya tidak bisa
                diandalkan dan akhirnya pake if else saja */
            //ini buat cek yang mau diitung lingkaran A atau B
            if (huruf == 'A'){ //kalo A berarti nampilin persen * luas lingkaran 1
                printf("Luas %d%c %c: %.2f cm2\n", perc, '%', huruf, ling1.persen); 
            } else { //kalo B berarti nampilin persen * luas lingkaran 2 (pake else karena ga ditunjukkin kalo selain B harus begimana)
                printf("Luas %d%c %c: %.2f cm2\n", perc, '%', huruf, ling2.persen);
            }
        break;
    }

//switch digit kedua
    switch (k2.k){
        case 1: //kalo digit kedua = 1 maka nampilin jumlah luas
        printf("ELuas AB: %0.2lf cm2\n", ling1.luas + ling2.luas);
        break; //kalo digit kedua = 2, nampilin jumlah keliling
        case 2:
        printf("EKeliling AB: %0.2lf cm\n", ling1.keliling + ling2.keliling);
        break;
        case 3: //kalo tiga nampilin titik pusat
        printf("Jarak AB: %d satuan\n", tikpus);
        break;
        default: //bukan ketiganya? ya nampilin persen luas lingkaran A atau B
             if (huruf == 'A'){
                printf("Luas %d%c %c: %.2f cm2\n", perc, '%', huruf, ling1.persen);
            } else {
                printf("Luas %d%c %c: %.2f cm2\n", perc, '%', huruf, ling2.persen);
            }
        break;
    }

//switch digit ketiga
    switch (k3.k){
        case 1: //kalo digit ketiga isinya satu ya nampilin jumlah luas
        printf("ELuas AB: %0.2lf cm2\n", ling1.luas + ling2.luas);
        break;
        case 2: //kalo dua ya nampilin jumlah keliling
        printf("EKeliling AB: %0.2lf cm\n", ling1.keliling + ling2.keliling);
        break;
        case 3: //kalo tiga titik pusat lah
        printf("Jarak AB: %d satuan\n", tikpus);
        break;
        default: //kalo selain ketiganya ya nampilin persen luas lingkaran A atau B
             if (huruf == 'A'){
                printf("Luas %d%c %c: %.2f cm2\n", perc, '%', huruf, ling1.persen);
            } else {
                printf("Luas %d%c %c: %.2f cm2\n", perc, '%', huruf, ling2.persen);
            }
        break;
    }

    
/* sedikit cerita awalnya mau make nested switch tapi ga work terus dan akhirnya malah make if else*/

    return 0;
    
}