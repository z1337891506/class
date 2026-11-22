#include <stdio.h>
#include "game.h"
void DisplayBoard(char Board[ROWS][COLS], int r, int c)
{
    // 这里r=9，c=9
    int i = 0;
    int j = 0;
    // 在这里先打印列
    for (j = 0; j <= c; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    for (i = 1; i <= r; i++)
    {
        printf("%d ", i); // 在*前打印行数方便查看
        for (j = 1; j <= c; j++)
        {

            printf("%c ", Board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// 初始化棋盘
void InitBoard(char board[ROWS][COLS], int r, int c, char set)
{
    // 这里r=ROSW,c=COLS
    int i = 0;
    int j = 0;
    for (i = 0; i < r; i++) // 小于11,因为下标只到10
    {
        for (j = 0; j < c; j++) // 小于11,因为下标只到10
        {
            board[i][j] = set;
        }
    }
}
// 设置雷
void SetMine(char board[ROWS][COLS], int r, int c) // r=9,c=9
{
    int count = EASY_COUNT; // 雷的数量
    while (count)   // 次数>=10
    {
        int x = rand() % r + 1; // 这里rand%r+1的范围是1~9及在1~9行中布置雷
        int y = rand() % c + 1; // 这里rand%r+1的范围是1~9及在1~9列中布置雷
        if (board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
    }
}
// 获得x,y九宫格中雷的数量('0'-'0'=0,'1'-'0'=1这里用的ascii码值)
static size_t GetMineCount(char mine[ROWS][COLS], int x, int y)
{
    return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}
// 排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c) // 这里r=9，c=9
{
    int x = 0, y = 0;
    int win = 0;
    while (win < r * c - EASY_COUNT)
    {
        printf("请输入坐标进行排查:");
        scanf("%d%d", &x, &y);
        if (x >= 1 && x <= r && y >= 1 && y <= c) // 合法的情况
        {
            if (show[x][y] != '*') // 防止用户重复输入坐标
            {
                printf("重复排查,请重新输入\n");
            }
            else
            {
                if (mine[x][y] == '1') // 是雷的情况
                {
                    printf("踩到雷啦\n");
                    DisplayBoard(mine, ROW, COL);
                    break;
                }
                else // 不是雷的情况,要告诉这附近有几个雷(mine中找在show中展示
                {
                    size_t count = GetMineCount(mine, x, y);
                    show[x][y] = (char)count + '0';
                    DisplayBoard(show, ROW, COL);
                    win++;
                }
            }
        }
        else // 不合法
        {
            printf("坐标非法,请重新输入\n");
        }
    }
    if (win == r * c -EASY_COUNT)
    {
    printf("排雷成功\n");
    DisplayBoard(mine, ROW, COL);
}
}