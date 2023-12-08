#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string pass;
    bool n=false;
    
    for (int i=1; i<=3; i++) {
        cin>>pass;
        if (pass=="qwerty") {
            cout<<"Password benar!"<<endl;;
            i=4;
            n=true;
        } else if (i<3){
            cout<<"Password yang Anda masukkan salah."<<endl;
        }
    }
    if (n != true) {
        cout<<"Password yang Anda masukkan salah. Maaf akun Anda terblokir.";
    }
    return 0;
}

