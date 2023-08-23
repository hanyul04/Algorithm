#include <stdio.h>

int main(void){
    int num1, num2;
    int count[24] = {};

    scanf("%d\n", &num1);
    
    for(num1;num1>0;num1--){
        scanf("%d ", &num2);
        count[num2] += 1;
    }

    for(int i=1;i<24;i++){
        printf("%d ", count[i]);
    }

        
    return 0;
}