// 数组做为函数，并将全部内容改为-1
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