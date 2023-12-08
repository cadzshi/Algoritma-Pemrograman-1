#include <stdio.h>
#include <math.h>
/*
//swtich case 1
int main() {
    char predikat; // variabel untuk menampung nilai predikat
    
    printf("Rentang Penilaian : \n");
    printf("1. 80 - 100 : A\n");
    printf("2. 60 - 80 : B\n");
    printf("3. 40 - 60 : C\n");
    printf("4. 20 - 40 : D\n");
    printf("5. 0 - 20 : E\n");
    printf("\nIsilah predikat anda sesuai pedoman rentang penilaian :");
    scanf(" %c", &predikat);
    printf("Keterangan : ");

    // memeriksa kondisi pada variabel predikat
    switch (predikat)
    {
    case 'A':
        printf("Sangat Baik\n");
        // perintah yang dijalankan jika nilai masukan user A
        break;
    case 'B':
        printf("Baik\n");
        // perintah yang dijalankan jika nilai masukan user B
        break;
    case 'C':
        printf("Cukup Baik\n");
        // perintah yang dijalankan jika nilai masukan user C
    break;
    case 'D':
        printf("Kurang Baik\n");
        // perintah yang dijalankan jika nilai masukan user D
        break;
    case 'E':
        printf("Tidak Baik\n");
        // perintah yang dijalankan jika nilai masukan user E
        break;
    default:
        printf("Predikat nilai anda tidak terdapat dalam pedoman rentang penilaian!\n");
        // perintah yang dijalankan jika tidak ada case (konstanta) yang bernilai sama seperti predikat masukan user
    break;
    }
    return 0;
}
*/
/*
//swtich case 2
int main() 
{
    int bil1 = 0, bil2 = 0;
    char operator;

    // bil1 - operator - bil2
    scanf("%d %c%d", &bil1, &operator, &bil2);
    // memeriksa kondisi variabel operator
    switch (operator)
    {
    case '+':
        printf("= %d\n", bil1 + bil2);
        // perintah yang dijalankan jika operasi yang dilakukan merupakan penjumlahan
        break;
    case '-':
        printf("= %d\n", bil1 - bil2);
        // perintah yang dijalankan jika operasi yang dilakukan merupakan pengurangan 
        break;
    case '*':
        printf("= %d\n", bil1 * bil2);
        // perintah yang dijalankan jika operasi yang dilakukan merupakan perkalian
        break;
    case '/':
        printf("= %d\n", bil1 / bil2);
        // perintah yang dijalankan jika operasi yang dilakukan merupakan pembagian 
        break;
    case '%':
        printf("= %d\n", bil1 % bil2);
        // perintah yang dijalankan jika operasi yang dilakukan merupakan modulus
        break;
    default:
        printf("Operator tidak dikenali!\n");
    // perintah yang dijalankan jika tidak ada case (konstanta) yang bernilai sama seperti operator masukan user
        break;
    }
    return 0;
}
*/
/*
//tipe data terstruktur 1
typedef struct
{
    int x; // Variabel untuk menampung titik koordinat x
    int y; // Variabel untuk menampung titik koordinat y
} titik; // Nama tipe data terstruktur

int main() 
{
    // Deklarasi Variabel
    titik koordinat_rumah; // Variabel untuk koordinat rumah
    titik koordinat_sekolah; // Variabel untuk koordinat sekolah
    int X, Y; // Variabel untuk menampung nilai garis tegak mendatar dan garis tegak vertikal
    float jarak; // Variabel untuk menampung nilai jarak

    // Meminta masukan dari user
    printf("Isilah titik koordinat alamat rumahmu.\n");
    printf("x : ");
    scanf("%d", &koordinat_rumah.x);
    printf("y : ");
    canf("%d", &koordinat_rumah.y);
    printf("Isilah titik koordinat alamat sekolahmu.\n");
    printf("x : ");
    scanf("%d", &koordinat_sekolah.x);
    printf("y : ");
    scanf("%d", &koordinat_sekolah.y);

    // Menghitung jarak dari rumah ke sekolah
    X = koordinat_sekolah.x - koordinat_rumah.x;
    Y = koordinat_sekolah.y - koordinat_rumah.y;
    jarak = (X * X) + (Y * Y);
    jarak = sqrt(jarak);

    if (jarak > 0 && jarak <= 10) // Jika jarak dari rumah ke sekolah berada dalam radius lebih dari 0 km sampai 10 km
    {
        printf("Selamat kamu diterima sebagai mahasiswa baru lewat jalur zonasi!\n");
    }
    else // Jika jarak dari rumah ke sekolah berada dalam radius lebih dari 10 km
    {
        printf("Maaf kamu tidak lolos jalur zonasi. Tetap semangat dan jangan putus asa!\n");
    }       
    return 0; // Menyatakan keluaran dari fungsi main() adalah 0
}
*/
/*
//tipe data terstruktur 2
typedef struct
{
    int id_jadwal; // Variabel untuk menampung id jadwal kereta api yang dipilih
    int jumlah_tiket; // Variabel untuk menampung banyak tiket yang dipesan
    char member; // Variabel untuk memeriksa kepemilikan kartu KAI
    int total_harga; // Variabel untuk menampung total harga pemesanan tiket kereta api
} jadwal_KA; // Nama Tipe Data Terstruktur

int main() 
{
    jadwal_KA booking; // Variabel untuk pemesanan tiket kereta api

    printf("______________________________________________________________________________________________\n");
    printf("|                                                                                              |\n");
    printf("|                             Pemesanan Tiket Kereta Api                                       |\n");
    printf("|______________________________________________________________________________________________|\n");
    printf("|                              Daftar Jadwal Kereta Api                                        |\n");
    printf("|==============================================================================================|\n");
    printf("| ID | Stasiun Asal | Stasiun Tujuan | Tanggal Keberangkatan |     Kelas     |      Harga      |\n");
    printf("|==============================================================================================|\n");
    printf("|  1 |    Bandung   |    Semarang    |    21 September 2022  |  Ekonomi (E)  |  Rp 310.000,00  |\n");
    printf("|  2 |    Jakarta   |    Surabaya    |    22 September 2022  |   Bisnis (B)  |  Rp 300.000,00  |\n");
    printf("|  3 |    Cirebon   |    Kuningan    |    20 September 2022  | Eksekutif (X) |  Rp 270.000,00  |\n");
    printf("|  4 |    Soreang   |    Majalaya    |    25 September 2022  |   Bisnis (B)  |  Rp 150.000,00  |\n");
    printf("|____|______________|________________|_______________________|_______________|_________________|\n");

    // Meminta masukan dari user
    printf("\nMasukan ID jadwal kereta api pesanan anda : ");
    scanf("%d", &booking.id_jadwal);
    printf("Masukan jumlah tiket pesanan anda : ");
    scanf("%d", &booking.jumlah_tiket);
    printf("Apakah anda memiliki kartu member KAI? (Y/N) : ");
    scanf(" %c", &booking.member);

    // Memeriksa kondisi id jadwal pada variabel booking
    switch (booking.id_jadwal)
    {
    case 1: // Jika user memesan tiket kereta api dengan ID 1
        booking.total_harga = booking.jumlah_tiket * 310000;
        break;
    case 2: // Jika user memesan tiket kereta api dengan ID 2
        booking.total_harga = booking.jumlah_tiket * 300000;
        break;
    case 3: // Jika user memesan tiket kereta api dengan ID 3
        booking.total_harga = booking.jumlah_tiket * 270000;
        break;
    case 4: // Jika user memesan tiket kereta api dengan ID 4
        booking.total_harga = booking.jumlah_tiket * 150000;
        break;
    default: // Jika user memesan tiket kereta api selain ID 1 - 4
        printf("\nSilahkan periksa kembali pesanan anda!\n");
        break;
    }

    // Memeriksa apakah user memiliki kartu KAI
    if (booking.member == 'Y' || booking.member == 'y')
    {
        // Jika user memiliki kartu KAI, maka dilakukan potongan harga untuk setiap pembelian tiket
        booking.total_harga -= (20000 * booking.jumlah_tiket);
    }

    // Menampilkan total harga untuk pemesanan tiket kereta api
    printf("\nBerikut total harga untuk pemesanan anda : Rp %d,-\n", booking.total_harga);

    return 0; // Menyatakan keluaran dari fungsi main() adalah 0
}
*/

