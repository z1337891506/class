#include <stdio.h>
void menu();
double jiafa(double x, double y)
{
    return x + y;
}
double jianfa(double x, double y)
{
    return x - y;
}
double chenfa(double x, double y)
{
    return x * y;
}
double chufa(double x, double y)
{
    return x / y;
}
int main()
{
    char choice;
    double num1, num2, jieg;

    do
    {
        menu();
        scanf(" %c", &choice);
        if (choice == '5')
        {
            printf("结束\n");
            break;
        }

        else
        {

            printf("请输入两个数\n");
            scanf("%lf %lf", &num1, &num2);
            switch (choice)
            {
            case '1':
                jieg = jiafa(num1, num2);
                break;
            case '2':
                jieg = jianfa(num1, num2);
                break;
            case '3':
                jieg = chenfa(num1, num2);
                break;
            case '4':
                if (num2 == 0)
                {
                    printf("错误,请输入非零的数\n");
                    continue;
                }

                jieg = chufa(num1, num2);
                break;
            default:
                printf("输入程序请重新输入\n");
                continue;
            }
            printf("%lf\n", jieg);
        }

    } while (1);
    return 0;
}

void menu()
{
    printf("请选择+,-,*,/,exit\n");
    printf("1.+\n");
    printf("2.-\n");
    printf("3.*\n");
    printf("4./\n");
    printf("5.exit\n");
}