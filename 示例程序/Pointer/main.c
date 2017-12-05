#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "myutils.h"

void onEleProc(int data[], int idx)
{
    if(idx == 0) printf("\n");
    printf("%5d", data[idx]);
    if((idx + 1) % 10 == 0) {
        printf("\n");
    }
}

int main()
{
    int x, y;
    int data[100];
    FOnEleProc OnElePrintf = NULL;

    srand(time(NULL));

    printf("please input 2 integer: ");
    scanf("%d%d", &x, &y);
    swap(&x, &y);
    printf("x=%5d;y=%5d\n", x, y);

    dataCreator(data, 100);
    dataPrintf(data, 100);

    sortA(data, 100);
    dataPrintf(data, 100);

    sortD(data, 100);
    dataPrintf(data, 100);

    sort(data, 100, large);
    dataPrintf(data, 100);

    sort(data, 100, small);
    dataPrintf(data, 100);

    traverse(data, 100, onEleProc);

    OnElePrintf = onEleProc;
    pTraverse(data, 100, OnElePrintf);

    return 0;
}
