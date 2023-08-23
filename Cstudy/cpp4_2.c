#include <stdio.h>

int main(void){
    int n, i;
    int fi[45]={0};


    scanf("%d", &n);

    if(n == 0){
        fi[0] = 0;
    }
    
    else if(n == 1){
        fi[1] = 1;
    }

    else if(n > 1){
        fi[0] = 0;
        fi[1] = 1;
        for(i=2;i<=n;i++){
            fi[i] = fi[i-1] + fi[i-2];
        }
    }

    printf("%d", fi[n]);

    return 0;
}