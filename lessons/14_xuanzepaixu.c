#include <stdio.h>
#define MAX 1000
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
    int i = 0;
    int j = 0;
    int temp;
    int mintemp;

    for (i = 0; i < n; i++)
    {
        // 假设arr[i]元素就是最小值
        mintemp = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mintemp])
            {
                mintemp = j; // mintemp会不断变化成为数组中的最小值
            }
        }
        // 这时候mintemp已经是最小值的下标了
        if (mintemp != i)
        {
            temp = arr[i];
            arr[i] = arr[mintemp];
            arr[mintemp] = temp;
        }
    }
}

int main()
{
    int n = 0;
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX)
    {
        return 1;
    }
    int arr[MAX];
    input(arr, n);
    sort(arr, n);
    output(arr, n);
    return 0;
}