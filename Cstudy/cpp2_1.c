#include <stdio.h>

int main(void){
    double height;

    printf("Please enter the position of the ball\n");
    scanf("%lf", &height);

    if (height >= 50 && height <= 60)
        printf("win");
    
    else
        printf("lose");
    

    return 0;
}