//latihan
typedef struct
{
    char tipeBayar;
    int totalHarga;
    int pensil, pulpen, penghapus;
}diagonAlley; 

int main()
{
    diagonAlley Harry, Ron;
    
    scanf("%d %d %d", &Harry.pensil, &Harry.pulpen, &Harry.penghapus);
    scanf(" %c", &Harry.tipeBayar);
    scanf("%d %d %d", &Ron.pensil, &Ron.pulpen, &Ron.penghapus);
    scanf(" %c", &Ron.tipeBayar);

    switch(Harry.tipeBayar)
    {
    case 'T':
        Harry.totalHarga = (Harry.pensil * 1000) + (Harry.pulpen * 3000) + (Harry.penghapus * 500);
        break;
    case 'P':
        Harry.totalHarga = (Harry.pensil * 1500) + (Harry.pulpen * 4500) + (Harry.penghapus * 750);
        break;
    case 'C':
        Harry.totalHarga = (Harry.pensil * 2000) + (Harry.pulpen * 5000) + (Harry.penghapus * 1500);
        break;
    }

    switch(Ron.tipeBayar)
    {
    case 'T':
        Ron.totalHarga = (Ron.pensil * 1000) + (Ron.pulpen * 3000) + (Ron.penghapus * 500);
        break;
    case 'P':
        Ron.totalHarga = (Ron.pensil * 1500) + (Ron.pulpen * 4500) + (Ron.penghapus * 750);
        break;
    case 'C':
        Ron.totalHarga = (Ron.pensil * 2000) + (Ron.pulpen * 5000) + (Ron.penghapus * 1500);
        break;
    }

    int totalHargaKeduanya = Harry.totalHarga + Ron.totalHarga;
    if (Ron.tipeBayar == Harry.tipeBayar)
    {
        printf("Total belanja yang harus dibayar oleh Harry adalah Rp %d\n", totalHargaKeduanya);
        printf("Total belanja yang harus dibayar oleh Ron adalah Rp 0\n");
    }
    else
    {
        printf("Total belanja yang harus dibayar oleh Harry adalah Rp %d\n", Harry.totalHarga);
        printf("Total belanja yang harus dibayar oleh Ron adalah Rp %d\n", Ron.totalHarga);
    }
    return 0;
}


