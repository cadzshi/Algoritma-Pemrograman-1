#include <stdio.h>

int main(){
    int a, b, c, d, e, f;
    int ribuan, noribuan = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);

    if(a >= 1000)
    {
        ribuan = ribuan + 1;
    }
    else
    {
        noribuan = noribuan + 1;
    }
    if(b >= 1000)
    {
        ribuan =  ribuan + 1;
    }
    else
    {
        noribuan = noribuan + 1;
    }
    if(c >= 1000)
    {
        ribuan =  ribuan + 1;
    }
    else
    {
        noribuan = noribuan + 1;
    }
    if(d >= 1000)
    {
        ribuan =  ribuan + 1;
    }
    else
    {
        noribuan = noribuan + 1;
    }
    if(e >= 1000)
    {
        ribuan =  ribuan + 1;
    }
    else
    {
        noribuan = noribuan + 1;
    }
    if(f >= 1000)
    {
        ribuan =  ribuan + 1;
    }
    else
    {
        noribuan = noribuan + 1;
    }
    if(ribuan >= 3)
    {
        printf("ribuan 3 atau lebih\n");
    }
    else
    {
        printf("tidak valid\n");
    }
    return 0;
}
