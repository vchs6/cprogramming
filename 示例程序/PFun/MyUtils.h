//
//  MyUtils.h
//  P6
//
//  Created by Tangwan on 2017/10/22.
//  Copyright © 2017年 cmsoft. All rights reserved.
//

#ifndef MyUtils_h
#define MyUtils_h

/* 判断给定的一个整数是不是水仙花数 */
int narcissus(int n);

/* 1..n的累加和 */
long sum_n(unsigned int n);

/* 1..n的连乘积 */
long mul_n(unsigned int n);
long fact_r(unsigned int n);
long fact_s(unsigned int n);

long sum_f(unsigned int n, long (* doCacl)(unsigned int n));

#endif /* MyUtils_h */
