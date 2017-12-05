#include <stdio.h>

int main()
{
    int winner;
    int curN = 1;
    while(1) {
        curN = NumOff_r(curN);
        if(curN == 30) {
            winner = 1;
            break;
        }
        curN = NumOff_pc(curN);
        if(curN == 30) {
            winner = 2;
            break;
        }
    }
    if(winner == 1) {
        printf(":)\n");
    } else {
        printf(":(, you win!\n");
    }

    return 0;
}
