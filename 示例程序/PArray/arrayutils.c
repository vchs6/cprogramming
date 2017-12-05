#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arrayutils.h"

void createDatas(int aArray[], unsigned int aSize)
{
    unsigned int i;
    srand(time(NULL));
    for(i = 0; i < aSize; i++) {
        aArray[i] = rand() % 1000 + 1;
    }
}

void printArray(int aArray[], unsigned int aSize)
{
    unsigned int i;
    for(i = 0; i < aSize; i++) {
        if((i % 10) == 0) printf("\n");
        printf("  %4d", aArray[i]);
    }
    printf("\n");
}

void sort(int aArray[], unsigned aSize)
{
    unsigned int i,j;
    int tmp;
    for(i = 0; i < aSize - 1; i++) {
        for(j = i + 1; j < aSize; j++) {
            if(aArray[i] > aArray[j]) {
                tmp = aArray[i];
                aArray[i] = aArray[j];
                aArray[j] = tmp;
            }
        }
    }
}

int find(int x, int aArray[], unsigned int aSize)
{
    int l, r, c;
    l = 0;
    r = aSize - 1;
    while(r >= l) {
        c = (l + r) / 2;
        if(aArray[c] == x) {
            break;
        } else if(aArray[c] > x) {
            r = c - 1;
        } else {
            l = c + 1;
        }
    }
    return (r >= l) ? c : -1;
//    if(r < l) {
//        c = -1;
//    }
//    return c;
}
