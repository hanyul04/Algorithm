#include <stdio.h>

int myswap(int* a, int* b){
    int num = *a;
    if(*a>*b){
        *a=*b;
        *b=num;
    }
}

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
        
    return 0;
}