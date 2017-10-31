#include "myfunctions.h"

int isPrime(int x)
{
    int i;
    for(i = 2; i < (x / 2); i++) {
        if(x % i == 0) {
            break;
        }
    }
    return !(i < (x / 2));
}

void print_factors(int x)
{
    int i = 2;
    int f = 0;
    printf("%d=", x);
    while(i <= x) {
        if((x % i) == 0) {
            f++;
            x /= i;
            if(f > 1) {
                printf("*");
            }
            printf("%d", i);
            continue;
        }
        i++;
    }
}
