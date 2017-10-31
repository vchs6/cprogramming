#include <stdio.h>

int isPrime(int x);
void print_factors(int x);

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
