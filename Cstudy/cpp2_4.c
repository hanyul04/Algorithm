#include <stdio.h>

int main(void)
{
    int num1, num2, a, least;
    scanf("%d %d", &num1, &num2);
    if (num1 < 0 || num1 > 10000)
        printf("Please enter a number within the valid range");

    if (num2 < 0 || num2 > 10000)
        printf("Please enter a number within the valid range");

    // 최대공약수
    if (num1 > num2)
        a = num2;

    else
        a = num1;


    for (; a > 0; a--)
    {
        if (num1 % a == 0 && num2 % a == 0)
        {
            printf("%d\n", a);
            break;
        }
    }

    // 최소공배수
    for (; a > 0; a--)
    {
        if (num1 % a == 0 && num2 % a == 0)
        {
            least = a * (num1 / a) * (num2 / a);
            printf("%d", least);
            break;
        }
    }

    return 0;
}