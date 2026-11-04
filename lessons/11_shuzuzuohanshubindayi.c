// 数组做为函数，并将全部内容改为-1
/*
#include <stdio.h>
void set_add(int arr2[10], int sz2)
{
    for (int i = 0; i < sz2; i++)
    {
        arr2[i] = -1;
    }
}
void print_add(int arr2[10], int sz2)
{
    for (int n = 0; n < sz2; n++)
    {
        printf("%d\n", arr2[n]);
    }
    printf("\n");
}

int main()
{
    int arr1[10] = {0};
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    set_add(arr1, sz);
    print_add(arr1, sz);
}
    */
// 二维数组的数列
#include <stdio.h>
void print_arr(int arr[3][5], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int n = 0; n < c; n++)
        {
            printf("%d ", arr[i][n]);
        }
        printf("\n");
    }
}
void set_arr(int arr[3][5], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int n = 0; n < c; n++)
        {
            arr[i][n] = i + n;
        }
    }
}

int main()
{
    int arr[3][5] = {0};
    // 先打印原来的函数
    print_arr(arr, 3, 5);
    // 在设置数组的元素
    set_arr(arr, 3, 5);
    // 再次打印
    print_arr(arr, 3, 5);
}