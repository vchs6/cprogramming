#include <stdio.h>
#include <math.h>

int main()
{
    int x = 1;
    int y = 2;
    double dx = 4.0;
    double dy = 2.0;
    printf(" ------int------\n");
    printf("1 / 2 = %d\n", 1 / 2);
    printf("x = %d, y = %d, x / y = %d\n", x , y, x / y);
    x = 5;
    y = 2;
    printf("x = %d, y = %d, x / y = %d\n", x , y, x / y);


    printf("\n\n\n ------double------\n");

    printf("1.0 / 2   = %f\n", 1.0 / 2);
    printf("1   / 2.0 = %f\n", 1 / 2.0);
    printf("1.0 / 2.0 = %f\n", 1.0 / 2.0);

    printf("dx = %f, dy = %f, dx / dy = %f\n", dx, dy, dx / dy);
    printf("dx = %f, x = %d, dx / x = %f\n", dx, x, dx / x);
    printf("dx = %f, x = %d, dx / x = %f\n", dx, x, dx / x);

    printf("1 / 3.0 = %f\n", 1 / 3.0);
    printf("1.0 / 7 = %f\n", 1.0 / 7);

    return 0;
}
