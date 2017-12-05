#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "../Pointer/myutils.h"

int main()
{
    int * data = NULL;
    int * p;
    int size = 0;
    int x;
    int i;


    srand(time(NULL));
    printf("Please int count:");
    scanf("%d", &size);
    data = (int *)malloc(size * sizeof(int));
    for(i = 0; i < size; i++) {
        *(data + i) = rand() % 100 + 1;
    }
    //dataCreator(data, size);
    p = data;
    for(i = 0; i < size; i++) {
        if(i % 10 == 0) printf("\n");
        printf("%5d", *(p++));
    }
    //dataPrintf(data, size);
    free(data);
    printf("\n");

    data = (int *)calloc(size, sizeof(int));
    for(i = 0; i < size; i++) {
        *(data + i) = rand() % 100 + 1;
    }
    //dataCreator(data, size);
    p = data;
    for(i = 0; i < size; i++) {
        if(i % 10 == 0) printf("\n");
        printf("%5d", *(p++));
    }
    //dataPrintf(data, size);
    free(data);
    printf("\n");

    printf("Please input integers, 0 to exit.\n");
    while(true) {
        scanf("%d", &x);
        if(x == 0) break;
        if(size % 10 == 0) {
            data = realloc(data, (size / 10 + 1) * 10 * sizeof(int));
        }
        *(data + size) = x;
        size ++;
    };
    dataPrintf(data, size);
    free(data);

    return 0;
}
