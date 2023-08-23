#include <stdio.h>

int main(void){
    int arr[100];
    int i, j, a, n, k;
     
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++) 
        scanf("%d",&arr[i]);
     
    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if(arr[i]>arr[j])
                {
                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
     
    for(i = 1; i <= n; i++) {
        printf("%d ", arr[i-1]);
        if(i%k==0) printf("\n");
    }
        
    return 0;
}