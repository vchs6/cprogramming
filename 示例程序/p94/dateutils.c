#include <stdbool.h>

#include "dateutils.h"

bool leapYear(int year)
{
    return (year % 100 != 0 && year % 4 == 0) || (year % 400 == 0);
}

int MonthDays(int year, int month)
{
    /*! 存储每个月份的天数，_days[0]是1月份的天数，依此类推。 */
    static int _days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    static int _year = 0; /*!< 存储调整好月份天数的年份。 */
    /*! 依据年份是否是润年调整2月份的天数。 */
    if(_year != year) {
        _year = year;
        _days[1] = leapYear(year) ? 29 : 28;
    }
    return _days[month - 1];
}

int DayofYear(int year, int month, int day)
{
    for(month = month - 1; month > 0; month--) {
        day += MonthDays(year, month);
    }
    return day;
}

void MonthDay(int year, int yearDay, int *pMonth, int *pDay)
{
    int i;
    *pMonth = 1;
    for (i = 0; yearDay > MonthDays(year, *pMonth); i++) {
        yearDay -= MonthDays(year, *pMonth);
        (*pMonth)++;
        if(*pMonth > 12) {
            yearDay = 0;
            break;
        }
    }
    *pDay = yearDay;
}
