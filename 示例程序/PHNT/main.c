#include <stdio.h>

void hnt(int n, char a, char b, char c);

int main()
{
    int n;
    printf("please input a num(>0):");
    scanf("%d", &n);
    hnt(n, 'a', 'b', 'c');
    return 0;
}

void hnt(int n, char a, char b, char c)
{
    if(n == 1) {
        printf("%2d: %c->%c\n", n, a, c);
    } else {
        hnt(n -1, a, c, b);
        printf("%2d: %c->%c\n", n, a, c);
        hnt(n-1, b, a, c);
    }
    return;
}
