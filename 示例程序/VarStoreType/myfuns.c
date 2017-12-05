#include <stdio.h>
#include "myfuns.h"

int swap_x,swap_y;

long sum(int n)
{
    int i;
    long r = 0;
    for(i = 1; i <= n; i++) {
        r += i;
    }
    return r;
}

long sum_rec(int n){
    static int count = 0;
    long r = 1;
    count ++;
    if(n > 1) {
        printf("%2d: sum(%2d) = %2d + sum(%2d)\n",
               count, n, n, n - 1);
        r = n + sum_rec(n - 1);
    } else {
        printf("%2d: sum(%2d) =  1\n", count, n);
        r = 1;
    }
    return r;
}

long sum_s(int n)
{
    static long r = 0;
    r = r + n;
    return r;
}

void Swap()
{
    int t = swap_x;
    swap_x = swap_y;
    swap_y = t;
}
