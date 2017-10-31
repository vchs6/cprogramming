//
//  MyUtils.c
//  P6
//
//  Created by Tangwan on 2017/10/22.
//  Copyright © 2017年 cmsoft. All rights reserved.
//

#include "MyUtils.h"

/*
 判断给定的一个整数是不是水仙花数，数的个、十、百位数字的立方和与该数相等
*/
int narcissus(int n)
{
    int i, j, k;
    i = n / 100;
    j = n % 100 / 10;
    k = n % 10;
    return (i * i * i + j * j * j + k * k * k) == n;
}

/* 1..n的累加和 */
long sum_n(unsigned int n)
{
    long r = 0;
    unsigned int i;
    for(i = 1; i <= n; i++) r += i;
    return r;
}

/* 1..n的连乘积 */
long mul_n(unsigned int n)
{
    long r = 1;
    unsigned int i;
    for(i = 1; i <= n; i++) r *= i;
    return r;
}

long fact_r(unsigned int n)
{
    return (n <= 1) ? 1 : (n * fact_r(n-1));
}

long fact_s(unsigned int n)
{
    static long p = 1;
    return p = p * n;
}

long sum_f(unsigned int n, long (* doCacl)(unsigned int n))
{
    long r = 0;
    unsigned int i;
    for(i = 1; i <= n; i++) r += doCacl(i);
    return r;
}
