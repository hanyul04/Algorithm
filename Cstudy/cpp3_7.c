#include <stdio.h>

int get_GCD(int x, int y){
    int a;
    
    if (x > y)
        a = y;

    else
        a = x;


    for (; a > 0; a--)
    {
        if (x % a == 0 && y % a == 0)
        {
            printf("%d\n", a);
            break;
        }
    }
    return a;
}

int get_LCM(int x, int y){
    int a, least;
    
    for (; a > 0; a--)
    {
        if (x % a == 0 && y % a == 0)
        {
            least = a * (x / a) * (y / a);
            printf("%d", least);
            break;
        }
    }
    return least;
}


int main(void){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 < 0 || num1 > 10000)
        printf("Please enter a number within the valid range");

    if (num2 < 0 || num2 > 10000)
        printf("Please enter a number within the valid range");

    get_GCD(num1, num2);
    get_LCM(num1, num2);


    return 0;
}