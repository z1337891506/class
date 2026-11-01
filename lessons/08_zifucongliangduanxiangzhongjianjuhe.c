// 多个字符从两端移动，向中间汇聚
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
// 1.竖直的不断变化
/*int main()
{
    char arr_1[] = "welcome to world";
    char arr_2[] = "################";
    int left = 0;
    int right = strlen(arr_1) - 1;
    while (left <= right)
    {
        arr_2[left] = arr_1[left];
        arr_2[right] = arr_1[right];
        Sleep(1000); // 单位是毫秒
        printf("%s\n", arr_2);
        left++;
        right--;
    }
    return 0;
}*/
// 2.在同一行不断的变化
int main()
{
    char arr_1[] = "welcome to world";
    char arr_2[] = "################";
    int left = 0;
    int right = strlen(arr_1) - 1;
    while (left <= right)
    {
        arr_2[left] = arr_1[left];
        arr_2[right] = arr_1[right];

        printf("%s\n", arr_2);
        Sleep(1000); // 单位是毫秒
        system("cls");
        left++;
        right--;
    }
    printf("%s", &arr_2);
    return 0;
}