#include <stdio.h>
int ADD(int x, int y)
{
    return x + y;
}
int main()
{
    int a = 0;
    int b = 0;

    // 输入
    scanf("%d%d", &a, &b);
    // 计算
    int c = ADD(a, b);
    printf("%d", c);
    return 0;
}
