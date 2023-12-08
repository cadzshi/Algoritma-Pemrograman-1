#include<stdio.h>

//nilai maksimal ganjil
/*
int main(){
    int n;
    scanf("%d", &n);
    int tabint[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &tabint[i]);
    }

    int maksimal = tabint[0];
    for(i=0;i<n;i++){
        if(tabint[i] % 2 == 1){
            if(maksimal < tabint[i]){
            maksimal = tabint[i];
            }
        }
    }

    printf("%d\n", maksimal);
    return 0;
}
*/

//Penjumlahan 2 Array
/*
int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int x[n];
    int y[m];
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d", &x[i]);
    }

    

    int maksimal = x[0];
    for(i=0;i<n;i++){
        
        if(maksimal < x[i]){
            maksimal = x[i];
        }
        
    }

    for(j=0;j<n;j++){
        scanf("%d", &y[j]);
    }


    int minimal = y[0];
    for(j=0;j<m;j++){
        if(minimal > y[j]){
            minimal=y[j];
        }
    }

    printf("%d\n", maksimal-minimal);
    return 0;
}
*/

//Rata Rata
/*
int main(){
    int n;
    scanf("%d", &n);
    int x[n];

    int i;
    for(i=0;i<n;i++){
        scanf("%d", &x[i]);
    }

    int tambah;
    for(i=0;i<n;i++){
        tambah += x[i];
    }

    printf("%d\n", tambah/n);

    return 0;
}
*/

/*
//nilai minimal dari elemen array yang memiliki indeks genap
int main(){
    int n;
    scanf("%d", &n);
    int x[n];

    int i;
    for(i=0;i<n;i++){
        scanf("%d", &x[i]);
    }

    int minimal = y[0];
    for(i=0;i<n;i++){
        if(minimal > x[i]){
            minimal=x[i];
        }
    }


}
/*