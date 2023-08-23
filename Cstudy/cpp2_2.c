#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, max, min;

    scanf("%d\n %d\n %d\n %d\n %d", &num1, &num2, &num3, &num4, &num5);

    if (num1, num2, num3, num4, num5 > 1000000 || num1, num2, num3, num4, num5 < -1000000)
    {
        printf("Please enter a number within the valid range");
    }

    max = num1;
    min = num1;

    if (max < num2)
        max = num2;

    if (max < num3)
        max = num3;

    if (max < num4)
        max = num4;
    
    if (max < num5)    
        max = num5;

    if (min > num2)    
        min = num2;

    if (min > num3)    
        min = num3;

    if (min > num4)    
        min = num4;

    if (min > num5)    
        min = num5;


    printf("max : %d\n", max);
    printf("min : %d", min);

    return 0;
}