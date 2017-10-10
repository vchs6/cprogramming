#include <stdio.h>


/* 很无聊的一个计算示例，除非你真的要这样，否则，根本就不是这样用！ */
int main()
{
    int x;
    int y;
    printf("x = 10\n\n");
    x = 10;
    printf("x = %d, y = 2 * ++x + 4 = %d\n", x, y = 2 * ++x + 4);
    x = 10;
    printf("x = %d, y = 2 * (++x) + 4 = %d\n", x, y = 2 * (++x) + 4);

    x = 10;
    printf("x = %d, y = 2 * x++ + 4 = %d\n", x, y = 2 * x++ + 4);

    x = 10;
    printf("x = %d, y = 2 * (x++) + 4 = %d\n", x, y = 2 * (x++) + 4);

    x = 10;
    printf("x = %d, y = 2 * ++x + 4 + ++x = %d\n", x, y = 2 * ++x + 4 + ++x);

    x = 10;
    printf("x = %d, y = 2 * x++ + 4 + x++= %d\n", x, y = 2 * x++ + 4 + x++);

    return 0;
}
