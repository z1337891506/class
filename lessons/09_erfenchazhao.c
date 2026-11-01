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

// ============ 顺序查找（遍历数组）版本 ============
// 一个 .c 文件里只能有一个 main，直接放两个会报 redefinition of 'main'。
// 下面这段先用 #if 0 关掉，保留在文件里方便和上面的二分查找对照。
// 想单独运行它：把下面的 0 改成 1，同时把上面那个 main 也包进 #if 0 ... #endif。
#if 0
#include <stdio.h>
// 遍历数组
int main()
{
    int zao = 0, i = 0, yuansugeshu = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //           0, 1, 2, 3, 4, 5, 6, 7, 8
    printf("输入你要查找的值\n");
    scanf("%d", &zao);
    yuansugeshu = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < yuansugeshu; i++)
    {
        if (arr[i] == zao)
        {
            printf("找到了，下标为%d\n", i);
            break;
        }
    }
    // 1.找到了跳转到这
    // 2.没找到这时候i==元素个数
    if (yuansugeshu == i)
        printf("没找到\n");
    return 0;
}
#endif
