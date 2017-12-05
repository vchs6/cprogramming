#include <stdio.h>

#include "myfuns.h"

int main()
{
    extern int swap_x, swap_y;
    int i, x;
    long s;
/*
    printf("please a integer(<50): ");
    scanf("%d", &x);
    printf("sum(%d)=%ld\n", x, sum(x));

    printf("\n\n");
    s = sum_rec(10);
    printf("sum(%d)=%ld\n", x, s);
    printf("\n\n");
    for(i = 1; i <= 5; i++) {
        printf("sum(%2d)=%ld\n", i, sum_rec(i));
    }


    printf("\n\n");
    for(i = 1; i <= 5; i++) {
        printf("sum(%2d) = %ld\n", i, sum_s(i));
    }

    printf("\nsum(30)=%ld\n", sum_s(6));
    printf("\nsum(30)=%ld\n", sum_s(30));
    printf("\nsum(30)=%ld\n", sum_s(2));
*/
    swap_x = 10;
    swap_y = 5;
    Swap();
    printf("swap x=%d, y=%d\n", swap_x, swap_y);
    return 0;
}
