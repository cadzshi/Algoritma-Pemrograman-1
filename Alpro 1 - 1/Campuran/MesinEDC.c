#include <stdio.h>
#include <string.h>

//deklarasi variabel global
char transaksi[20];	//nominal transfer
char in[20];		//input
char PIN[20];		//pin kartu
char PINin[20];		//pin dari inputan

//deklarasi fungsi/prosedur
void stateA();
void stateB();
void stateC();
void stateD();
void stateE();
void stateF();

int main () {
	/*input: 0...9, Y, N, G[PIN]
	setiap memberi input harus disertai enter
	
	contoh:
	G123 <enter>
	7 <enter> 0 <enter> 0 <enter> 0 <enter>
	Y <enter>
	1 <enter> 2 <enter> 3 <enter>
	Y <enter>
	*/
	printf("(|========|EDC|========|)\n");
	printf("(|                     |)\n");
	printf("(|   1 2 3    gesek:   |)\n");
	printf("(|   4 5 6      |      |)\n");
	printf("(|   7 8 9      |      |)\n");
	printf("(|   N 0 Y      |      |)\n");
	printf("(|                     |)\n");
	printf("(|=====================|)\n");

	//start di state A
	stateA();
	
	return 0;
}

void stateA () {
	int i;
	printf("\n(|=====================|)\n");
	printf("(|       stateA        |)\n");
	printf("(| Silakan gesek kartu |)\n");
	printf("(|       G[PIN]        |)\n");
	printf("(|=====================|)\n");
	
	while (in[0] != 'G') {
		scanf("%s", in);
	}
	
	stateB();
}

void stateB () {
	printf("\n(|============================|)\n");
	printf("(|           stateB           |)\n");
	int i;
	
	if (in[0] == 'G') {
		//pindah input pin di 'in' ke 'PIN'
		for (i=0; i<strlen(in)-1; i++) {
			PIN[i] = in[i+1];
		}
		PIN[i] = '\0';
	}
	printf("(| Masukkan nominal transaksi |)\n");
	printf("(|============================|)\n");
	
	//reset transaksi
	transaksi[0] = '\0';
	
	//input
	scanf("%s", in);
	
	if ((in[0] >= '0') && (in[0] <= '9')) {	//jika input berupa angka
		transaksi[0] = in[0];		//pindahkan input ke transaksi
		transaksi[1] = '\0';		//tutup (tambah null) variabel transaksi
		stateC();
	} else if (in[0] == 'G') {				//kalau inputnya gesek[PIN]
		stateB();
	} else if (in[0] == 'Y') {				//kalau Y balik stateB karena belum input angka
		printf("(|================================|)\n");
		printf("(| Nominal transaksi masih kosong |)\n");
		printf("(|================================|)\n");
		stateB();
	} else {
		stateB();							//kalau N balik stateB
	}
}

void stateC () {
	printf("\n(|=====================|)\n");
	printf("(|        stateC       |)\n");
	printf("(|         Y/N         |)\n");
	printf("(|=====================|)\n");
	int exit = 0;		//kode untuk keluar dari loop
	
	do {
		scanf("%s", in);
		
		if ((in[0] >= '0') && (in[0] <= '9')) {		//kalau input angka, simpan input di variabel transaksi
			transaksi[strlen(transaksi)+1] = '\0';
			transaksi[strlen(transaksi)] = in[0];
		} else if (in[0] == 'G') {					//kalau gesek, balik stateB
			stateB();
			exit = 1;
		} else if (in[0] == 'N') {					//kalau N reset nominal transaksi (balik ke stateB)
			stateB();
			exit = 1;
		} else {									//kalau Y pindah ke stateD
			stateD();
			exit = 1;
		}
	} while (exit == 0);
}

void stateD () {	//mirip stateB
	printf("\n(|======================|)\n");
	printf("(|        stateD        |)\n");
	printf("(|     Masukkan PIN     |)\n");
	printf("(|======================|)\n");
	
	//reset PINin
	PINin[0] = '\0';
	
	//input
	scanf("%s", in);
	
	if ((in[0] >= '0') && (in[0] <= '9')) {	//jika input berupa angka
		PINin[0] = in[0];		//pindahkan input ke PINin
		PINin[1] = '\0';		//tutup variabel PINin (tambah null)
		stateE();
	} else if (in[0] == 'G') {
		stateB();
	} else if (in[0] == 'Y') {
		printf("\n(|======================|)\n");
		printf("(|   PIN masih kosong   |)\n");
		printf("(|======================|)\n");
		stateD();
	} else {
		stateD();
	}
}

void stateE () {	//mirip stateC
	printf("\n(|======================|)\n");
	printf("(|        stateE        |)\n");
	printf("(|         Y/N          |)\n");
	printf("(|======================|)\n");
	int exit = 0;		//kode keluar dari loop
	
	do {
		scanf("%s", in);
		
		if ((in[0] >= '0') && (in[0] <= '9')) {	//kalau input berupa angka, simpan input ke PINin
			PINin[strlen(PINin)+1] = '\0';
			PINin[strlen(PINin)] = in[0];
		} else if (in[0] == 'G') {
			stateB();
			exit = 1;
		} else if (in[0] == 'N') {				//kalau N, reset PIN input
			stateD();
			exit = 1;
		} else {
			if (strcmp(PINin, PIN) != 0) {		//kalau pin salah, input ulang pin (di stateD)
				printf("\n(|======================|)\n");
				printf("(|       pin salah      |)\n");
				printf("(|======================|)\n");
				stateD();
			} else {							
				stateF();
			}
			exit = 1;
		}
	} while (exit == 0);
}

void stateF () {
	int exit = 0;		//kode keluar dari loop

	//print struk transaksi
	printf("\n(|===================================|)\n");
	printf("(|               statef              |)\n");
	printf("(|        Transaksi Berhasil!        |)\n");
	printf("          Total: Rp.%s\n", transaksi);
	printf("(| Apakah anda ingin transaksi lagi? |)\n");
	printf("(|                Y/N                |)\n");
	printf("(|===================================|)\n");
	
	do {
		scanf("%s", in);
		
		if (in[0] == 'Y') {
			stateB();
			exit = 1;
		} else if (in[0] == 'N') {
			exit = 1;
		} else if (in[0] == 'G') {
			stateB();
			exit = 1;
		}
	} while (exit == 0);
}

