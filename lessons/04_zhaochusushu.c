/*第一版

#include <stdio.h>
int main()
{
    // i是输入的值，f是除以输入的值
    int i = 100, f = 0;
    for (i = 100; i <= 200; i++)
    {
        for (f = 2; f < i; f++)
        {
            if (i % f == 0)
            {
                break;
            }
        }
        // break跳到这
        // 是素数的跳到这此时i=f
        if (i == f)
            printf("%d是素数\n", i);
    }
}
    */
// 第二版
#include <stdio.h>
int main()
{
    int i = 0, f = 0, flag = 0;
    for (i = 100; i <= 200; i++)
    {
        for (f = 2; f < i; f++)
        {
            // 不是素数的情况
            if (i % f == 0)
            {
                flag = 0;
                break;
            }
            flag = 1;
        }

        // 不是素数，flag=0，是素数flag=1
        if (flag == 1)
            printf("%d是素数", i);
    }
    return 0;
}