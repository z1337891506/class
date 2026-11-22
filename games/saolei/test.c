// 测试游戏的逻辑
#include <stdio.h>
#include "game.h"
void menu()
{
    printf("------------------\n");
    printf("----  1.game  ----\n");
    printf("----  0.exit  ----\n");
    printf("------------------\n");
}

void game()
{
    printf("扫雷开始\n");
    char mine[ROWS][COLS]; // mine展示雷的基本信息(0代表无雷1代表是雷)
    char show[ROWS][COLS]; // show用来展示玩家选取点的8个相邻位置有几个雷
    // 先初始化两个棋盘
    InitBoard(mine, ROWS, COLS, '0'); // mine全是字符‘0’
    InitBoard(show, ROWS, COLS, '*'); // show全是子字符‘*’
    DisplayBoard(show, ROW, COL);     // 先打印雷的初始样子
    // 现在要布置雷(放到mine棋盘中)1.生成随机坐标2.放置雷
    SetMine(mine, ROW, COL);
    //DisplayBoard(mine, ROW, COL);
    //进行排雷(在mine中排,排完的信息放进show中)
    FindMine(mine,show,ROW,COL);
}
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL)); // 定义随机值
    do
    {

        menu();
        printf("请选择:");

        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
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