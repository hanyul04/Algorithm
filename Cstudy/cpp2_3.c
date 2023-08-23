#include <stdio.h>

int main(void)
{
    int num = 0;
    int mul = 0;

    printf("n : ");
    scanf("%d", &num);
    if (num < 1 || num > 9)
        printf("Please enter a number within the valid range");

    for(int i=1;i<=9;i++){
        mul = i*num;
        printf("%d * %d = %d\n", num, i, mul);
    }

    return 0;
}