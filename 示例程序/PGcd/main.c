#include <stdio.h>
#include "mygcd.h"

int main()
{
    char sel;
    int a, b, r;
    printf("please select(0: exit; 1: Gcd1, 2:Gcd2, ?:Gcd3):");
    scanf("%c", &sel);
    while(sel != '0') {
        printf("please input a,b(any 0 to exit): ");
        scanf("%d,%d", &a, &b);
        if(a <= 0 || b <= 0) break;
        switch(sel) {
        case '1':
            r = Gcd1(a, b);
            break;
        case '2':
            r = Gcd2(a, b);
            break;
        default:
            r = Gcd3(a, b);
            break;
        }
        printf("Gcd(%d,%d)=%d\n", a, b, r);
    }
    return 0;
}

