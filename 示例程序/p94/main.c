#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "dateutils.h"

/**
 显示菜单，接受用户执行操作选择
 \param 无
 \return 用户对菜单项的选择结果（字符）
 */
char showmenu();

int main()
{
    int y, m , d, d1;
    char select;
    while('3' != (select = showmenu())) {
        switch(select) {
        case '1':
            printf("please a date(year-month-day):");
            scanf("%d-%d-%d", &y, &m, &d);
            printf("%d-%d-%d -> %d\n", y, m, d, DayofYear(y, m, d));
            break;
        case '2':
            printf("please a day of year:");
            scanf("%d%d", &y, &d);
            MonthDay(y, d, &m, &d1);
            if(0 < d1) {
                printf("%d of %d -> %d-%d-%d\n", y, d, y, m, d1);
            } else {
                printf("data error!\n");
            }
            break;
        default:
            printf("input error!\n");
        }
    }
    return 0;
}

char showmenu()
{
    printf("1. year/month/day -> yearDay\n");
    printf("2. yearDay -> year/month/day\n");
    printf("3. Exit\n");
    printf("please input a char(1,2,3):");
    return getchar();
}
