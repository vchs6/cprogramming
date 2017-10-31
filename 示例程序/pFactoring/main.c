#include <stdio.h>
#include "myfunctions.h"

int main()
{
    int x;
    while( 1 ) {
        printf("Please input a integer:");
        scanf("%d", &x);
        if(x <= 1) break;
        if(isPrime(x)) {
            printf("It is a prime number!\n");
        } else {
            print_factors(x);
            printf("\n");
        }
    }
    return 0;
}
