#include <stdio.h>

int main(){
    int M, N;

    scanf("%d %d", &M, &N);

    for (int num = M; num <= N; num++) {
        int cnt = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0)
                cnt++;
        }
        if (cnt == 2)
            printf("%d\n", num);
    }

    return 0;
}