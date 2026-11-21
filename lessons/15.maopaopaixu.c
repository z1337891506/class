#include <stdio.h>
#define Max 1000
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void sort(int arr[], int n)
{
    int temp = 0;
    // 控制冒泡的趟数
    for (int i = 0; i < n - 1; i++)
    {
        // 进行比较和排序
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[Max];
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > Max)
    {
        return 1;
    }
    input(arr, n);
    sort(arr, n);
    output(arr, n);
    return 0;
}