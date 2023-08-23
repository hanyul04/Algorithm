#include <stdio.h>

int main(void){
    int num, i, k;
    int index=0;
    int arr[1000];

    scanf("%d", &num);

    for(i=0;i<num;i++){
        scanf("%d ", &k);
        arr[i] = k;
    }
    
    for(int j=0;j<num;j++){
        index=j;
        for(int a=0;a<num;a++){
            printf("%d", arr[index]);
            index++;
            if(index==num)
                index=0;
        }
        printf("\n");
        
    }
        
    return 0;
}