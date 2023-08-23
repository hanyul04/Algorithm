#include <stdio.h>

int main (void){

    int num, i, k;
    int min = 24;
    int arr[10000];

    scanf("%d", &num);

    for(i=0;i<num;i++){
        scanf("%d ", &k);
        arr[i] = k;
    }

    for(i=0;i<num;i++){
        if(min>arr[i])
            min=arr[i];
    }

    printf("%d", min);

    return 0;
}