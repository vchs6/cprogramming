//
//  main.c
//  P6
//  1! + 2! + 3! + ... + n!;
//  Created by Tangwan on 2017/10/22.
//  Copyright © 2017年 cmsoft. All rights reserved.
//

#include <stdio.h>
#include "MyUtils.h"

int main() {
    unsigned int n;
    unsigned int i, j;
    long s, m;
    
    printf("Please input a Number(<20): ");
    scanf("%u", &n);
//    整体上是求和
    s = 0;
    for (i = 1; i <= n; i++) {
//      先求i的连乘积
        m = 1;
        for (j = 1; j <= i; j++) {
            m *= j;
        }
        
//      再相加
        s += m;
    }
    printf("%ld\n", s);
    
    s = 0;
    for(i = 1; i <= n; i++){
        s += mul_n(i);
    }
    printf("%ld\n", s);

    s = 0;
    for(i = 1; i <= n; i++) s += fact_r(i);
    printf("%ld\n", s);

    s = 0;
    for(i = 1; i <= n; i++) s += fact_s(i);
    printf("%ld\n", s);

    s = 0;
    for(i = 1; i <= n; i++) s += fact_s(i);
    printf("%ld\n", s);


/*
    s = sum_f(n, mul_n);
    printf("%ld\n", s);

    s = sum_f(n, sum_n);
    printf("%ld\n", s);

    for(i = 100; i < 1000; i ++) {
        if(narcissus(i)) {
            printf("%d  ", i);
        }
    }
    printf("\n");
*/
    return 0;
}
