#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void game()
{
    int guess = 0;
    int count = 5;
    int r = rand() % 100 + 1; // 范围是1~100
    time_t start = (time(NULL));
    while (count)
    {
        printf("你有%d次猜数字的机会,请猜数字\n", count);
        scanf("%d", &guess);
        if (guess > r)
        {
            printf("猜的值过大\n");
        }
        else if (r > guess)
        {
            printf("猜的值过小\n");
        }
        else
        {
            printf("猜对了，答案是%d\n", r);
            break;
        }
        count--;
    }
    if (count == 0)
    {
        printf("很遗憾，你失败了，正常的答案是%d\n", r);
    }
    time_t end = (time(NULL));
    printf("你总共用时%ld秒\n", end - start);
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        printf("----------------------\n");
        printf("-----  1.play  -------\n");
        printf("-----  0.exit  -------\n");
        printf("----------------------\n");
        printf("请选择\n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game(); // 玩游戏的函数
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误，请重新选择\n");
            break;
        }
    } while (input);

    return 0;
}