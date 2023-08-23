#include <stdio.h>

int main(){
    int r1, r2, num, d, i, result = 0;
    int x1, y1, x2, y2;
    int r_m, r_n, r_add, r_sub = 0;

    printf("테스트 케이스의 개수 : ");
    scanf("%d", &num);
    for(int i=0;i<num;i++){
        printf("정수 6개를 입력하세요 : ");
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        if(r1>=r2){
            r_m = r1;
            r_n = r2;
        }
        else{
            r_n = r1;
            r_m = r2;
        }

        d = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
        r_add = (r_m+r_n)*(r_m+r_n);
        r_sub = (r_m-r_n)*(r_m-r_n);
        
        if(x1==x2 && y1==y2 && r1==r2)
            result = -1;
        else if(r_add<d || r_sub>d)
            result = 0;
        else if(r_add==d || r_sub==d)
            result = 1;
        else
            result = 2;

        printf("%d", result);
    }


    return 0;
}