#ifndef DATEUTILS_H
#define DATEUTILS_H

#include <stdbool.h>

/**
 判定给定的年份是否是润年
 \param year 年份。
 \return 判定结果，真值表示是润年。
 */
bool leapYear(int year);

/**
 求某年某月的天数
 \param year 一个表示年份的整数
 \param month 一个表示月份的整数
 \return 给定年月的天数
 */
int MonthDays(int year, int month);

/**
 对给定的某年某月某日，计算它是这一年的第几天。
 \param year 一个表示年份的整数
 \param month 一个表示月份的整数
 \param day 一个表示日的整数
 \return 这一年的第几天
*/
int DayofYear(int year, int month, int day);

/**
 对给定的某年的第几天，计算它是这一年的第几月第几日。
 \param year 一个表示年份的整数
 \param yearDay 一个表示这一年第几天的整数
 \param month 一个存储月份的整型变量的地址
 \param day 一个存储日的整型变量的地址
 \return 无
 */
void MonthDay(int year, int yearDay, int *pMonth, int *pDay);

#endif // DATEUTILS_H
