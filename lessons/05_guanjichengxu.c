/*
关机程序：
1.程序运行起来，电脑就开始倒计时1分钟关机
2.如果输入：我是猪，就取消关机
=============
windows上有一个关机的命令：stutdown -s -t 60(倒计时60分钟)
                        stutdown -a 取消关机
此时需要使用一个库函数//system 用来执行系统命令的
#include <stdlib.h>
用于对比字符时使用strcmp库函数#include <string.h>
*/
#include <stdio.h>
#include <string.h> //原来使用strcmp来比较字符串是否相等
#include <stdlib.h> //用来使用system系统命令

int main()
{
    // 字符数组
    char input[20] = {0};
    system("shutdown -s -t 60");
again:
    printf("请注意你的电脑将在60秒内关机,处非输入：我是猪，就取消关机\n");
    scanf("%s", input);
    // 两个字符串比较用strcmp如果相等用==0判断
    if (strcmp(input, "我是猪") == 0)
    {
        system("shutdown -a");
        printf("你很乖\n");
    }
    else
    {
        goto again;
    }
    return 0;
}
