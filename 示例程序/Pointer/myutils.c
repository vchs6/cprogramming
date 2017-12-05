#include <stdio.h>
#include <stdlib.h>

#include "myutils.h"

void swap(int * px, int * py)
{
    int t = *px;
    *px = *py;
    *py = t;
}

void dataCreator(int data[], int size)
{
    int i;
    for(i = 0; i < size; i++) {
        data[i] = rand() % 1000 + 1;
    }
}

void dataPrintf(int data[], int size)
{
    int i;
    for(i = 0; i < size; i++) {
        if(i % 10 == 0) printf("\n");
        printf("%4d", data[i]);
    }
    printf("\n");
}

void sortA(int data[], int size)
{
    int i,j;
    for(i = 0; i < size - 1; i++) {
        for(j = i + 1; j < size; j++) {
            if(data[j] < data[i]) {
                swap(&data[j], &data[i]);
            }
        }
    }
}

void sortD(int data[], int size)
{
    int i,j;
    for(i = 0; i < size - 1; i++) {
        for(j = i + 1; j < size; j++) {
            if(data[j] > data[i]) {
                swap(&data[j], &data[i]);
            }
        }
    }
}

BOOL large(int x, int y)
{
    return x > y;
}

BOOL small(int x, int y)
{
    return x < y;
}

void sort(int data[], int size, BOOL (*compare)(int x, int y))
{
    int i,j;
    for(i = 0; i < size - 1; i++) {
        for(j = i + 1; j < size; j++) {
            if(compare(data[j], data[i])) {
                swap(&data[j], &data[i]);
            }
        }
    }
}

void traverse(int data[], int size, void (*eleProc)(int data[], int idx))
{
    int i;
    for(i = 0; i < size; i++) {
        eleProc(data, i);
    }
}

void pTraverse(int data[], int size, FOnEleProc onEleProc)
{
    int i;
    for(i = 0; i < size; i++) {
        onEleProc(data, i);
    }
}
