// 计算某年某月有多少天（使用数组）
/*#include <stdio.h>
#include <stdbool.h>
// 定义闰年
bool is_leap_year(int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        return true;
    else
        return false;
}

int get_days_of_month(int y, int m)
{
    // 31 28 31 30 31 30 31 31 30 31 30 31
    //    29
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //          0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12
    int day = days[m];
    if (is_leap_year(y) && m == 2)
        day++;
    return day;
}

int main()
{
    int year = 0;
    int month = 0;
    printf("请输入年 月\n");
    scanf("%d %d", &year, &month);
    int day = get_days_of_month(year, month);
    printf("%d\n", day);
    return 0;
}
*/

// 计算某年某月有多少天(使用switch函数)
#include <stdio.h>
#include <stdbool.h>
// 定义闰年
bool is_leap_year(int y)
{
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        return true;
    else
        return false;
}

int get_days_of_month(int y, int m)
{
    int days = 0;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        days = 28;
        break;
    }
    if (is_leap_year(y) && m == 2)
        days++;
    return days;
}

int main()
{
    int year = 0;
    int month = 0;
    printf("请输入年 月\n");
    scanf("%d %d", &year, &month);
    int day = get_days_of_month(year, month);
    printf("%d\n", day);
    return 0;
}