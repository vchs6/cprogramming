#include <stdio.h>
#include "vchsStrings.h"

int main(int argc, const char * argv[]) {
    int x, y;

//  char strs[3][10];
//  split(argv[1], strs);
    if(argc < 2) {
        printf("data missing!\n");
        return 0;
    }
    x = stoi(argv[1]);
    y = stoi(argv[2]);
//    switch(strs[1][0]) {
//        case '+':
              printf("%d + %d = %d\n", x, y, x + y);
//            break;
//        case '-':
//            printf("%d %c %d = %d\n", x, strs[1][0], y, x - y);
//            break;
//        case '*':
//            printf("%d %c %d = %d\n", x, strs[1][0], y, x * y);
//            break;
//        case '/':
//            printf("%d %c %d = %d\n", x, strs[1][0], y, x / y);
//            break;
//   }
    return 0;
}

