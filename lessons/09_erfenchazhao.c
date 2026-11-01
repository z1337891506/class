#include <stdio.h>
int main()
{
    int zao = 0, geshu = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    geshu = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = geshu - 1;

    printf("请输入要查找的值\n");
    scanf("%d", &zao);
    while (left <= right)
    {
        int mid = (left + right) / 2;
        // left的值小了,目标值在右边
        if (arr[mid] < zao)
        {
            left = mid + 1;
        }
        // right的值小了，目标值在左边
        else if (arr[mid] > zao)
        {
            right = mid - 1;
        }
        else // arr[mid]=zao
        {
            printf("找到了\n");
            break;
        }
    }
    if (left > right)
    {
        printf("找不到\n");
    }
    return 0;
}
