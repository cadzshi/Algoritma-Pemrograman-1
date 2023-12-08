#include<stdio.h>

int main(){
    
    int i, n;
    scanf("%d", &n); //banyaknnya karakter
    
    char huruf[n]; //array sebanyak n karakter
    for(i = 0; i < n; i++){
        scanf(" %c", &huruf[i]);
    }
    
    int a = 0, id; //a = huruf a ketemu ketika a = 1
                   //id = indeks ke berapa huruf a ketemu
    
    i = 0;  //inisialisasi
    while ((i < n) && (a == 0)){ //kondisi
        if((huruf[i] == 'a') ){
            a = 1;
            id = i;
        }
        i++; //iterasi  
    }
    
    //keluaran
    if(a == 1){
        printf("Ada huruf a, yang pertama di indeks ke-%d\n", id);
    }else{
        printf("Tidak ada huruf a\n");
    }   

    return 0;
}
