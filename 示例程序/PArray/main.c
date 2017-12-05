#include <stdio.h>
#include "arrayutils.h"

int main()
{
    int x[100];
    int idx, y;
    createDatas(x, 100);
    printArray(x, 100);
    sort(x, 100);
    printf("\n");
    printArray(x, 100);
    printf("\nplease input a number: ");
    scanf("%d", &y);
    idx = find(y, x, 100);
    if(idx >= 0) {
        printf("found:x[%d](%d)\n", idx, y);
    } else {
        printf("not found!\n");
    }
    return 0;
}
