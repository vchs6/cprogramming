#include <stdio.h>

int main()
{
    int x = 11;
    int y = 3;

    printf("x = %d, \t y = %d, \t x %% y = %d\n", x, y, x % y);

    x = -11;
    printf("x = %d, \t y = %d, \t x %% y = %d\n", x, y, x % y);

    x = 11;
    y = -3;
    printf("x = %d, \t y = %d, \t x %% y =%d\n", x, y, x % y);

    x = -2;
    y = 9;
    printf("x = %d, \t y = %d, \t x %% y = %d\n", x, y, x % y);

    return 0;
}
