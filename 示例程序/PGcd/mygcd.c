#include "mygcd.h"

int Gcd1(int a, int b)
{
    int t;
    t = (a > b)? b: a;
    while(t >= 1) {
        if((a%t == 0) && (b%t == 0)) break;
        t--;
    }
    return t;
}

int Gcd2(int a, int b)
{
    int r;
    do{
        r = a % b;
        if(r != 0) {
            a = b;
            b = r;
        }
    }while(r != 0);
    return b;
}

int Gcd3(int a, int b)
{
    int r;
    if(a == b) {
        r = a;  //or r = b;
    } else if(a > b) {
        r = Gcd3(a-b, b);
    } else {
        r = Gcd3(a, b-a);
    }
    return r;
}
