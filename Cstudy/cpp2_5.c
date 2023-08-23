#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int money = 0;
    int count = 0;

    scanf("%d", &money);
    if (money > 100000 || money < 1)
    {
        printf("Please enter a number within the valid range");
    }

    while (money > 0)
    {
        if (money % 5 == 0)
        {
            count += money / 5;
            break;
        }
        else
        {
            money -= 2;
            count += 1;
        }
    }
    if (money < 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d", count);
    }

    return 0;
}